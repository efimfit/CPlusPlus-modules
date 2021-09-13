#include "mutantstack.hpp"

int main(void)
{
    MutantStack<int> m;

    m.push(9);
    m.push(54);
    m.push(510);
    m.push(444);
    m.pop();
    std::cout << "size: " << m.size() << std::endl;

    MutantStack<int>::iterator it = m.begin();
    for (it = m.begin(); it != m.end(); it++)
        std::cout << *it << std::endl;
//
    MutantStack<int> a(m);
    std::cout << "size: " << m.size() << std::endl;
    std::cout << "top: " << m.top() << std::endl;
//
    MutantStack<int> m2;
    m2 = m;
    std::cout << "size: " << m2.size() << std::endl;
    std::cout << "top: " << m2.top() << std::endl;

    return 0;
}
