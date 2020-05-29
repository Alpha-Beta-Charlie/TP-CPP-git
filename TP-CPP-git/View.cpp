#include "View.h"

using namespace cv;
using namespace std;


View::View()
{}

void View::affichageMenu()
{
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour voir votre image." << std::endl;
	std::cout << "        - 2: Pour rentrer dans le menu 'filtre'. " << std::endl;
	std::cout << "        - 3: Pour lancer le calcul du gradient de votre image. " << std::endl;
	std::cout << "        - 4: Pour rentrer dans le menu 'Operation de morphologie mathematique'. " << std::endl;
	std::cout << "        - 5: Pour lancer la détection de contour de votre image." << std::endl;
	std::cout << "        - 6: Pour rentrer dans le menu 'Segmentation d'image'. " << std::endl;
	std::cout << "        - 7: Pour quitter" << std::endl;
	std::cout << "\n" << std::endl;
}

void View::affichageMenuFlitrage() {
	
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu Filtrage ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << ":  Tapez- 1: pour lancer le filtre median." << std::endl;
	std::cout << "        - 2: pour lancer le filtre gaussien." << std::endl;
	std::cout << "        - 3: pour retourner en arriere." << std::endl;
}
void View::typesDeFiltrageMedian() {
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu Filtrage Median~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << ":  Tapez- 1: pour lancer le filtre median faible." << std::endl;
	std::cout << ":       - 2: pour lancer le filtre median moyen." << std::endl;
	std::cout << ":       - 3: pour lancer le filtre median fort." << std::endl;
	std::cout << "        - 4: pour retourner en arriere." << std::endl;
}

void View::typesDeFiltrageGauss() {
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu Filtrage Gaussien~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << ":  Tapez- 1: pour lancer le filtre Gaussien faible." << std::endl;
	std::cout << ":       - 2: pour lancer le filtre Gaussien moyen." << std::endl;
	std::cout << ":       - 3: pour lancer le filtre Gaussien fort." << std::endl;
	std::cout << "        - 4: pour retourner en arriere." << std::endl;

}
void View::affichageMenuOperationMorphologieMath() {
	
	system("CLS");
	std::cout << "~~~~~~~~~~~~~ Menu Operations de morphologie mathematique  ~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer la dilatation." << std::endl;
	std::cout << "        - 2: pour lancer l'Erosion." << std::endl;
	std::cout << "        - 3: pour retourner en arriere." << std::endl;
}

void View::menuDilatation() {
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu Dilatation ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << ":  Tapez- 1: pour lancer une Dilatation faible." << std::endl;
	std::cout << ":       - 2: pour lancer une Dilatation moyenne." << std::endl;
	std::cout << ":       - 3: pour lancer une Dilatation forte." << std::endl;
	std::cout << "        - 4: pour retourner en arriere." << std::endl;

}

void  View::menuErosion() {
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu Erosion ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << ":  Tapez- 1: pour lancer une Erosion faible." << std::endl;
	std::cout << ":       - 2: pour lancer une Erosion moyenne." << std::endl;
	std::cout << ":       - 3: pour lancer une Erosion forte." << std::endl;
	std::cout << "        - 4: pour retourner en arriere." << std::endl;
}
void View::affichageMenuSegmentationImage() {
	
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu de Segmentations d’images ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Tapez:  - 1: pour lancer l'Operations de seuillages." << std::endl;
	std::cout << "Tapez:  - 2: pour lancer la Segmentation par croissance de region." << std::endl;
	std::cout << "        - 3: pour retourner en arriere." << std::endl;
}
void View::menuOperationSeuillages() {
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu Operations de seuillages ~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << ":  Tapez- 1: pour lancer une Operations de seuillages faible." << std::endl;
	std::cout << ":       - 2: pour lancer une Operations de seuillages moyenne." << std::endl;
	std::cout << ":       - 3: pour lancer une Operations de seuillages forte." << std::endl;
	std::cout << "        - 4: pour retourner en arriere." << std::endl;
}



void View::menuCanny() {
	system("CLS");
	std::cout << "~~~~~~~~~~~~~~~~~~ Menu de la detection de contours de votre image.~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << ":  Tapez- 1: pour lancer une detection de contours forte." << std::endl;
	std::cout << ":       - 2: pour lancer unedetection de contours moyenne." << std::endl;
	std::cout << ":       - 3: pour lancer une detection de contours faible." << std::endl;
	std::cout << "        - 4: pour retourner en arriere." << std::endl;

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
