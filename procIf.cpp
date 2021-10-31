#include <iostream>

int answ;
double divisor;
int main ()
{
std::cout << "ingrese un numero del 1 al 9" << '\n';
std::cin >> answ;
divisor= answ%answ;

if (divisor == 0)  
std::cout<< "el numero es primo" << '\n';
else 
std::cout<< "el numero no es primo" << '\n';
return 0;
}
