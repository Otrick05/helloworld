#include<iostream>
#include<limits>
int main (){
    int age{};
    while (true)
    {
        std::cout << "Ingresa tu edad: ";
        std::cin>>age;
        if(std::cin.fail())
        {
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
         continue;

        }
    }
    



    return 0;
}