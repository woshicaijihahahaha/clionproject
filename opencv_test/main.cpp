#include <iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
void storedata()
{
    // 1.create our writter
    cv::FileStorage fs("test.yml", cv::FileStorage::WRITE);

    // 2.Save an int
    int imageWidth= 5;
    int imageHeight= 10;
    fs << "imageWidth" << imageWidth;
    fs << "imageHeight" << imageHeight;

    // 3.Write a Mat
    cv::Mat m1= Mat::eye(3,3, CV_8U);
    cv::Mat m2= Mat::ones(3,3, CV_8U);
    cout<<m1+1<<endl;
    cout<<m2+2<<endl;
    cout<<(m1+1).mul(m1+2)<<endl;
    cv::Mat resultMat= (m1+1).mul(m1+2);
    fs << "resultMat" << resultMat;

    // 4.Write multi-variables
    cv::Mat cameraMatrix = (Mat_<double>(3,3) << 1000, 0, 320, 0, 1000, 240, 0, 0, 1);
    cv::Mat distCoeffs = (Mat_<double>(5,1) << 0.1, 0.01, -0.001, 0, 0);
    fs << "cameraMatrix" << cameraMatrix << "distCoeffs" << distCoeffs;

    // 5.Save local time
    time_t rawtime; time(&rawtime); //#include <time.h>
    fs << "calibrationDate" << asctime(localtime(&rawtime));

    // 6.close the file opened
    fs.release();
}
void readdata()
{
    // read data using operator []
    cv::FileStorage fs("test.yml", FileStorage::READ);
    int width;
    int height;
    fs["imageWidth"]>>width;
    fs["imageHeight"]>>height;
    cout<<"width readed = "<<width<<endl;
    cout<<"height readed = "<<height<<endl<<endl;

// read Mat
    cv::Mat resultMatRead;
    fs["resultMat"]>>resultMatRead;
    cout<<"resultMat readed = "<<resultMatRead<<endl<<endl;

    cv::Mat cameraMatrixRead,distCoeffsRead;
    fs["cameraMatrix"]>>cameraMatrixRead;
    fs["distCoeffs"]>>distCoeffsRead;
    cout<<"cameraMatrix readed = "<<cameraMatrixRead<<endl;
    cout<<"distCoeffs readed = "<<distCoeffsRead<<endl<<endl;

// read string
    string timeRead;
    fs["calibrationDate"]>>timeRead;
    cout<<"calibrationDate readed = "<<timeRead<<endl<<endl;

    fs.release();
}
void luodelige1()//旋转向量到旋转矩阵的转换
{
    //旋转向量  模代表旋转角度
    Mat src = (Mat_<double>(3, 1) << 0, 0 , CV_PI/2);
    cout << src << endl;
    Mat dst;
    //转化成旋转矩阵
    Rodrigues(src, dst);
    cout << dst << endl;

    Mat vec = (Mat_<double>(3, 1) << 1, 0, 0);
    Mat result = dst * vec;
    cout << result << endl;


}
void test02()
{
    //旋转矩阵
    Mat src = (Mat_<double>(3, 3) << 0, -1, 0,1,0,0,0,0,1);
    cout << src << endl;
    Mat out;
    Rodrigues(src, out);
    cout << out << endl;
}
int main() {
    //readdata();
    luodelige1();

    cout<<"---------------------------"<<endl;
    test02();
    return 0;
}
