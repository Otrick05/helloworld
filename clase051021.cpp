#include <iomanip>
#include <iostream>

int main ()
{
    double d{0.1};

std::cout << d <<'\n';
std::cout << std::setprecision(17);
std::cout << d << '\n';

double d1 {1.0};
std::cout << d1 << '\n';
double d2 {0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1};
std::cout << d2 << '\n';

double zero {0.0};
double posinf {5.0 / zero};
std::cout << posinf << '\n';

double neginf {-5.0 / zero};
std::cout << neginf << '\n';

double nan {zero / zero };
std::cout << nan << '\n';

return 0;
}