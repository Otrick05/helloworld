#include <iostream>

int main()
{
    char name[255];
    std::cout << "Ingrese su nombre: ";
    std::cin.getline(name, std::size(name));
    std::cout << "Ingresaste: " << name << "\n";

    return 0;
}