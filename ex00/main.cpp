#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    try {
        std::cout << "---- TEST:VECTOR --------" << std::endl;
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        std::vector<int>::iterator it = easyfind(v, 2);
        std::cout << "Found in vector: " << *it << std::endl;
        std::cout << std::endl;

        std::cout << "---- TEST:LIST (found) --------" << std::endl;
        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        std::list<int>::iterator it2 = easyfind(lst, 20);
        std::cout << "Found in list: " << *it2 << std::endl;
        std::cout << std::endl;
        std::cout << "---- TEST:LIST (not found) --------" << std::endl;
        std::list<int>::iterator it3 = easyfind(lst, 22);
        std::cout << "Found in list: " << *it3 << std::endl;
        std::cout << std::endl;
    }
    catch (const NotFoundException &e) {
        std::cerr << e.what() << std::endl;
    }
}
