#include <iostream>

int main()
{
    struct Rectangle
{
    int length{};
    int width{};
};
Rectangle rects[5]{};

rects[0].length = 24;
return 0;
}