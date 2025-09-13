#include <iostream>



int main (){
std::cout.setf(std::ios::showpos);
std::cout<<27<<'\n';

std::cout.setf(std::ios::showpos | std::ios::uppercase);
std::cout<<27<<'\n';

std::cout.setf(std::ios::showpos);
std::cout<<27<<'\n';
std::cout.unsetf(std::ios::showpos);
std::cout<<28<<'\n';

std::cout.setf(std::ios::hex);
std::cout<<27<<'\n';

std::cout.unsetf(std::ios::dec);
std::cout.setf(std::ios::hex);
std::cout<<27<<'\n';

std::cout.unsetf(std::ios::hex);
std::cout.setf(std::ios::dec);
std::cout.setf(std::ios::hex, std::ios::basefield);
std::cout<<27<<'\n';
return 0;
}