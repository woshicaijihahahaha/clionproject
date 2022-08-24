#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

struct Date
{
    int _year;
    int _month;
    int _day;
    double _my;
    double _my1;

    Date(int year, int month, int day) :_year(year), _month(month), _day(day) {
        _my=0.000;
        _my1=40;
    }
};

int main()
{
using psd=pair<string,double>;
    pair <string,double> product1 ("tomatoes",3.25);

    pair <string,double> product2;
    pair <string,double> product3;

    product2.first = "lightbulbs"; // type of first is string
    product2.second = 0.99; // type of second is double
    product3 = make_pair ("shoes",20.0);

    cout << "The price of " << product1.first << " is $" << product1.second << "\n";
    cout << "The price of " << product2.first << " is $" << product2.second << "\n";

    cout << "The price of " << product3.first << " is $" << product3.second << "\n";
vector<psd>vecpsd;
vecpsd.push_back(product2);

   /* vector<Date> vecDate;

    Date d1{ 2021, 6, 19 };
    Date d2{ 2021, 6, 15 };
cout<<d1._my<<" "<<d1._my1<<endl;
    cout<<d2._my<<" "<<d1._my1<<endl;
    vecDate.push_back(d1);
    vecDate.push_back(d2);
    vecDate.push_back(Date(2021, 5, 30));
  // vecDate.push_back(2021, 5, 30);
    vecDate.emplace_back(2021, 5, 31);

    for (auto d : vecDate)
    {
        cout << d._year << " " << d._month << " " << d._day << endl;
    }*/
   double n=1;
    std::stringstream filename1;
    filename1<<"keyframe/all_points_"<<n<<".txt";
    cout<<filename1.str()<<endl;
    return 0;
}
