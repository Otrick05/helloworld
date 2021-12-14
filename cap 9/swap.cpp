#include <iostream>
#include <algorithm> //std::swap

int main()
{
    int x{ 2 };
    int y{ 4 };

    std::cout << "Antes del intercambio: x = " << x << ", y = " << y << "\n";
    std::swap(x, y);
    std::cout << "Después del intercambio: x = " << x << ", y = " << y << "\n";

    return 0;
}