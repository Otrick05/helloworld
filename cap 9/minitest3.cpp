#include <iostream>
#include <iterator>

int main()
{
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    int numStudents = sizeof(scores)/sizeof(scores[0]);
    
    int maxScore{ 0 };
    int maxIndex{ 0 };

    for (int student{ 0 }; student <= numStudents; ++student)
    {
        if (scores[student] > maxScore)
        {
            maxScore = scores[student];
            maxIndex = student + 1;
        }
    }

    std::cout << "La mejor calificacion fue: " << maxScore << "\n";
    std::cout << "La mejor calificacion está en la posición: " << maxIndex << "\n";
    
    return 0;
}