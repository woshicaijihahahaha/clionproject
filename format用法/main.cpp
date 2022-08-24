#include <iostream>
#include <boost/format.hpp>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    boost::format fmt( "./data/%s/%d.%s" ); //图像文件格式
    cout << boost::format("%s") % "this is what i want" << endl;
    boost::format yy("%s");
    cout<<yy % "this is what eerrrrr want"<<endl;
boost::format ccc("hello I will buy %01d %s and %s");
    cout<<   ccc %3.1423334 %" tomato"%"potato"<<endl;
    for ( int i=0; i<5; i++ ) {
        cout<<(fmt % "color"    % (i + 1)   % "png").str()<<endl;
    //cout<<  (fmt % "depth" % (i + 1) % "pgm").str()<<endl; // 使用-1读取原始图
    }
    return 0;
}
