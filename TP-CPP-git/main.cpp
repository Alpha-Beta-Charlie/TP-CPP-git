#include <iostream>
#include "voirImage.h"
#include "Menu.h"
using namespace cv;

int main() {
	voirImage test;
	Mat imagesec = test.Choisir();
	Menu rt;
	debut:
	rt.affichageMenu();
	int choix;
	std::cin >> choix;
	if (choix == 1) {
		test.voirIm(imagesec);
		goto debut;
	}
	else if (choix == 2) {
		rt.affichageMenuFlitrage();
	}
	else if (choix == 4) {
		rt.affichageMenuOperationMorphologieMath();
	}
	else if (choix == 6) {
		rt.affichageMenuSegmentationImage();
	}
	else {
		std::cout << "Erreur, veuillez recommencer." << std::endl;
		goto debut;
	}
	return 0;
}