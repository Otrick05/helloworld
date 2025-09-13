#include <iostream>
#include <iomanip>

int main() 
{
int i {3000};
char c=i;
std::cout<<static_cast<int>(c);

int y{2};
short s =y;
std::cout<< s <<'\n';
double d {0.1234};
float f =d;
std::cout<< f <<'\n';
float f =0.123456789;
std::cout << std::setprecision(9) << f <<'\n';
    return 0;
}