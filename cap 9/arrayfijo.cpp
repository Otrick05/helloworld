#include <iostream>

int main()
{
    int array[5]{ 7, 4, 5}; //solo se inicializan los primeros 3

    std::cout << array[0] << "\n";
    std::cout << array[1] << "\n";
    std::cout << array[2] << "\n";
    std::cout << array[3] << "\n";
    std::cout << array[4] << "\n";

    return 0;
}

int array_[5] {0, 1, 2, 3, 4}; //define explícitamente la longitud de la matriz
int array_[] {0, 1, 2, 3, 4}; //deja que la lista de inicializadores establezca la longitud de la matriz
