#include "Filtre.h"
/*import org.opencv.core.Core;
import org.opencv.core.Mat;
import org.opencv.imgcodecs.Imgcodecs;
import org.opencv.imgproc.Imgproc;*/
using namespace std;
using namespace cv;


/*// Global Variables
int DELAY_CAPTION = 1500;
int DELAY_BLUR = 100;
int MAX_KERNEL_LENGTH = 31;

Mat src; Mat dst;
char window_name[] = "Smoothing Demo";

/// Function headers
int display_caption(const char* caption);
int display_dst(int delay);
*/
Filtre::Filtre()
{}

void Filtre::FiltreGaussien(cv::Mat _image) {
 
}
cv::Mat Filtre::FiltreMedian(cv::Mat _image) {
    Mat inter2;
    medianBlur(_image, inter2, 15);
    return inter2;
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
