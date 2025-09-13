#include<algorithm>
#include<cctype>
#include<iostream>
#include<map>
#include<string>
#include<string_view>

bool imputMatches (std::string_view input,std::string_view pattern)
{
    if (input.length()!=pattern.length())
    {
        return false;

    }
 static const std::map<char,int(*)(int)>validators{
  {'#',&std::isdigit},
  {'_',&std::isspace},
  {'@',&std::isalpha},
  {'?',[](int){return 1;}}
 };

return std::ranges::equal(input,pattern,[](char ch,char mask)->bool {
    if (auto found{validators.find(mask)}; found!=validators.end())
    {
        return (*found->second)(ch);
    }else{
        return(ch==mask);
    }

});


}
int main (){
std::string phonenumber{};

do 
{
    std::cout << "Ingrese su número telefónico (###) ###-####: ";
    std::getline(std::cin,phonenumber);


}while (!imputMatches(phonenumber,"(###) ###-####"));
std::cout<<"Ingresaste: " << phonenumber << '\n';
return 0;
}