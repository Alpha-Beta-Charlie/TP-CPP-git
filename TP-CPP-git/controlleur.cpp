#include "controlleur.h"
using namespace cv;
using namespace std;
controlleur::controlleur(cv::Mat _image)
	:menu(0),choix(0),decision(0),image(_image)
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

	else if (menu == 2){ 
	menu2:                                                                                     // Si l'utilisateur tape 2.
		vue.affichageMenuFlitrage();
	
		choix = vue.reChoix();
		
		if (choix == 1) {
			menu21:
			vue.typesDeFiltrageMedian();
			decision = vue.reChoix();
			if(decision==1){
				mdl.FiltreMedian(image,5);
			}
			else if (decision == 2) {
				mdl.FiltreMedian(image,11);
			}
			else if (decision == 3) {
				mdl.FiltreMedian(image,19);
			}
			else if (decision == 4) {
				goto menu2;
			}
		
			goto menu21;
			
		}
		else if (choix == 2) {
			menu22:
			vue.typesDeFiltrageGauss();
			decision = vue.reChoix();

			if (decision == 1) {
				mdl.FiltreGaussien(image,0);
			}
			else if (decision == 2) {

				mdl.FiltreGaussien(image, 5);
			}
			else if (decision == 3) {

				mdl.FiltreGaussien(image, 15);
			}
			else if (decision == 4) {

				goto menu2;
			}
		

			goto menu22;
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

	else if (menu == 4){
	menu4:                                               // Si l'utilisateur tape 4.
		vue.affichageMenuOperationMorphologieMath();
		
		choix = vue.reChoix();
		if (choix == 1) {
			menu41:
			vue.menuDilatation();
			decision = vue.reChoix();

			if (decision == 1) {
				mdl.Dilatation(image, 1);
			}
			else if (decision == 2) {

				mdl.Dilatation(image, 3);
			}
			else if (decision == 3) {

				mdl.Dilatation(image,5);
			}
			else if (decision == 4) {

				goto menu4;
			}

			goto menu41;
		}
		else if (choix == 2) {
			menu42:
			vue.menuErosion();
			decision = vue.reChoix();

			if (decision == 1) {
				mdl.Erosion(image,1);
			}
			else if (decision == 2) {

				mdl.Erosion(image, 5);
			}
			else if (decision == 3) {

				mdl.Erosion(image, 10);
			}
			else if (decision == 4) {

				goto menu4;
			}

			goto menu42;
		}
		else if (choix == 3) {
			setmenu(0);
		}
		else {
			instruction();
		}
	}

	//------------------------------------------//

	else if (menu == 5) {
	menu5:
		vue.menuCanny();                                        // Si l'utilisateur tape 5.
		decision = vue.reChoix();

		if (decision == 1) {
			mdl.canny(image, 1);
		}
		else if (decision == 2) {

			mdl.canny(image, 100);
		}
		else if (decision == 3) {

			mdl.canny(image, 600);
		}
		else if (decision == 4) {
			setmenu(0);

		}
		goto menu5;

	}
	//------------------------------------------//

	else if (menu == 6){ 
	 menu6:                      // Si l'utilisateur tape 6.
		vue.affichageMenuSegmentationImage();
		
		choix = vue.reChoix();
		if (choix == 1) {
			menu61:
			vue.menuOperationSeuillages();
			decision = vue.reChoix();

			if (decision == 1) {
				mdl.OperationSeuillage(image, 10);
			}
			else if (decision == 2) {

				mdl.OperationSeuillage(image, 50);
			}
			else if (decision == 3) {

				mdl.OperationSeuillage(image, 100);
			}
			else if (decision == 4) {

				goto menu6;
			}
			goto menu61;
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
	else if (menu == 7) {
		std::cout << "a bientot"; 
		exit(0);                                  //si 'utilisateur tape 7
		
		
	}
	//------------------------------------------//

	else {
		
		setmenu(0);
	}


}
