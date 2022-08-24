#include <iostream>
using namespace std;
#include<vector>

// Eigen 核心部分
#include <eigen3/Eigen/Core>
// 稠密矩阵的代数运算（逆，特征值等）
#include <eigen3/Eigen/Dense>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include <Eigen/SVD>

using namespace Eigen;
void showvec(Vector3d a[]){
    for (int i=0;i<a->size();i++){
        cout<<a[i].transpose();
        cout<<"------"<<i<<endl;
    }

}
void test01()
{
    Eigen::Vector3d v1{0,0,1};

    Eigen::Vector3d v2{1,1,sqrt(2)};

    Eigen::Matrix3d R;

    R = Eigen::Quaterniond::FromTwoVectors(v1,v2).toRotationMatrix();

    cout<<"RotatationMatrix is :"<<endl<<R<<endl;

    cout<<"R*v1="<<endl<<R*v1<<endl;
    Quaterniond v3=Eigen::Quaterniond::FromTwoVectors(v1,v2);
    cout<<"v3*v1="<<endl<<v3*v1<<endl;
}
void test02()
{
    VectorXf v(2);
    MatrixXf m(2, 2), n(2, 2);
    v << -1, 2;
    m << 1, -2,
            -3,  4;
//求v的所有元素的平方和
    cout << "v.squareNorm()=" << v.squaredNorm() << endl;
//求v的所有元素的平方和再开根号
    cout << "v.norm()=" << v.norm() << endl;
//求v的各个元素的L1范数
    cout << "v.lpNorm<1>=" << v.lpNorm<1>() << endl;
//求v的各个元素的无穷范数
    cout << "v.lpNorm<Infinity>()=" << v.lpNorm<Infinity>() << endl;
    cout << endl;
//求m的各个元素的平方和
    cout << "m.squareNorm()=" << m.squaredNorm() << endl;
//求m的各个元素的L1范数
    cout << "m.lpNorm<1>()=" << m.lpNorm<1>() << endl;
//求m的各个元素的无穷范数
    cout << "m.lpNorm<Infinity>()=" << m.lpNorm<Infinity>() << endl;
vector<double>cc(3);
Vector2d c1(-1,2);
Vector2d c2(3,-4);
Vector2d c3(2,0);
cc[0]=c1.lpNorm<1>();
cc[1]=c2.lpNorm<1>();
    cc[2]=c3.lpNorm<1>();
    cout<<cc[0]<<endl;
    cout<<cc[1]<<endl;
    cout<<cc[2]<<endl;
    int ba= min_element(cc.begin(),cc.end())- cc.begin();
    cout<<ba<<endl;
}
int main() {
   //  = MatrixXf::Random(3,2);
//test01();
test02();






//
//
//
//    Vector3d a(2,1,1);
//    Vector3d b(0,0,1);
//  cout<<"a*b: \n"<<a.dot(b)<<endl;
//   cout<<"axb: \n"<<a.cross(b)<<endl;
//   // b = (tmp - a * (a.transpose() * tmp)).normalized();
//    Vector3d tmp(0, 0, 1);
//    Vector3d d;
//    d=tmp - a * (a.transpose() * tmp);
//    cout<<d<<endl;
//    cout<<"--------------------"<<endl;
//   Vector3d mm(2,2,1);
//    mm.normalize();
//   cout<<mm<<endl;
//
//
//Vector3d qq[3];
//qq[0]<<1,2,3;
//qq[1]<<2,3,4;
//qq[2]<<3,4,5;
//    showvec(qq);
//    Matrix3d m;
//    m<<1,2,3,
//    6,5,6,
//    7,8,9;
//    cout<<m.rightCols(1)<<endl;
//    cout<<"--------------------"<<endl;
//    cout<<m.rightCols(2)<<endl;
//    cout<<"--------------------"<<endl;
//    cout<<m.cols()<<endl;//列数
//    cout<<"--------------------"<<endl;
//    for (int i=0;i<m.cols();i++)
//    {
//        cout<<m.col(i)<<endl;
//    }
//    cout << "Here is the matrix m:\n"  << m << endl;
//    Eigen::JacobiSVD<Eigen::MatrixXd> svd(m, Eigen::ComputeThinU | Eigen::ComputeThinV);///A=USV∗
//    //JacobiSVD<MatrixXf, ComputeThinU | ComputeThinV> svd(m);
//    cout << "Its singular values are:\n"  << svd.singularValues() << endl;
//    cout << "Its left singular vectors are the columns of the thin U matrix:\n"  << svd.matrixU() << endl;
//    cout << "Its right singular vectors are the columns of the thin V matrix:\n"  << svd.matrixV() << endl;
//    Vector3d rhs(1, 0, 0);
//    cout << "Now consider this rhs vector:\n" << rhs << endl;
//   //Vector3d p=m.solve(rhs);
//   // cout << "A least-squares solution of m*x = rhs is:\n" <<  svd.solve(rhs) << endl;
    return 0;
}
