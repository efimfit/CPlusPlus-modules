#include "Array.hpp"

int main(void)
{
    try{
        Array<int> a(13);
        a[1] = 147;
        a[11] = 44;
        Array<int> b;
        b = a;
        std::cout << "a size: " << a.size() << ", a[1]: " << a[1] << std::endl;
        std::cout << "b size: " << b.size() << ", b[11]: " << b[11] << std::endl;

        Array<std::string> s(3);
        s[0] = "hello";
        s[1] = "my";
        s[2] = "friend";
        std::cout << "s size: " << s.size() << ", " << s[0] << " " << s[1]
        << " " << s[2] << std::endl;

        Array<double> d;
//        std::cout << "d size: " << d.size() << ", d[0]: " << d[0] << std::endl;
//        std::cout << "a[13]: " << a[13] << std::endl;
    }
    catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }
    return 0;
}

//#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;//
//    return 0;
//}


