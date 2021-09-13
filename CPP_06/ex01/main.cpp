#include <iostream>
#include <stdint.h>

typedef struct s_data{
    int a;
    std::string s1;
    std::string s2;
    double b;
} Data;

uintptr_t serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data *data = new Data, *data2;
    data->a = 15;
    data->s1 = "hello";
    data->s2 = "friend";
    data->b = 24.7;

    std::cout << "Address data: " << data << "   size of data: " << sizeof(*data) << std::endl;
    std::cout << data->a << " " << data->s1 << " " << data->s2 << " " << data->b << std::endl;

    uintptr_t raw = serialize(data);
    std::cout << "Address raw: " << raw << "   size of raw : " <<  sizeof(raw)<< std::endl;
    std::cout << raw << std::endl;

    data2 = deserialize(raw);
    std::cout << "Address data2: " << data2 << "   size of data2: " << sizeof(*data2) << std::endl;
    std::cout << data2->a << " " << data2->s1 << " " << data2->s2 << " " << data2->b << std::endl;

    delete data;
    return 0;
}
