#include <iostream>

int main()
{
    constexpr int numeros[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(numeros)/sizeof(numeros[0]);
    int num{ 0 };
    int numIndex{ 0 };

    while (num == 0 || num > 9)
    {
        std::cout << "Ingresa un numero entre 1 y 9: ";
        std::cin >> num;
        if (num == 0 || num > 9)
        {
            std::cin.clear();
            std::cin.ignore();
        }
    }
    
    for (int i{ 0 }; i < size; ++i)
    {
        std::cout << numeros[i] << "\n";
    }

    for (int n{ 0 }; n < size; ++n)
    {
        if (numeros[n] == num)
        {
            std::cout << "El número: " << numeros[n] << " está en la posición: " << n << "\n";
        }
    }

    return 0;
}