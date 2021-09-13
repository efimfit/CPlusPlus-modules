#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *animal = new Animal();
    const Animal *cat = new Cat();
    const Animal *dog = new Dog();

    std::cout << animal->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << dog->getType() << std::endl;

    animal->makeSound();
    cat->makeSound();
    dog->makeSound();

    delete animal;
    delete cat;
    delete dog;
    std::cout << "--------------------------------------------" << std::endl;

    const WrongAnimal *wr_animal = new WrongAnimal();
    const WrongAnimal *wr_cat = new WrongCat();

    std::cout << wr_animal->getType() << std::endl;
    std::cout << wr_cat->getType() << std::endl;
    wr_animal->makeSound();
    wr_cat->makeSound();
    delete wr_animal;
    delete wr_cat;

    return 0;
}