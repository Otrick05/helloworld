#include <iostream>

int main()
{
    int numberOfLessonsPerDay[7]{}:
    
    constexpr int daysPerWeek{ 7 };
    int numberOfLessonsPerDay[daysPerWeek]{};

    //usando un enumerador
    enum Weekday
    {
        monday,  tuesday,
        wednesday, thursday, 
        friday, saturday, sunday,

        maxWeekday
    };
    int numberOfLessonsPerDay[MaxWeekday]{};

    #define DAYS_PER_WEEK 7
    int numberOfLessonsPerDay[DAYS_PER_WEEK]{};
    //Funciona, pero no hacer esto
}