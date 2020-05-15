#include "controlleur.h"

controlleur::controlleur()
	:menu(0),choix(0)
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
	if (menu == 0){
		Mat imagesec = vue.Choisir();
		setmenu(1);

	}
	else if (menu == 1){}
	else if (menu == 2){}
	else if (menu == 3){
		//choix dans se menu...
		if (choix == 1) {

		}
		else if (choix == 2) {

		}
	}
	else if (menu == 4){}
	else if (menu == 5){
		//choix dans se menu...
		if (choix == 1) {

		}
		else if (choix == 2) {

		}
	}
	else if (menu == 6){}
	else if (menu == 7){
		//choix dans se menu...
		if (choix == 1) {

		}
		else if (choix == 2) {

		}
	}

}
