#include <iostream>
#include <algorithm>

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8};
    int size = sizeof(array)/sizeof(array[0]);

    for (int i{ 0 }; i < size; ++i)
    {
        for (int j{ 0 }; j < size - 1; ++j)
        {
            if ( array[j + 1] < array[j] )
            {
                std::swap(array[j + 1], array[j]);
            }
        }
    }
    for (int n{ 0 }; n < size; ++n)
    {
        std::cout << array[n] << " ";
    }

    return 0;
}