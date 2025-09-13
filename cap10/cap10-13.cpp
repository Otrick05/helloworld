#include<iomanip>
#include<iostream>

int main (){
    std::stringstream os;
os << "Hola ";

os.str(std::string{});
os<<"Mundo ... Cruel!";
std::cout <<os.str();

os<<"Hola ";
os.str("");
os.clear();

os<<"Mundo...Cruel!!";
std::cout <<os.str();





    return 0;
}