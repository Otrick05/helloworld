#include<iostream>

int main (){
char strbuf[11];
std::cin.getline(strbuf,100);
    
std::cout<<strbuf<<'\n';
std::cout <<std::cin.gcount() << " Caracteres fueron leídos "<< std::endl;
return 0;
}