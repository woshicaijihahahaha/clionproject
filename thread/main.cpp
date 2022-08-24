//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <stdlib.h>
//
//int cnt = 20;
//std::mutex m;
//void t1()
//{
//    while (cnt > 0)
//    {
//        std::lock_guard<std::mutex> lockGuard(m);
//       // std::m.lock();
//        if (cnt > 0)
//        {
//            //sleep(1);
//            --cnt;
//            std::cout << cnt << std::endl;
//        }
//       // std::m.unlock();
//
//    }
//}
//void t2()
//{
//    while (cnt > 0)
//    {
//        std::lock_guard<std::mutex> lockGuard(m);
//        // std::m.lock();
//        if (cnt > 0)
//        {
//            --cnt;
//            std::cout << cnt << std::endl;
//        }
//        // std::m.unlock();
//    }
//}
//
//int main(void)
//{
//	std::thread th1(t1);
//	std::thread th2(t2);
//
//	th1.join();    //等待t1退出
//	th2.join();    //等待t2退出
//
//	std::cout << "here is the main()" << std::endl;
//
//	return 0;
//}

//
//#include <iostream>
//
//#include <string>
//
//#include <vector>
//
//#include <memory>
//
//
//
//using namespace std;
//
//
//
//int main()
//
//{
//
//    shared_ptr<string> pNico(new string("xxxx"),
//
//                             [](string* p) {
//
//                                 cout << *p << endl;
//
//                                 delete p;
//
//                             });
//
//
//
//    pNico.reset(new string("aaaaa")); //会析构"xxxx"
//
//    pNico.reset(new string("bbbbb")); //没有析构"aaaaa"
//
//    pNico.reset(new string("ccccc")); //没有析构"bbbbb"
//
//    cout << ".............." << endl;
//
//    //最后也没有析构"ccccc"
//
//    return 0;
//
//}
