#include <iostream>

int main()
{
    int array[5] {};

    array[1] = 7;

    enum Animals
    {
        animal_cat = 2
    };
    array [animal_cat] = 4;

    indice short = 3;
    array[indice] = 7;

    array[1 + 2] = 7;
}
