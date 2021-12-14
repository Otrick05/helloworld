
#include <iomanip>
#include <iostream>
void operadorext();

void operadorext(){
char buf[10];
std::cin >>std::setw(10)>>buf;
}

int main(){
    char ch;
    while (std::cin>>ch)
        std::cout<< ch;
        return 0;
    
}