#include <iostream>

namespace Animales
{
    enum Animales
    {
        pollo, // 0
        perro, // 1
        gato, // 2
        elefante, // 3
        pato, // 4
        serpiente, // 5
    };
}

int main()
{
    int patas[1]{};

    patas[Animales::pollo] = 2;
    patas[Animales::perro] = 4;
    patas[Animales::gato] = 4;
    patas[Animales::elefante] = 4;
    patas[Animales::pato] = 2;
    patas[Animales::serpiente] = 0;

    std::cout << "El elefante tiene: " << patas[Animales::elefante] << " patas \n";

    return 0;  
}