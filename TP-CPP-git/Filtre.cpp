#include "Filtre.h"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
/*import org.opencv.core.Core;
import org.opencv.core.Mat;
import org.opencv.imgcodecs.Imgcodecs;
import org.opencv.imgproc.Imgproc;
using namespace std;
using namespace cv;


/// Global Variables
int DELAY_CAPTION = 1500;
int DELAY_BLUR = 100;
int MAX_KERNEL_LENGTH = 31;

Mat src; Mat dst;
char window_name[] = "Smoothing Demo";

/// Function headers
int display_caption(const char* caption);
int display_dst(int delay);
*/

void FiltreGaussien() {
    /*
    /// Applying Gaussian blur
    if (display_caption("Gaussian Blur") != 0)
    {
        std::cout << "erreur";
       
    }

    //![gaussianblur]
    for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2)
    {
        GaussianBlur(src, dst, Size(i, i), 0, 0);
        if (display_dst(DELAY_BLUR) != 0)
        {
            std::cout << "erreur";
        }
    }
    //![gaussianblur]

    /// Applying Median blur
    if (display_caption("Median Blur") != 0)
    {
        std::cout << "erreur";
    }

    //![medianblur]
    for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2)
    {
        medianBlur(src, dst, i);
        if (display_dst(DELAY_BLUR) != 0)
        {
            std::cout << "erreur";
        }
    }
    */
}
void FiltreMedian() {
    cv::Mat imagesec = test.Choisir();
    cv::Mat image2;
    medianBlur(imagesec, image2, ksize)

        /*
        import org.opencv.core.Core;
        import org.opencv.core.Mat;
        import org.opencv.imgcodecs.Imgcodecs;
        import org.opencv.imgproc.Imgproc;


            public static void main(String args[]) {
                // Loading the OpenCV core library
                System.loadLibrary(Core.NATIVE_LIBRARY_NAME);

                // Reading the Image from the file and storing it in to a Matrix object
                String file = "C:/EXAMPLES/OpenCV/sample.jpg";
                Mat src = Imgcodecs.imread(file);

                // Creating an empty matrix to store the result
                Mat dst = new Mat();

                // Applying MedianBlur on the Image
                Imgproc.medianBlur(src, dst, 15);

                // Writing the image
                Imgcodecs.imwrite("E:/OpenCV/chap9/median.jpg", dst);

                System.out.println("Image Processed");
            }
        }
        */;
}
