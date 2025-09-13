#include <algorithm>
#include <iostream>

int main()
{
    int array[]{ 30, 50, 20, 10, 40};
    int size = sizeof(array)/sizeof(array[0]);

    for (int i{ 0 }; i < size - 1; ++ i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (array[j] > array[i])
            {
                std::swap( array[j], array[i] );
            }
            for (int n{ 0 }; n < size; ++n)
            {
                std::cout << array[n] << " ";
            }
            std::cout << "\n";
        }
    }

    return 0;
}