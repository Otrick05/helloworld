
#include<iomanip>
#include<iostream>
#include<strings.h>
#include<string_view>
#include<algorithm>


bool isvalidname( std::string_view name )
{
    return std:: ranges::all_of(name,[](char ch){
    return (std::isalpha(ch)||std::isspace(ch));
    });

    
}
int main (){
std::string name{};

    do {
        std::cout<<"Ingrese  su nombre: " ;
        std::getline(std::cin,name);



    }while (!isvalidname(name));
  

std::cout<< "Hola " << name << "!\n";

    return 0;

}