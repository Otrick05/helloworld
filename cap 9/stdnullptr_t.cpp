#include <iostream>
#include <cstddef>

void doSomething(std::nullptr_t)
{
    std::cout << "dentro de doSomething() \n";
}

int main()
{
    doSomething(nullptr);

    return 0;
}