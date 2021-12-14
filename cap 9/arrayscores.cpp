#include <iostream>
#include <iterator>

int main()
{
    int scores[]{ 84, 92, 76, 81, 56 };
    int numStudents{ static_cast<int>(int(std::size(scores)) };
    int totalScore{ scores[0] + scores[1] + scores[2] + scores[3] + scores[4] };
    auto averageScore{ static_cast<double>(totalScore) / numStudents };

    return 0; 
}