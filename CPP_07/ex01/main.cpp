#include "iter.hpp"

void sqr_int(int const &x){
    std::cout << x * x << " ";
}

void transform_str(std::string const &s){
    switch (s[0]) {
        case '1' : std::cout << "gold" << std::endl; break;
        case '2' : std::cout << "silver" << std::endl; break;
        case '3' : std::cout << "bronze" << std::endl; break;
        case '4' : std::cout << "no medal" << std::endl; break;
        case '5' : std::cout << "no medal" << std::endl; break;
    }
}

int main(void)
{
    int len = 5;
    int arr[5] = {1, 3, 5, 7, 9};
    std::string str[5] = {"1st", "2nd", "3rd", "4th", "5th"};

    iter(arr, len, sqr_int);
    std::cout << std::endl;
    iter(str, len, transform_str);

    return 0;
}
