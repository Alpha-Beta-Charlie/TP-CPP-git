# include "voirImage.h"
using namespace cv;
using namespace std;

void voirImage::voirIm(cv::Mat _image)
{
    namedWindow("image", WINDOW_NORMAL);
    imshow("image", _image);                              //affichage de l'image
    waitKey(0);



}

cv::Mat voirImage::Choisir()
{
    string AdresseIm;                                     // Création de la varible adresse de l'image
    Mat image;                             //creation de l'image
    do {
        cout << "entrez l'adresse de votre image:" << endl;
        cin >> AdresseIm;
        image = imread(AdresseIm);                                      
        if (image.empty() == true) {                                    // je regarde si l'image existe
            cout << "Impossible de trouver l'image." << endl;
        }
    } while (image.empty() == true);
    return image;
}