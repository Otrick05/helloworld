#include <iostream>
#include <string>


int main ()
{
    //std::cout << "Ingrese su nombre completo: ";
    //std::string name{};
    //std::cin>> name;
    //std::cout<<"ingresa tu edad: ";
    //std::string age{};
    //std::cin>>age;
    //std::cout<< "tu nombre es " << name << "y tu edad es " << age;

    std::cout << "Ingrese su nombre completo: ";
    std::string name{};
    std::getline(std::cin, name);
    std::cout<<"ingresa tu edad: ";
    std::string age{};
    std::getline(std::cin,age);
    std::cout<< "tu nombre es " << name << "y tu edad es " << age;

    return 0;
     
}