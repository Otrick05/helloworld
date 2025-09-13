#include<iomanip>
#include<iostream>
#include<string>

int main (){
std::cout<<-12345 <<'\n';
std::cout<<std::setw(10) <<-12345 <<'\n';
std::cout<<std::setw(10) <<std::left <<-12345 <<'\n';
std::cout<<std::setw(10) <<std::right <<-12345 <<'\n';
std::cout<<std::setw(10) <<std::internal <<-12345 <<'\n';
    return 0;
}