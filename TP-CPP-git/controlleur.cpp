#include "controlleur.h"
using namespace cv;
using namespace std;
controlleur::controlleur(cv::Mat _image)
	:menu(0),choix(0),image(_image)
{}
void controlleur::setmenu(int _menu) {
	menu = _menu;
	instruction();
}


void controlleur::instruction()
{
	View vue;
	Modèle mdl;

	//------------------------------------------//
	
	if (menu == 0){  
	                      // Affichage menu de base.
		vue.affichageMenu();
		setmenu(vue.reMenu());
	}

	//------------------------------------------//

	else if (menu == 1){                                       // Si l'utilisateur tape 1.
		vue.voirIm(image,"Image originale");
		
		setmenu(0);
	}

	//------------------------------------------//

	else if (menu == 2){                                       // Si l'utilisateur tape 2.
		vue.affichageMenuFlitrage();
	menu2:
		choix = vue.reChoix();
		
		if (choix == 1) {
			mdl.FiltreMedian(image);
			goto menu2;
			
		}
		else if (choix == 2) {
			mdl.FiltreGaussien(image);
			goto menu2;
		}
		else if (choix == 3) {
			setmenu(0);
		}
		else {
			
			instruction();
		}
	}

	//------------------------------------------//

	else if (menu == 3){                                       // Si l'utilisateur tape 3.
		mdl.calculSobel(image);
		setmenu(0);
	}

	//------------------------------------------//

	else if (menu == 4){                                       // Si l'utilisateur tape 4.
		vue.affichageMenuOperationMorphologieMath();
		menu4:
		choix = vue.reChoix();
		if (choix == 1) {
			mdl.Dilatation(image);
			goto menu4;
		}
		else if (choix == 2) {
			mdl.Erosion(image);
			goto menu4;
		}
		else if (choix == 3) {
			setmenu(0);
		}
		else {
			instruction();
		}
	}

	//------------------------------------------//

	else if (menu == 5){         // Si l'utilisateur tape 5.
		mdl.canny(image);
		setmenu(0);
	}

	//------------------------------------------//

	else if (menu == 6){                                       // Si l'utilisateur tape 6.
		vue.affichageMenuSegmentationImage();
		menu6:
		choix = vue.reChoix();
		if (choix == 1) {
			mdl.OperationSeuillage(image);
			goto menu6;
		}
		else if (choix == 2) {
			mdl.SegmentationRegion(image);
			goto menu6;
		}
		else if (choix == 3) {
			setmenu(0);
		}
		else {

			instruction();
		}
	}
	else if (choix == 7) {
		std::cout << "enrevoir";                        //si 'utilisateur tape 7
	}
	//------------------------------------------//

	else {
		
		setmenu(0);
	}
}
