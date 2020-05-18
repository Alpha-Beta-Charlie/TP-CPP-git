#include <iostream>
#include "controlleur.h"
using namespace cv;
using namespace std;

int main() {
	Mat image;
	std::string AdresseIm;
		do {
			cout << "entrez l'adresse de votre image:" << endl;
			cin >> AdresseIm;
			image = imread(AdresseIm);
				if (image.empty() == true) {                                    // je regarde si l'image existe
					cout << "Impossible de trouver l'image." << endl;
				}
		} while (image.empty() == true);

		controlleur ctlm(image);
		ctlm.instruction();

		waitKey(0);
		destroyAllWindows();
		//fin
		return 0;

}