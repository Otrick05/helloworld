#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void datocuenta();
int visita();
int menu();



int main()
{
cout << "*~* Bienvenido al programa de tus finanzas personales *~* '\n'";

if ( visita()==1) {                                                    // if primeros pasos
cout << "Esta es su primera visita'\n'";
cout << "Por defecto, se le ha creado la cuenta principal de procedencia en efectivo, pero luego podrá crear más '\n'";
ofstream outarchcuentas;
outarchcuentas.open("C://Archivocuentas.txt",ios::out);

    if (outarchcuentas.fail()){                                       // if si falla la apertura de archivo
    cout << "Error : El archivo no se pudo abrir" << endl;
    exit(1);
    }                                                                 //fin if si falla apertura
 outarchcuentas << "Cuenta principal" << endl;
 outarchcuentas.close();
 while (menu()!=0)                                                    //while apertura de menu y salida del programa
 {
 menu();   
 }

}else{                                                                //while apertura de menu y salida del programa
while (menu()!=0)
{
menu();   
}
}

cout << "*~* Vuelva Pronto *~* ";
return 0;
}

int visita(){                                                          //manejo de archivos de visita
string counter="0";
int counterint=0;
ifstream inarchvisit("C://Archivovisitas.txt");
ofstream outarchvisit;
getline(inarchvisit,counter);
inarchvisit.close();
counterint=stoi(counter);
if (counterint > 0) {
counterint+=1;}
else {
counterint=1;
}
outarchvisit.open("C://Archivovisitas.txt",ios::out);
if (outarchvisit.fail()){                                           // if si falla la apertura de archivo
cout << "Error : El archivo no se pudo abrir" << endl;
exit(1);
}                                                                   //fin if si falla
outarchvisit << counterint;
outarchvisit.close();
return counterint;
}                                                                   // fin conteo de visita


int menu(){                                                         // funcion de menu
 int answ;

 cout << "Desea realizar algun movimiento en sus cuentas? '\n'";
 cout << "Digite la acción a realizar '\n'";
 cout << "1.-Revisar mis cuentas'\n'";
 cout << "2.-Agregar Entrada de dinero a una cuenta'\n'";
 cout << "3.-Agregar Gasto de dinero a una Cuenta'\n'";
 cout << "4.-Crear Cuenta Nueva'\n'";
 cout << "5.-Eliminar cuenta'\n'";
 cout << "6.-Agregar Categoría de gastos'\n'";
 cout << "7.-Eliminar Categoría de gastos'\n'";
 
 cout << "0.-Salir'\n'";
 cin>>answ;
switch (answ)
{
case 1:                                                             // case 1 entrada de dinero
    datocuenta();
    break;                                                         //fin case 1

case 2:                                                            //case 2

    break;                                                         //fin case2

case 3:                                                            //case 3

    break;                                                         //fin case 3

case 4:                                                            // case 4
    break;                                                         //fin case 4

case 5:
    break;

case 6:
    break;
case 7:
    break;

default:
cout <<"Opcion elegida no es correcta '\n'";
    break;
} 

 return answ;
}                                                                   // fin funcion menu



void datocuenta(){
ifstream inarchcuenta("C://Archivocuentas.txt");
for


    
}