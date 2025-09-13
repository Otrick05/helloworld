#include <iostream>
#include <cmath>

using namespace std;
int nombrel;
int edad;
double resp;
double nombrell;
string nombre;
int main (){


cout <<"Ingrese por favor su nombre :'\n'";
getline(cin,nombre);

cout <<"Ingrese por favor su edad :'\n'";
cin>> edad;

nombrel=nombre.length();
nombrell=nombrel;
resp= edad/ nombrell;
cout<< "Usted a vivido " << resp <<" años por cada letra de su nombre";


return 0;
}