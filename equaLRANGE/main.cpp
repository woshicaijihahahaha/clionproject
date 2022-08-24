
#include <iostream>
#include <map>
int main () {
    std::multimap<char, int> my_multimap;
    my_multimap.insert(std::make_pair('a', 10));
    my_multimap.insert(std::make_pair('a', 20));
    my_multimap.insert(std::make_pair('a', 30));
    my_multimap.insert(std::make_pair('a', 40));
    my_multimap.insert(std::make_pair('b', 10));
    my_multimap.insert(std::make_pair('c', 10));
    my_multimap.insert(std::make_pair('c', 20));
    std::pair<std::multimap<char, int>::iterator, std::multimap<char, int>::iterator> ret;
    ret = my_multimap.equal_range('a');
    auto ret1=my_multimap.equal_range('b');
    for (std::multimap<char, int>::iterator it = ret.first; it != ret.second; it++) {
        std::cout << it->first << " => " << it->second << '\n';
    }
    for (std::multimap<char, int>::iterator it1 = ret1.first; it1 != ret1.second; it1++) {
        std::cout << it1->first << " => " << it1->second << '\n';
    }
    return 0;
}
