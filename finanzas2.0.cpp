#include <iostream>
#include <fstream>
#include <iomanip>



using namespace std;
string cuenta[20];
double balance[20];
string information[9999];
string catgastos[20];
string infogastos[9999];
int controlhist=0;
int controlhistgastos=0;
int controlgastos=0;
void datocuenta();
int visita();
int menu();
void crearacc();
void addbalance();
void ordenar();
string time();
void loaddata();
void savedata();
void firsttime();
void gastos();
void checkcatgastos();
void addcategoria();
void ordenargastos();
void delgastos();
int checkcuenta();
void delcuenta();

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
    datocuenta();
    
    break;                                                         //fin case 1

case 2:                                                            //case 2
    addbalance();
    savedata();
    break;                                                         //fin case2

case 3:                                                            //case 3
    gastos();
    savedata();
    break;                                                         //fin case 3

case 4:                                                            // case 4
    crearacc();
    savedata();
    break;                                                         //fin case 4

case 5:
    delcuenta();
    savedata();
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



void datocuenta(){ /////////////////////////////////////////////////llamada case 1, funcion menu principal
cout<<"Sus cuentas y su saldo son :"<<endl;
int counter=0;
for(int i=0;i<=19;i+=1)
 {
    if (cuenta[i]!="??"){
    counter+=1;
    cout << counter << ".- " << cuenta[i] <<" $"<<fixed<<setprecision(2)<<balance[i]<< endl;

    }
 }
 
}/////////////////////////////////////////////////////////////////////fin dato cuenta


void addbalance(){        ////////////////////////////////////////////////////////////////Menu case 2 del menu principal
    int answ;
    int answw;
    int answcuenta;
    double answdinero;
    int counter=0;
    cout<<"Desea:'\n'";
    cout <<"1.-Entrada de dinero"<<endl;
    cout <<"2.-Traspasar de una cuenta a otra"<<endl;
    cout <<"3.-Historial de ingresos"<<endl;
    cout <<"Seleccione el número correspodiente :";
    cin>>answ;
 switch (answ)
 {
 case 1:         /////////////////////////////////////// inicio case 1 entrada de dinero
      
      cout<<"Seleccione el número correspondiente a la cuenta a la cual va agregar un ingreso:'\n'";
 for(int i=0;i<=19;i+=1)
 {
    if (cuenta[i]!="??"){
    counter+=1;
    cout << counter << ".- " << cuenta[i] << endl;
    }
 }
    cout<<"0.-Volver al menú principal "<<endl;
    cout<<"Seleccione la opción deseada: ";
    cin>>answcuenta;
    if (answcuenta>=1 && answcuenta<=counter){
        cout<<"Ingrese la cantidad de la entrada de dinero: ";
        cin>>answdinero;
        string desc;
        cout<<"Ingrese motivo de ingreso o descripcion de la entrada: "<<endl;
        cin.ignore();
        getline(cin,desc);
        if (answdinero >=0.01)
        {
            
            cout<<"Saldo añadido exitosamente!"<<endl;
            balance[answcuenta-1]+=answdinero;
            string filler=to_string(answdinero);
            information[controlhist]=time();
            information[controlhist]=information[controlhist]+" "+cuenta[answcuenta-1] + " $" + filler +" Entrada de dinero "+desc;
            controlhist+=1;
        }
    }
    break; ////////////////////////////////////////////fin case 1 entrada de dinero
 
 case 2: ///////////////////////////////////////// inicio case 2 traspaso entre cuentas 
     counter=0;
for(int i=0;i<=19;i+=1)
 {
    if (cuenta[i]!="??")
    {
    counter+=1;
    cout << counter << ".- " << cuenta[i] <<" $"<<balance[i]<< endl;
    }
 }
     if (counter>1 && counter<20)
     {
     cout<<"Seleccione el numero correspondiente a la cuenta de origen: ";
     cin>>answw;
        if (balance[answw-1]>0){
        cout<<"Seleccione el numero correspondiente a la cuenta de destino: ";
        cin>>answcuenta;
        cout<<"El saldo de la cuenta de origen es: $"<<fixed<<setprecision(2)<<balance[answw-1]<<endl;
        cout<<"Digite el monto a transferir: ";
        cin>>answdinero;        
          if (balance[answw-1]>answdinero && answw !=answcuenta){                 
            balance[answw-1]=balance[answw-1]-answdinero;
            balance[answcuenta-1]= balance[answcuenta-1]+answdinero;
            string filler=to_string(answdinero);
            information[controlhist]=time();
            information[controlhist]=information[controlhist]+" "+cuenta[answw-1] + " >>> "+ cuenta[answcuenta-1]+" $"+ filler +" Traspaso entre cuentas";
          }   
        }else{
         cout<<"La cuenta no tiene saldo para transferir"<<endl;
        }
     }else{    
     cout<<"Al parecer solo cuenta con una cuenta activa o ha escrito una opción inválida!"<<endl;
     }     
    break; ///////////////////////////// //////////////////////// fin case 2 traspaso entre cuentas

 case 3:
    cout<<"1.-De más antiguo a mas reciente"<<endl;
    cout<<"2.-De más reciente a mas antiguo"<<endl;
    cout<<"Digite la opcion deseada: ";
    cin>>answw;

   if (information[0]!="" && information[1]!=""){
    ordenar();
    } 

    if (answw==2){
     
         if (information[0]!=""){
          
          for(int i=0;i<controlhist;i+=1){    
           
            if (information[i]!=""){
            cout  << "- " << information[i] << endl;     
            }    
          }   
        }else {cout<<"El historial está vacío"<<endl;}   

    }else if (answw==1){

         if (information[0]!=""){
          
          for(int i=controlhist;i>=0;i-=1){    
           
            if (information[i]!=""){
            cout  << "- " << information[i] << endl;     
            }    
          }   
        }else {cout<<"El historial está vacío"<<endl;}   
    }else{
        cout<<"La opción que ha seleccionado es incorrecta"<<endl;
    }
    break;
 
 default:
  cout <<"La opción no fue digitada correctamente "<<endl;
    break;
 }
 }


 void ordenar(){//////////////////////////////////////// ordena el historial de ingresos y trazpasos de dinero
string aux="";
    for (int i=0;i<=9998-1;i++)
    {
        for (int j=0;j<=9998-1;j++)
        {
            if (information[j+1]>information[j])
            {
                aux=information[j];
                information[j]=information[j+1];
                information[j+1]=aux;
            }
            
        }
    }

}//////////////////////////////////////////////////// fin ordenar el historial de ingresos de dinero



