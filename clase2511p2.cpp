#include <iostream>
#include <string>


int main ()
{
    std::cout <<"seleccione 1 o 2";
    int choise{};
    std::cin>>choise;

    std::cout << "ahora ingrese su nombre :";
    std::string name{};
    std::getline(std::cin, name);
    std::cout<< "tu nombre es " << name << "y seleccionaste " << choise;
return 0;



}