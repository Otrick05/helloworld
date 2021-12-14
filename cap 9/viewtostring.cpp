#include <iostream>
#include <string>
#include <cstring>

void print(std::string s)
{
    std::cout << s << "\n";
}

int main()
{
    std::string_view sv{ "pelota" };

    sv.remove_suffix(3);

    std::string str{ sv };
    
    print (str);

    print(static_cast<std::string(sv));

    return 0;
}