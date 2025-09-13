#include <iostream>
#include <iterator>

int main()
{
    constexpr int array[9]{ 4, 6, 7, 3, 8, 2, 1, 9, 5};
    int size = sizeof(array)/sizeof(array[0]);

    std::cout << size << "\n";

    for (int n{ 0 }; n < size; ++n)
    {
        std::cout << "Imprime: " << array[n] << "\n";
    }
}