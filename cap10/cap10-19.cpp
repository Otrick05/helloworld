#include<fstream>
#include<iostream>
#include<string>
int main(){
std::ifstream inf {"Sample.dat"};
if (!inf)
{
    std::cerr << "Uh oh, Sample.dat no puede ser abierto en modo escritura!" << std::endl;
    return 1;
}
while (inf)
{
    std::string strInput;
    inf>>strInput;
    std::cout<<strInput<<'\n';
}

return 0;
}
