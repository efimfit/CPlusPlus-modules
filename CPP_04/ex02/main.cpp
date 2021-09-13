#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
//    Animal *test = new Animal();

    Animal *my_animals[4];

    for (int i = 0; i < 2; i++)
        my_animals[i] = new Cat();
    for (int i = 2; i < 4; i++)
        my_animals[i] = new Dog();
    for (int i = 0; i < 4; i++)
        delete my_animals[i];

    Cat *a = new Cat();
    Cat *b = new Cat();
    *a = *b;
    delete a;
    delete b;
    return 0;
}