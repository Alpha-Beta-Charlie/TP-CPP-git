#include "voirImage.h"
# include <opencv2/opencv.hpp>
# include <iostream>

using namespace cv;
using namespace std;

void voirImage::voirIm()
{

   string AdresseIm;                                     // Création de la varible adresse de l'image
  cout << "entrez l'adresse de votre image" << endl;
    cin >> AdresseIm;
    Mat image = imread(AdresseIm);

   /* if (image.empty()) {                                    // je regarde si l'image existe
        cout << "Impossible de trouver l'image" << endl;
        cin.get();                                          //en attente d'une touche 
        
    }
  */
    namedWindow("image",WINDOW_NORMAL);
    imshow("image", image);                              //affichage de l'image
    waitKey(0);
    

  
}