#include <iostream>
#include <fstream>
int visita();
void firsttime();
int menu();
void loaddata();
void aversiasi();
using namespace std;
int controlhist=0;
int controlhistgastos=0;
string information[9999];
string infogastos[9999];
string catgastos[20];
string cuenta[20];
double balance[20];

int main()/////////////////////////////////////////////////////////////////////////////////////main
{
cout << "*~* Bienvenido al programa de tus finanzas personales *~* '\n'";

if ( visita()==1) {          ///////////////////////// // if primeros pasos
 firsttime();

    while (menu()!=0)                                                    //while apertura de menu y salida del programa
    {
    loaddata(); 
    }

}
else
{
    loaddata();                     
    while (menu()!=0)                                                     //while apertura de menu y salida del programa
    {
    loaddata();   
    }
}   


cout << "*~* Vuelva Pronto *~* ";
return 0;
}/////////////////////////////////////////////////////

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


void firsttime(){
cout << "Esta es su primera visita'\n'";
cout << "Por defecto, se le ha creado la cuenta principal de procedencia en efectivo, pero luego podrá crear más '\n'";
cout << "También se le ha creado una categoría de gastos en general '\n'";

cuenta[0]="Cuenta Efectivo";
balance[0]=0.00;
catgastos[0]="Gastos en general";
 ofstream outarchcuentas;
 ofstream outarchbalcuentas;
 ofstream outarchgastos;

 outarchbalcuentas.open("C://Archivobalcuentas.txt",ios::out);
 outarchcuentas.open("C://Archivocuentas.txt",ios::out);
outarchgastos.open("C://Archivocatgastos.txt",ios::out);

    if (outarchcuentas.fail()){                                       // if si falla la apertura de archivo
    cout << "Error : El archivo no se pudo abrir" << endl;
    exit(1);                                                          //fin if si falla apertura
    }
    if (outarchbalcuentas.fail()){
        cout << "Error : El archivo no se pudo abrir" << endl;
    } 
    if (outarchgastos.fail()){
        cout << "Error : El archivo no se pudo abrir" << endl;
    }                                                                      
 outarchcuentas << "Cuenta Efectivo" << endl;
 outarchbalcuentas <<"0.00" << endl;
 outarchgastos <<"Gastos en general" << endl;
for(int i=1;i<=19;i+=1)
{
outarchcuentas << "??" << endl;
outarchbalcuentas <<"0.00" << endl;
outarchgastos <<"??" << endl;
catgastos[i]="??";
cuenta[i]="??";
balance[i]=0.00;
}
 outarchcuentas.close();
 outarchbalcuentas.close();

}



int menu(){/////////////////////////////////////////////////////////// funcion de menu
 int answ;

 cout << "Desea realizar algun movimiento en sus cuentas? '\n'";
 
 cout << "1.-Revisar mis cuentas (Estado de sus cuentas)'\n'";
 cout << "2.-Agregar Entrada de dinero, realizar movimientos de dinero de una cuenta a otra cuenta o Historial de movimientos'\n'";
 cout << "3.-Agregar Gasto de dinero a una Cuenta, Agregar categoria de gastos, Eliminar categoria de gastos o Revisar su Historial de gastos'\n'";
 cout << "4.-Crear Cuenta Nueva'\n'";
 cout << "5.-Eliminar cuenta'\n'";
 cout << "0.-Salir'\n'";
 cout << "Digite la acción a realizar : ";
 cin>>answ;
                                                      //entrada de respuesta usuario
switch (answ)
{
case 1:                                                             // case 1 entrada de dinero
    //datocuenta();
    
    break;                                                         //fin case 1

case 2:                                                            //case 2
    //addbalance();
    //savedata();
    break;                                                         //fin case2

case 3:                                                            //case 3
    //gastos();
    //savedata();
    break;                                                         //fin case 3

case 4:                                                            // case 4
    //crearacc();
    //savedata();
    break;                                                         //fin case 4

case 5:
    //delcuenta();
    //savedata();
    break;

case 0:                                                            //salida y guardado de archivos
cout<<"*********************Saliendo*************************"<<endl;
    break;                                                         //fin salida y guardado de archivos
default:
cout <<"Opcion elegida no es correcta '\n'";
    break;
} 

 return answ;
}/////////////////////////////////////////////////////////////////// fin funcion menu

void loaddata(){
ifstream inarchcuenta("C://Archivocuentas.txt");
ifstream inarchhistory("C://Archivohistorialcuentas.txt");
ifstream inarchgastos("C://Archivocatgastos.txt");
ifstream inarchhisgastos("C://Archivohistgasto.txt");
    controlhist=0; 
    controlhistgastos=0;
    
    for(int i=0;i<9999;i+=1){          
     getline(inarchhistory,information[i]);
    
     if (information[i]==""){
        i=9998; 
     }else{controlhist+=1;}   
   }
inarchhistory.close();
   for(int i=0;i<9999;i+=1){          
     getline(inarchhisgastos,infogastos[i]);
    
     if (infogastos[i]==""){
        i=9998;
        
     }else{controlhistgastos+=1;}   
   }
inarchhisgastos.close();
   
   
   for(int i=0;i<=19;i+=1)
    {   
     
    getline(inarchcuenta,cuenta[i]);   
    getline(inarchgastos,catgastos[i]);
    } 
    inarchcuenta.close();
    inarchgastos.close();
    aversiasi();
   
}

void aversiasi(){
 ifstream archivobalance ("C://Archivobalcuentas.txt");
 
 for(int i=0;i<20;i+=1)
    {  
    string fill;
    double fill2;
    getline(archivobalance,fill);
    fill2=stod(fill);
   balance[i]=fill2;   
    }


}