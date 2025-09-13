#include <iostream>
#include <string_view>

int main()
{
    std::string_view str{ "Los trenes son rápidos!" };

    std::cout << str.length() << "\n";
    std::cout << str.substr(0, str.find(" ")) << "\n";
    std::cout << (str == "Los trenes son rápidos!") << "\n";

    std::cout << str.starts_with("Botes") << "\n";
    std::cout << str.ends_with("rápidos!") << "\n";

    std::cout << str << "\n";

    return 0;
}