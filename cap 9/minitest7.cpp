#include <iostream>
#include <algorithm>

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8};
    int size = sizeof(array)/sizeof(array[0]);
    int iteracion{};
    int intercambio{};
    bool ord{false};

    do
    {
        for (int i = size; i > 0; --i)
        {
            iteracion = ++iteracion;
            intercambio = 0;
            for (int j{ 1 }; j < size; ++j)
            {
                if ( array[j - 1] > array[j] )
                {
                    std::swap(array[j - 1], array[j]);
                    intercambio = ++intercambio;
                }
            }
            if (intercambio == 0)
            {
                break;
            }
        }
    }
    while (ord =! true);
        

    std::cout << "Terminación anticipada en la Iteración: " << iteracion << "\n";

    for (int n{ 0 }; n < size; ++n)
    {
        std::cout << array[n] << " ";
    }

    return 0;
}