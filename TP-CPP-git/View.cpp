#include "View.h"

Menu::Menu()
{
}
void Menu::affichageMenu()
{
	std::cout << "~~~~~~~~~~~~~ Menu ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour voir votre image." << std::endl;
	std::cout << "        - 2: Pour rentrer dans le menu 'filtre'. " << std::endl;
	std::cout << "        - 3: Pour lancer le calcule du gradient de votre image. " << std::endl;
	std::cout << "        - 4: Pour rentrer dans le menu 'Operation de morphologie mathematique'. " << std::endl;
	std::cout << "        - 5: Pour lancer la detection de contour de votre image." << std::endl;
	std::cout << "        - 6: Pour rentrez dans le menu 'Segmentation d'image'. " << std::endl;
}
void Menu::affichageMenuFlitrage() {
	std::cout << "~~~~~~~~~~~~~ Menu Filtrage ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer le filtre median" << std::endl;
	std::cout << "        - 2: pour lancer le filtre gaussien" << std::endl;
}
void Menu::affichageMenuOperationMorphologieMath() {
	std::cout << "~~~~~~~~~~~~~ Menu Operations de morphologie mathematique  ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer la dilatation" << std::endl;
	std::cout << "        - 2:  pour lancer l'Erosion" << std::endl;

}
void Menu::affichageMenuSegmentationImage() {
	std::cout << "~~~~~~~~~~~~~ Menu de Segmentations d’images ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer l'Operations de seuillages" << std::endl;
	std::cout << "Tapez:  - 2: pour lancer la Segmentation par croissance de région" << std::endl;
}
using namespace cv;
using namespace std;

void voirImage::voirIm(cv::Mat _image, std::string _nom)
{
	namedWindow(_nom);
	imshow(_nom, _image);                              //affichage de l'image
	waitKey(0);
	destroyWindow(_nom);



}

cv::Mat voirImage::Choisir()
{
	// Création de la varible adresse de l'image
	Mat image;                             //creation de l'image
	do {
		cout << "entrez l'adresse de votre image:" << endl;
		cin >> AdresseIm;
		image = imread(AdresseIm);
		if (image.empty() == true) {                                    // je regarde si l'image existe
			cout << "Impossible de trouver l'image." << endl;
		}
	} while (image.empty() == true);
	return image;
}
