#include <iostream>

enum class StudentNames
    {
        kenny, // 0
        kyle, // 1
        stan, // 2
        butters, // 3
        cartman, // 4
        wendy, // 5
        max_students // 6
    };
    
int main()
{
    int testScores[static_cast<int>(StudentNames::max_students)]{};
    testScores[static_cast<int>(StudentNames::stan)] = 76;

    return 0;
}