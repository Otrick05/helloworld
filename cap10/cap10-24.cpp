#include<iostream>
#include<iomanip>
#include<fstream>

int main (){
std::ifstream inf {"Sample.dat"};
inf.seekg(0,std::ios::end);
std::cout<<inf.tellg();

    return 0;
}