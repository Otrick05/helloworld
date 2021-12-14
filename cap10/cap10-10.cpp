#include<iostream>
#include<iomanip>
#include<sstream>


int main(){
std::stringstream os;
os << "Reprobarán!" << '\n';
os.str("Reprobarán!");
os << "12345 67.89"<< '\n';
std::cout<<os.str();
os << "12345 67.89"<< '\n';
std::string strValue;
os >>strValue;
std::string strValue2;
os >>strValue2;
std::cout<<strValue<< "--" <<strValue2 <<'\n';
    return 0;
}