#include <iostream>

void passValue(int value) // el valor es una copia del argumento
{
    value = 99; // cambiarlo aquí no cambiará su valor
}

void passArray(int prime[5]) // es el arreglo real
{
    prime[0] = 11; // cambiarlo aquí cambiará su valor original
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}

int main()
{
    int value { 1 };
    std::cout << "antes de passValue: " << value << "\n";
    passValue(value);
    std::cout << "despues de passValue: " << value << "\n";

    int prime[5]{2, 3, 5, 7, 11};
    std::cout << "antes de passArray: " << prime[0] << " " << prime[1] << " " prime[2] << " " prime[3] 
    << " " prime[4] << "\n";
    passArray(prime);
    std::cout << "despues de passArray: " << prime[0] << " " << prime[1] << " " prime[2] << " " prime[3] 
    << " " prime[4] << "\n";
    
    return 0;
}