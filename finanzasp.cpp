#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
string cuenta[20];
double balance[20];
void datocuenta();
int visita();
int menu();
void crearacc();
void addbalance();

int main()/////////////////////////////////////////////////////////////////////////////////////main
{
cout << "*~* Bienvenido al programa de tus finanzas personales *~* '\n'";

if ( visita()==1) {                                                    // if primeros pasos
cout << "Esta es su primera visita'\n'";
cout << "Por defecto, se le ha creado la cuenta principal de procedencia en efectivo, pero luego podrá crear más '\n'";
cuenta[0]="Cuenta Efectivo";

 ofstream outarchcuentas;
 ofstream outarchbalcuentas;
 outarchbalcuentas.open("C://Archivobalcuentas.txt",ios::out);
 outarchcuentas.open("C://Archivocuentas.txt",ios::out);

    if (outarchcuentas.fail()){                                       // if si falla la apertura de archivo
    cout << "Error : El archivo no se pudo abrir" << endl;
    exit(1);                                                          //fin if si falla apertura
    }
    if (outarchbalcuentas.fail()){
        cout << "Error : El archivo no se pudo abrir" << endl;
    }                                                              
 outarchcuentas << "Cuenta Efectivo" << endl;
 outarchbalcuentas <<"0.00" << endl;
for(int i=1;i<=19;i+=1)
{
outarchcuentas << "??" << endl;
outarchbalcuentas <<"0.00" << endl;
cuenta[i]="??";
balance[i]=0.00;
}
 outarchcuentas.close();


 while (menu()!=0)                                                    //while apertura de menu y salida del programa
 {
 menu();   
 }

}else{              
ifstream inarchcuenta("C://Archivocuentas.txt");
ifstream inarchbalcuenta ("C://Archivobalcuentas.txt");
   for(int i=0;i<=19;i+=1)
{ 
    string filler;
    getline(inarchcuenta,cuenta[i]);
    getline(inarchbalcuenta,filler);
    balance[i]=stod(filler);
}    
    
    
                                                      
while (menu()!=0)                                                     //while apertura de menu y salida del programa
{
menu();   
}
}

cout << "*~* Vuelva Pronto *~* ";

return 0;
}//////////////////////////////////////////////////////////////////////////////////////////////////////fin main

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
} //////////////////////////////////////////////////////////////////// fin conteo de visita


int menu(){/////////////////////////////////////////////////////////// funcion de menu
 int answ;

 cout << "Desea realizar algun movimiento en sus cuentas? '\n'";
 
 cout << "1.-Revisar mis cuentas'\n'";
 cout << "2.-Agregar Entrada o movimientos de dinero a una cuenta'\n'";
 cout << "3.-Agregar Gasto de dinero a una Cuenta'\n'";
 cout << "4.-Crear Cuenta Nueva'\n'";
 cout << "5.-Eliminar cuenta'\n'";
 cout << "6.-Agregar Categoría de gastos'\n'";
 cout << "7.-Eliminar Categoría de gastos'\n'";
 
 cout << "0.-Salir'\n'";
 cout << "Digite la acción a realizar : ";
 cin>>answ;                                                        //entrada de respuesta usuario
switch (answ)
{
case 1:                                                             // case 1 entrada de dinero
    datocuenta();
    break;                                                         //fin case 1

case 2:                                                            //case 2
    addbalance();
    break;                                                         //fin case2

case 3:                                                            //case 3

    break;                                                         //fin case 3

case 4:                                                            // case 4
    //crearacc();
    break;                                                         //fin case 4

case 5:
    break;

case 6:
    break;
case 7:
    break;
case 0:                                                            //salida y guardado de archivos

    break;                                                         //fin salida y guardado de archivos
default:
cout <<"Opcion elegida no es correcta '\n'";
    break;
} 

 return answ;
}/////////////////////////////////////////////////////////////////// fin funcion menu



void datocuenta(){
cout<<"Sus cuentas y su saldo son :"<<endl;
int counter;
for(int i=0;i<=19;i+=1)
 {
    if (cuenta[i]!="??"){
    counter+=1;
    cout << counter << ".- " << cuenta[i] <<" $"<<balance[i]<< endl;

    }
 }
 
}/////////////////////////////////////////////////////////////////////fin dato cienta

void addbalance(){
    int answ;
    cout<<"Desea:'\n'";
cout <<"1.-Entrada de dinero"<<endl;
cout <<"2.-Traspasar de una cuenta a otra"<<endl;
cout <<"Seleccione el número correspodiente :";
cin>>answ;
switch (answ)
{
case 1:
    /* code */
    break;
case 2:

    break;
default:
cout <<"La opción no fue correcta "<<endl;
    break;
}
 
}
//cout <<"Seleccione el número correspodiente a la cuenta a la cual agregará su entrada de dinero :";