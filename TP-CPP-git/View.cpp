#include "View.h"

using namespace cv;
using namespace std;


View::View()
{}

void View::affichageMenu()
{
	std::cout << "~~~~~~~~~~~~~ Menu ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour voir votre image." << std::endl;
	std::cout << "        - 2: Pour rentrer dans le menu 'filtre'. " << std::endl;
	std::cout << "        - 3: Pour lancer le calcule du gradient de votre image. " << std::endl;
	std::cout << "        - 4: Pour rentrer dans le menu 'Operation de morphologie mathematique'. " << std::endl;
	std::cout << "        - 5: Pour lancer la detection de contour de votre image." << std::endl;
	std::cout << "        - 6: Pour rentrez dans le menu 'Segmentation d'image'. " << std::endl;
	std::cout << "\n" << std::endl;
}

void View::affichageMenuFlitrage() {
	std::cout << "~~~~~~~~~~~~~ Menu Filtrage ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer le filtre median." << std::endl;
	std::cout << "        - 2: pour lancer le filtre gaussien." << std::endl;
	std::cout << "        - 3: pour retourner en arriere." << std::endl;
}

void View::affichageMenuOperationMorphologieMath() {
	std::cout << "~~~~~~~~~~~~~ Menu Operations de morphologie mathematique  ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer la dilatation." << std::endl;
	std::cout << "        - 2: pour lancer l'Erosion." << std::endl;
	std::cout << "        - 3: pour retourner en arriere." << std::endl;
}

void View::affichageMenuSegmentationImage() {
	std::cout << "~~~~~~~~~~~~~ Menu de Segmentations d’images ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer l'Operations de seuillages." << std::endl;
	std::cout << "Tapez:  - 2: pour lancer la Segmentation par croissance de région." << std::endl;
	std::cout << "        - 3: pour retourner en arriere." << std::endl;
}


int View::reChoix()
{
	int choix;
	std::cin >> choix;
	return choix;
}

int View::reMenu() 
{
	int menu;
	std::cin >> menu;
	return menu;
}

void View::voirIm(cv::Mat _image, std::string _nom)
{
	namedWindow(_nom);
	imshow(_nom, _image);                              //affichage de l'image	waitKey(0);
	waitKey(0);
	destroyWindow(_nom);
	
}

void View::erreur() {
	std::cout << "Erreur, reommencez !" << std::endl;
}