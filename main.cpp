#include <iostream>
#include<cv.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

string path="/home/begaiym/OpenCV/1.jpg";
string path2 = "/home/begaiym/OpenCV/2.jpg";
Mat a, b, res;
void bitwise ();
int main() {
    bitwise();
    return 0;
}
void bitwise (){
    a = imread(path);
    b = imread(path2);

    cvNamedWindow("1");
    cvNamedWindow("2");

    imshow("1", a );
    imshow("2", b);
    cvNamedWindow("bit_And",1);
    cvNamedWindow("bit_Or",1);
    cvNamedWindow("bit_Xor",1);

    bitwise_and(a,b,res);
    imshow("bit_And", res);

    bitwise_or(a,b,res);
    imshow("bit_Or", res);

    bitwise_xor(a,b,res);
    imshow("bit_Xor", res);

    waitKey(0);
}