string time(){
time_t tiempo = time(NULL);//variables donde guardo el valor de la funcion time. 
    struct tm *tlocal = localtime(&tiempo); //estructura donde obtengo el tiempo 
    char output[10]; //array donde guardo la fecha
    strftime(output,10,"%d/%m/%y",tlocal); //formato para guardar la fecha obtenido en *tlocal como dd/mm/yyyy
return output;
}

void loaddata(){
ifstream inarchcuenta("C://Archivocuentas.txt");
 ifstream inarchbalcuenta ("C://Archivobalcuentas.txt");
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

   for(int i=0;i<9999;i+=1){          
     getline(inarchhisgastos,infogastos[i]);
    
     if (infogastos[i]==""){
        i=9998;
        
     }else{controlhistgastos+=1;}   
   }

   
   
   for(int i=0;i<=19;i+=1)
    {   
     
    getline(inarchcuenta,cuenta[i]);   
    getline(inarchgastos,catgastos[i]);
    } 
    for(int i=0;i<=19;i+=1)
    {  
    string fill; 
    getline(inarchbalcuenta,fill);
    balance[i]=stof(fill);   
    }


}

void firsttime(){
cout << "Esta es su primera visita'\n'";
cout << "Por defecto, se le ha creado la cuenta principal de procedencia en efectivo, pero luego podrá crear más '\n'";
cout << "También se le ha creado una categoría de gastos en general '\n'";

cuenta[0]="Cuenta Efectivo";

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


void savedata(){
ofstream outarchcuentas;
 ofstream outarchbalcuentas;
 ofstream outarchhistocuentas;
ofstream outarchhistogastos;
ofstream outarchcatgastos;
 outarchhistogastos.open("C://Archivohistgasto.txt",ios::out);
 outarchbalcuentas.open("C://Archivobalcuentas.txt",ios::out);
 outarchcuentas.open("C://Archivocuentas.txt",ios::out);
 outarchhistocuentas.open("C://Archivohistorialcuentas.txt",ios::out);
 outarchcatgastos.open("C://Archivocatgastos.txt",ios::out);
    if (outarchcuentas.fail()){                                       // if si falla la apertura de archivo
    cout << "Error : El archivo cuentas no se pudo abrir" << endl;
    exit(1);                                                          //fin if si falla apertura
    }
    if (outarchbalcuentas.fail()){
        cout << "Error : El archivo balance cuentas no se pudo abrir" << endl;
    }   
    if (outarchhistocuentas.fail()){
        cout << "Error : El archivo historial cuentas no se pudo abrir" << endl;
    }
     if (outarchhistogastos.fail()){
        cout << "Error : El archivo historial gastos no se pudo abrir" << endl;
    }
     if (outarchcatgastos.fail()){
        cout << "Error : El archivo categoria de gastos no se pudo abrir" << endl;
    }
    
    
    for(int i=0;i<19;i+=1)
    {
    outarchcuentas << cuenta[i] << endl;
    outarchbalcuentas <<balance[i] << endl;
    outarchcatgastos<<catgastos[i]<<endl;
    }


    for (int i=0;i<controlhist;i+=1){
    outarchhistocuentas<<information[i] <<endl;
    }
    
    for (int i=0;i<controlhistgastos;i+=1){
    outarchhistogastos<<infogastos[i] <<endl;
    }
 outarchcuentas.close();
 outarchbalcuentas.close();      
outarchhistocuentas.close();
outarchhistogastos.close();
outarchcatgastos.close();
}/////////////////////


void gastos(){
    int answ;
    int answw;
    int answcuenta;
    double answdinero;
    int counter=0;
    cout<<"Desea:'\n'";
    cout <<"1.-Agregar Gasto"<<endl;
    cout <<"2.-Agregar categoria de gastos"<<endl;
    cout <<"3.-Eliminar Categoria de Gastos"<<endl;
    cout <<"4.-Historial de Gastos"<<endl;
    cout <<"0.-Salir al menú"<<endl;
    cout <<"Seleccione el número correspodiente :";
    cin>>answ;
 switch (answ)
 {
 case 2:         /////////////////////////////////////// inicio case 1 entrada de dinero   
  addcategoria();
    break; ////////////////////////////////////////////fin case 1 crear cuenta
 
 case 1: ///////////////////////////////////////// inicio case 2 traspaso entre cuentas 
     counter=0;
 for(int i=0;i<=19;i+=1)
 {
    if (cuenta[i]!="??")
    {
    counter+=1;
    cout << counter << ".- " << cuenta[i] <<" $"<<fixed<<setprecision(2)<<balance[i]<< endl;
    }
 }  
     cout<<"Seleccione el numero de cuenta con la que hará el gasto :";
     cin>>answcuenta;
      if (balance[answcuenta-1]>0){
        do{
         
             counter=0;
             for (int i = 0; i < 20; i++)
             {        
                if (catgastos[i]!="??")
                 {
                 counter+=1;
                 cout << counter << ".- " << catgastos[i] << endl;
                 }
             }
             
            cout<<"Seleccione la categoría del gasto: o digite 0 si quiere agregar una nueva categoría :";
            cin>>answw;
            if (answw==0)
            {
            addcategoria();
            }else if (answw>0 && answw<=counter)
            {
                cout<<"Digite el monto del gasto: ";
                cin>>answdinero;
                if (answdinero<=balance[answcuenta-1])
                {
                string desc;
                string filler=to_string(answdinero);
                cin.ignore();
                cout<<"Agregue una descripción a su gasto :"<<endl;
                getline(cin,desc);
                infogastos[controlhistgastos]=time();
                infogastos[controlhistgastos]+=" "+catgastos[answw-1]+" " + " -$"+ filler+" "+ desc ;
                balance[answcuenta-1]-=answdinero;
                controlhistgastos+=1;
                }else{cout<<"Esta cuenta no cuenta con el fondo suficiente para solventar el gasto"<<endl;}            
            }              
         } while (answw==0);
        }else{
         cout<<"La cuenta no tiene saldo para agregar el gasto"<<endl;
        }
     
    break; ///////////////////////////// //////////////////////// fin case 2 traspaso entre cuentas

 case 4:
    cout<<"1.-De más antiguo a más reciente"<<endl;
    cout<<"2.-De más reciente a más antiguo"<<endl;
    cout<<"Digite la opción deseada: ";
    cin>>answw;


    ordenargastos();
    

    if (answw==1){
     
         if (infogastos[0]!=""){
          
          for(int i=0;i<controlhistgastos;i+=1){    
           
            if (infogastos[i]!=""){
            cout  << "- " << infogastos[i] << endl;     
            }    
          }   
        }else {cout<<"El historial está vacío"<<endl;}   

    }else if (answw==2){

         if (infogastos[1]!=""){
          
          for(int i=controlhistgastos;i>=0;i-=1){    
           
            if (infogastos[i]!=""){
            cout  << "- " << infogastos[i] << endl;     
            }    
          }   
        }else {cout<<"El historial está vacío"<<endl;}   
    }else{
        cout<<"La opción que ha seleccionado es incorrecta"<<endl;
    }
    break;
 case 3:
    delgastos();
 break;
 case 0:
 cout<<"**volviendo al menú"<<endl;
 break;
 default:
  cout <<"La opción no fue digitada correctamente "<<endl;
    break;
 }
} /*Agregar Gasto de dinero a una Cuenta, Agregar categoria de gastos, Eliminar categoria de gastos o Revisar su Historial de gastos*/

void checkcatgastos(){
    controlgastos=0;
    for (int i = 0; i < 20 ; i++)
    {
        if (catgastos[i]!="??")
        {
            controlgastos+=1;
        }
        
    }
    
}



void addcategoria(){
    int answw;
 cout<<"Ingrese el 0 para Volver al menú principal, ingrese otro numero para crear la nueva cuenta :";
   cin>>answw;
    if (answw!=0){
        cin.ignore();
        string nombrecuenta;
     cout<<"Solo se permiten de 5 a 25 caracteres para el nombre de su cuenta"<<endl;
     cout<<"Digite el nombre de la nueva cuenta :'\n'";
     getline(cin,nombrecuenta); 
     
        if (nombrecuenta.length()>=5 && nombrecuenta.length()<=25 && cuenta[19]=="??"){      
            checkcatgastos();     
            cout<<"Categoria de gastos añadida exitosamente!"<<endl;
            catgastos[controlhistgastos]=nombrecuenta;
            controlhistgastos+=1;           
        }else{cout<<"El nombre no cumple con los requisitos para la creación de la cuenta "<<endl;}
    }
}

void ordenargastos(){//////////////////////////////////////// ordena el historial de ingresos y trazpasos de dinero
string aux="";
    for (int i=0;i<=9998-1;i++)
    {
        for (int j=0;j<=9998-1;j++)
        {
            if (infogastos[j+1]>infogastos[j])
            {
                aux=infogastos[j];
                infogastos[j]=information[j+1];
                infogastos[j+1]=aux;
            }
            
        }
    }

}

void delgastos(){
    int counter,answw;
    
    if (catgastos[1]!="??")
    {
    counter=0;
    for (int i = 0; i < 20; i++)
    {        
        if (catgastos[i]!="??")
        {
        counter+=1;
        cout << counter << ".- " << catgastos[i] << endl;
        }
     }            
     cout<<"Seleccione la categoría del gasto a eliminar o digite 0 para volver al menú principal :";
     cin>>answw;
        if (answw!=0)
        {
            if (answw!=1)
            {
                catgastos[answw-1]="??";
                bool confirm=false;
                while (confirm==false)
                {
                 if (catgastos[answw]!="??"&& catgastos[answw-1]=="??")
                 {
                     swap(catgastos[answw],catgastos[answw-1]);
                    answw+=1;
                 }else{confirm=true;}
                }                 
          }else{cout<<"La cuenta de gastos generales no se puede borrar"<<endl;}                
        }
            
    }else{cout<<"Usted no cuenta con otras categorías de gastos y la cuenta de gastos generales no se puede borrar"<<endl;}
}


void crearacc(){
int answw;
 cout<<"Ingrese el 0 para Volver al menú principal, ingrese otro numero para crear la nueva cuenta de ingresos:";
   cin>>answw;
    if (answw!=0){
        cin.ignore();
        string nombrecuenta;
     cout<<"Solo se permiten de 5 a 20 caracteres para el nombre de su cuenta"<<endl;
     cout<<"Digite el nombre de la nueva cuenta :'\n'";
     getline(cin,nombrecuenta); 
     
        if (nombrecuenta.length()>=5 && nombrecuenta.length()<=20 && cuenta[19]=="??"){      
     
            cout<<"Categoria de gastos añadida exitosamente!"<<endl;
            catgastos[checkcuenta()]=nombrecuenta;
                       
        }else{cout<<"El nombre no cumple con los requisitos para la creación de la cuenta "<<endl;}
    }

}

int checkcuenta(){
    int control=0;
    for (int i = 0; i < 20 ; i++)
    {
        if (cuenta[i]!="??")
        {
            control+=1;
        }
        
    }
    return control;
}


void delcuenta(){
    int counter,answw;
    
    if (cuenta[1]!="??")
    {
    counter=0;
    for (int i = 0; i < 20; i++)
    {        
        if (cuenta[i]!="??")
        {
        counter+=1;
        cout << counter << ".- " << cuenta[i] << endl;
        }
     }            
     cout<<"Seleccione la cuenta de ingreso a eliminar o digite 0 para volver al menú principal :";
     cin>>answw;
        if (answw!=0)
        {
            if (answw!=1)
            {
                cuenta[answw-1]="??";
                bool confirm=false;
                while (confirm==false)
                {
                 if (cuenta[answw]!="??"&& cuenta[answw-1]=="??")
                 {
                     swap(cuenta[answw],cuenta[answw-1]);
                    answw+=1;
                 }else{confirm=true;}
                }                 
          }else{cout<<"La cuenta Efectivo no se puede borrar"<<endl;}                
        }
            
    }else{cout<<"Usted no cuenta con otras cuentas de ingreso y la Cuenta Efectivo no se puede borrar"<<endl;}
}