#include "controlleur.h"
using namespace cv;
using namespace std;
controlleur::controlleur(cv::Mat _image)
	:menu(0),choix(0),image(_image)
{}
void controlleur::setchoix(int _choix)
{
	choix = _choix;
	instruction();
}
void controlleur::setmenu(int _menu) {
	menu = _menu;
	instruction();
}


void controlleur::instruction()
{
	View vue;
	Modèle mdl;
	if (menu == 0){
		vue.affichageMenu();
		setmenu(vue.reMenu());
	}
	else if (menu == 1){
		vue.voirIm(image,"Image originale");;
		setmenu(0);
	}
	else if (menu == 2){
		vue.affichageMenuFlitrage();
		choix = vue.reChoix();
		if (choix == 1) {
			mdl.FiltreMedian(image);
			setmenu(0);
		}
		else if (choix == 2) {
			mdl.FiltreGaussien(image);
			setmenu(0);
		}
	}
	else if (menu == 3){
	
	}
	else if (menu == 4){
		vue.affichageMenuOperationMorphologieMath();
		choix = vue.reChoix();
		if (choix == 1) {
			setmenu(0);
		}
		else if (choix == 2) {
			setmenu(0);
		}
	}
	else if (menu == 5){

	}
	else if (menu == 6){
		vue.affichageMenuSegmentationImage();
		choix = vue.reChoix();
		if (choix == 1) {
			setmenu(0);
		}
		else if (choix == 2) {
			setmenu(0);
		}
	}

}
