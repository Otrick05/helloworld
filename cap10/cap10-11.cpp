#include<iomanip>
#include<iostream>


int main(){
std::stringstream os;
int nValue{12345};
double dValue{67.89};
os << nValue <<' '<<dValue;
std::string strvalue1,strivalue2;
os>>strvalue1>>strivalue2;

std::cout << strvalue1 << ' ' << strivalue2<<'\n';

os << "12345 67.89";
int nvalue;
double dvalue;
os >> nvalue>>dvalue;
std::cout<<nvalue <<' '<<dvalue<<'\n';
    return 0;

}