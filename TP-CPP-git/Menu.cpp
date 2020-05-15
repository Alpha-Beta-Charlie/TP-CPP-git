#include "Menu.h"

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
	std::cout << "Tapez:  - 1: pour lancer le filtre median"<<std::endl;
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
void Menu::choixMenu() {

	voirImage test;
	Mat imagesec = test.Choisir();
	Menu rt;
	Filtre ttfil;
debut:
	rt.affichageMenu();
	int choix;
	std::cin >> choix;
	if (choix == 1) {
		test.voirIm(imagesec, "Image originale");
		goto debut;
	}
	else if (choix == 2) {
		choix1:
		rt.affichageMenuFlitrage();
		int rt;
		std::cin >> rt;
		if (rt == 1) {
			Mat imageMedian = ttfil.FiltreMedian(imagesec);
			test.voirIm(imageMedian, "image avec filtre median");
			goto debut;
		}
		else if (rt == 2) {
			Mat imageGaussien = ttfil.FiltreGaussien(imagesec);
			test.voirIm(imageGaussien, "Image avec filtre gaussien");
			goto debut;
		}
		else {
			std::cout << "la commande n'est pas valide" <<std::endl;
			goto choix1;
		}
	}
	else if (choix == 3) {
		Derivation azer;
		Mat imageGradient = azer.calculSobel(imagesec);
		test.voirIm(imageGradient, "Image avec filtre gaussien");
		goto debut;
	}
	else if (choix == 4) {
		choix2:
		rt.affichageMenuOperationMorphologieMath();
		int pp;
		std::cin >> pp;
		if (pp == 1) {

		}
		else if (pp== 2) {

		}
		else {
			std::cout << "la commande n'est pas valide" << std::endl;
			goto choix2;
		}
	}
	else if (choix == 6) {
		choix3:
		rt.affichageMenuSegmentationImage();

		int bb;
		std::cin >> bb;
		if (bb == 1) {

		}
		else if (bb == 2) {

		}
		else {
			std::cout << "la commande n'est pas valide" << std::endl;
			goto choix3;
		}
	}
	else {
		std::cout << "Erreur, veuillez recommencer." << std::endl;
		goto debut;
	}

}
