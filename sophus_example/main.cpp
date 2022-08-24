#include <iostream>
#include <Eigen/Core>
#include <Eigen/Geometry>
#include "sophus/se3.hpp"
#include "sophus/so2.hpp"

#include <cmath>

using namespace std;
using namespace Eigen;
using Vec3=Matrix<double,3,1>;
void test01(){
    // cout<<3*-2<<endl;
    Matrix3d R = AngleAxisd(M_PI / 2, Vector3d(0, 0, 1)).toRotationMatrix();
    // 或者四元数
    cout<<R<<endl;
    cout<<R.col(2)<<endl;
    //Matrix3d t<<
    double phi=0;
    //  q = q * Sophus::SO3d::exp(Vec3(delta[3], delta[4], delta[5])).unit_quaternion();  // right multiplication with so3
    Quaterniond q(1,0,0,0);
    q=q*Sophus::SO3d::exp(Vec3(1,0,0)).unit_quaternion();
    cout<<q.coeffs()<<endl;
    Vec3 dq=q.vec();

    cout<<dq<<endl;

    cout<<Sophus::SO3d::exp(Vec3(1,0,0)).matrix()<<endl;
    cout<<cos(phi)<<endl;

    Sophus::SO2d SO2_R(phi);
    Sophus::SO2d SO2_R1(0);
    Matrix3d m_q=q*Matrix3d::Identity();

    cout<<"-------------------"<<endl;
    cout<<m_q<<endl;
    cout<<Matrix3d::Identity()<<endl;
    cout<<"-------------------"<<endl;
//cout<<SO2_R<<endl;
    /*Quaterniond q(R);
    Sophus::SO3d SO3_R(R);              // Sophus::SO3d可以直接从旋转矩阵构造
    Sophus::SO3d SO3_q(q);              // 也可以通过四元数构造*/
    // 二者是等价的
    cout<<"R1:"<<phi<<endl;
    cout << "SO(2) from matrix:\n" << SO2_R.matrix() << endl;
    double phi_=SO2_R.log();
    cout<<"so2 = " <<phi_<<endl;

    /* cout << "SO(3) from matrix:\n" << SO3_R.matrix() << endl;
     cout << "SO(3) from quaternion:\n" << SO3_q.matrix() << endl;
     cout << "they are equal" << endl;

     // 使用对数映射获得它的李代数
     Vector3d so3 = SO3_R.log();
     cout << "so3 = " << so3.transpose() << endl;
     // hat 为向量到反对称矩阵
     cout << "so3 hat=\n" << Sophus::SO3d::hat(so3) << endl;
     // 相对的，vee为反对称到向量
     cout << "so3 hat vee= " << Sophus::SO3d::vee(Sophus::SO3d::hat(so3)).transpose() << endl;

     // 增量扰动模型的更新
     Vector3d update_so3(1e-4, 0, 0); //假设更新量为这么多
     Sophus::SO3d SO3_updated = Sophus::SO3d::exp(update_so3) * SO3_R;
     cout << "SO3 updated = \n" << SO3_updated.matrix() << endl;

     cout << "*******************************" << endl;
     // 对SE(3)操作大同小异
     Vector3d t(1, 0, 0);           // 沿X轴平移1
     Sophus::SE3d SE3_Rt(R, t);           // 从R,t构造SE(3)
     Sophus::SE3d SE3_qt(q, t);            // 从q,t构造SE(3)
     cout << "SE3 from R,t= \n" << SE3_Rt.matrix() << endl;
     cout << "SE3 from q,t= \n" << SE3_qt.matrix() << endl;
     // 李代数se(3) 是一个六维向量，方便起见先typedef一下
     typedef Eigen::Matrix<double, 6, 1> Vector6d;
     Vector6d se3 = SE3_Rt.log();
     cout << "se3 = " << se3.transpose() << endl;
     // 观察输出，会发现在Sophus中，se(3)的平移在前，旋转在后.
     // 同样的，有hat和vee两个算符
     cout << "se3 hat = \n" << Sophus::SE3d::hat(se3) << endl;
     cout << "se3 hat vee = " << Sophus::SE3d::vee(Sophus::SE3d::hat(se3)).transpose() << endl;

     // 最后，演示一下更新
     Vector6d update_se3; //更新量
     update_se3.setZero();
     update_se3(0, 0) = 1e-4;
     Sophus::SE3d SE3_updated = Sophus::SE3d::exp(update_se3) * SE3_Rt;
     cout << "SE3 updated = " << endl << SE3_updated.matrix() << endl;*/

}
void test02()
{
    Quaterniond q(1,2,3,4);
    cout<<q.coeffs()<<endl;
    Quaterniond p=q.normalized();//单位四元数
    cout<<p.coeffs()<<endl;
    cout<<p.inverse().coeffs()<<endl;//单位四元数的逆
    cout<<p.conjugate().coeffs()<<endl;//单位四元数的逆=单位四元数的共轭

}
void test03()
{
    Quaterniond q;
  //  Matrix3d R=AngleAxisd(M_PI/2,Vector3d(0, 0, 1)).toRotationMatrix();
    Matrix3d R=AngleAxisd(M_PI/2,Vector3d(1.0/ sqrt(3.0), 1.0/ sqrt(3.0), 1.0/ sqrt(3.0))).toRotationMatrix();
    q=R;
    cout<<"q:\n"<<q.coeffs()<<endl;
    cout<<"-----------------"<<endl;
    cout<<q.w()<<endl;
    cout<<q.x()<<endl;
    cout<<q.y()<<endl;
    cout<<q.z()<<endl;
    double qv_abs=sqrt(q.x()*q.x()+q.y()*q.y()+q.z()*q.z());\
    cout<<"qv abs:\n"<<qv_abs<<endl;
    Vector3d q_v(q.x(),q.y(),q.z());
    Vector3d u=q_v/qv_abs;
    cout<<"u:\n"<<u<<endl;
    double theta=atan(qv_abs/q.w())*180/M_PI;
    cout<<"theta:\n"<<theta<<endl;
    cout<<1.0/ sqrt(3.0)<<endl;

}
int main() {
   test03();
    return 0;
}
