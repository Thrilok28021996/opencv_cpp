#include <iostream> 
#include <string> 
#include <sstream> 
using namespace std; 
 
// OpenCV includes 
#include "opencv2/core.hpp" 
#include "opencv2/highgui.hpp" 
using namespace cv; 
 
int main(int argc, const char** argv) 
{ 
   // Read images 
   Mat color= imread("/Users/thrilok/Documents/mount-kailash.jpeg"); 
   Mat gray= imread("/Users/thrilok/Documents/mount-kailash.jpeg",cv::IMREAD_GRAYSCALE); 
  if(! color.data ) // Check for invalid input 
   { 
      cout << "Could not open or find the image" << std::endl;
      return -1;
   }

   // write images
   imwrite("/Users/thrilok/Documents/mount-kailashGray.jpeg",gray);

   // Get some pixel with opencv function

   int myRow = color.cols-1;
   int myCol = color.rows-1;

   Vec3b pixel = color.at<Vec3b>(myRow, myCol);
   cout << "Pixel value (B,G,R) : ("<<
   (int)pixel[0] << "," << (int)pixel[1] << "," <<
   (int)pixel[2] << ")" << endl;

   //show images
   imshow("BGR", color);
   imshow("gray", gray);

   waitKey(0);
   return 0;
}


