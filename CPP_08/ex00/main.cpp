#include "easyfind.hpp"

int main(void)
{
    try{
        std::vector<int> vect;
        for (int i = 0; i < 10; i++)
            vect.push_back(i * i);
        std::cout << easyfind(vect, 25) << std::endl;
    }
    catch (std::exception &exception){
        std::cout << "No such element" << std::endl;
    }
    try{
        std::list<int> lst;
        for (int i = 0; i < 10; i++)
            lst.push_back(i * i * i);
        std::cout << easyfind(lst, 125) << std::endl;
    }
    catch (std::exception &exception){
        std::cout << "No such element" << std::endl;
    }
    return 0;
}
