#include <iostream>
#include <cmath>
#include <string.h>
#include <fstream>
#include <string.h>
using namespace std;

void recarga();
void ingresapass();
void loaddata();
void savedata();
void admin();
int checkcuenta();
int menu2();

string password[50];
string account[50];
double accbalance[50];
string ownername[50];
int entrada=0;
double balance;
string name;
string pass;

string accuser;
string passuser;
int main(){



do{
loaddata();
ingresapass();   


 if (account[entrada]==accuser && password[entrada]==passuser )
 {
 name=ownername[entrada];
 pass=password[entrada];
 balance=accbalance[entrada];

  if (entrada==0)
  {    
    admin();  
  } 
  else{
      int ansdo=1;
      
     cout<<"Bienvenid@ Sr./ Sra. " <<name<< endl;    
      do{
      
        ansdo=menu2();
     }while (ansdo!=0);
    }
 }else{   
   cout<< "Cuenta o contraseña invalidos" << endl;
   accuser="";
   passuser="";
   entrada=100;
   }
}while (entrada!=0);

cout<<"***El cajero se esta apagando***";
for (int i = 0; i < 5; i++)
{
    int qlq;
    cout<<"***llame al banco para reportarlo ***";
    cin>>qlq;
}

return 0;
}


void ingresapass(){

cout << "***Bienvenido al cajero BBVA Bancomer***"<<endl;
    cout << "Ingrese su Cuenta: ";
     cin >> accuser;
    cout << "Ingrese su PIN: ";
     cin >> passuser;
  entrada=checkcuenta();
  
}


void loaddata(){
ifstream inarchpass("C://CArchivopassw.txt");
ifstream inarchbalance("C://CArchivocuentasbal.txt");
ifstream inarchaccount("C://CArchivoaccount.txt");
ifstream inarchnomcuenta("C://CArchivoaccowner.txt");

 for(int i=0;i<50;i+=1){       
        string fill;
        
    getline(inarchpass,password[i]);
    

    getline(inarchbalance,fill);
    double fill2=atof(fill.c_str());
    accbalance[i]=fill2;

    getline(inarchaccount,account[i]);
    
    getline(inarchnomcuenta,ownername[i]);
    
   }
inarchpass.close();
inarchbalance.close();
inarchaccount.close();
inarchnomcuenta.close();


}

void admin(){
cout << "Welcome Dear Admin, the system will be close"<<endl;
}


int checkcuenta(){
    int retorno=0;
    
for (int i = 0; i < 50; i++)
{
    
    if (account[i]==accuser){
        retorno=i;
        i=49;
    }else if (account[i]!=accuser)
    {
        
    }else if (account[i]!=accuser && i==49)
    {
       retorno=100;
    }
    
        
}

return retorno;
}

void savedata(){

 ofstream outarchpassw;
 ofstream outarchbalcuentas;
 ofstream outarchownername;
 ofstream outarchaccount;

 outarchpassw.open("C://CArchivopassw.txt",ios::out);

 outarchbalcuentas.open("C://CArchivocentasbal.txt",ios::out);

 outarchownername.open("C://CArchivoaccowner.txt",ios::out);

 outarchaccount.open("C://Archivohistorialcuentas.txt",ios::out);

 

    if (outarchpassw.fail()){                                       // if si falla la apertura de archivo
    cout << "Error : El archivo passw no se pudo abrir" << endl;
    exit(1);                                                          //fin if si falla apertura
    }
    if (outarchbalcuentas.fail()){
        cout << "Error : El archivo balance cuentas no se pudo abrir" << endl;
        exit(1);  
    }   
    if (outarchownername.fail()){
        cout << "Error : El archivo ownername no se pudo abrir" << endl;
        exit(1);  
    }
     if (outarchaccount.fail()){
        cout << "Error : El archivo account no se pudo abrir" << endl;
        exit(1);  
    }
    
    
    for(int i=0;i<50;i+=1)
    {
    outarchpassw << password[i] << endl;
    outarchbalcuentas <<accbalance[i] << endl;
    outarchownername<<ownername[i]<<endl;
    outarchaccount<<account[i]<<endl;
    }

 outarchpassw.close();
 outarchbalcuentas.close();      
outarchownername.close();
outarchaccount.close();


}

void recarga(){
int answ1;
int answ2;
  cout << "Compañía : "<<endl; 
  cout << "1.- Telcel"<<endl; 
  cout << "2.- Movistar"<<endl; 
  cout << "3.- At&t"<<endl;
  cout << "4.- Unefón"<<endl;   
  cout << "0.- Salir"<<endl;
   cout << "Digite la opción deseada :"; 
  cin>> answ1;
  if (answ1>0 && answ1<5)
  {
   cout << "Compañía : "<<endl; 
   cout << "1.-$30"<<endl; 
   cout << "2.-$50"<<endl; 
   cout << "3.-$100"<<endl;
   cout << "4.-$200"<<endl;   
   cout << "5.-$500"<<endl;
   cout << "0.-Salir"<<endl;
   cout << "Digite la opción deseada :"; 
   cin >> answ2;
   int iter=0;
   int iter2=0;
switch (answ2)
  {
  case 1:
  cout << "Digite su numero de teléfono :";
  cin>>iter;
  cout << "Digite su numero de teléfono :";
  cin>>iter2;
    if (iter==iter2)
    {
        balance-=30;
    }
      break;
  case 2:
        cout << "Digite su numero de teléfono :";
  cin>>iter;
  cout << "Digite su numero de teléfono :";
  cin>>iter2;
    if (iter==iter2)
    {
        balance-=50;
    }
      break;
  case 3:
        cout << "Digite su numero de teléfono :";
  cin>>iter;
  cout << "Digite su numero de teléfono :";
  cin>>iter2;
    if (iter==iter2)
    {
        balance-=100;
    }
      break;
case 4:
        cout << "Digite su numero de teléfono :";
  cin>>iter;
  cout << "Digite su numero de teléfono :";
  cin>>iter2;
    if (iter==iter2)
    {
        balance-=200;
    }
      break;
case 5:
  cout << "Digite su numero de teléfono :";
  cin>>iter;
  cout << "Digite su numero de teléfono :";
  cin>>iter2;
    if (iter==iter2)
    {
        balance-=500;
    }
      break;
case 0:cout << "Se ha cancelado la recarga ";

      break;
  default:cout << "Ha ingresado una opción incorrecta ";
      break;
  }
}
accbalance[entrada]=balance;
savedata();
}


int menu2(){
int answ;
  cout << "Desea : "<<endl; 
  cout << "1.- Retirar"<<endl; 
  cout << "2.- Consultar Saldo"<<endl; 
  cout << "3.- Transferir a otra cuenta"<<endl;
  cout << "4.-Cambiar NIP"<<endl;
   cout << "5.-Recargas telefónicas"<<endl;
  cout << "0.- Salir"<<endl;
   cout << "Digite la opción deseada :"; 
  cin>> answ;
switch (answ)
{
case 1:
    int answc1;
    cout << "Cuanto desea retirar : "<<endl; 
    cout <<"Su saldo es : $"<<balance<<endl;   

    cout << "1.-$100 "<<endl;
    cout << "2.-$200 "<<endl;
    cout << "3.-$500 "<<endl;
    cout << "4.-$1000 "<<endl;
    cout << "Si desea otra cantidad digitela en multiplos de 100:"<<endl;
    cout << "Recuerde que solo puede retirar $9600: por transaccion: ";
    cin >> answc1;
   if (answc1 ==4 && balance>=1000)
    {
    balance=balance-1000;
     cout << "Su saldo es :$"<< balance <<endl;    
    }
    else if ( answc1==3 && balance>=500)
    {
    balance=balance-500;
     cout << "Su saldo es :$"<< balance <<endl;    
    }
    else if (answc1==2 && balance>=200)  
    {
        balance=balance-200;
         cout << "Su saldo es :$"<< balance <<endl;    
    }
    else if (answc1==1 && balance>=100)
    {
        balance=balance-100;
         cout << "Su saldo es :$"<< balance <<endl;    
    }
    else if (answc1 >=100 &&answc1 <=9600 ) 
    {      
        if (answc1 > balance)
        {
            cout << "Saldo insuficiente"<<endl;
        }
        else if (balance>=answc1)
        {
        int dinero;
        dinero=(answc1/100);  
        balance=balance-(dinero*100);
        cout << "Su saldo es :$"<< balance <<endl;
        dinero=0;    
        }       
    } 
    else
    {
        cout<<"Digite una cantidad u opción correcta porfavor!"<<endl;
    }
    break;
case 2:
     cout << "Su saldo es :$"<< balance <<endl;
    break;
case 3:
   int answc3;
double dinero;
    cout << "Su saldo es :$"<< balance <<endl;   
    cout << "Digite el número de cuenta "<<endl;
    cout << "Por lo pronto contamos con las siguientes opciones :"<<endl;
   
   for (int i=1; i < 50; i++)
   {
      if (account[i]!="??")
      {
         cout << i << ".- " << account[i] <<" "<<ownername[i] <<endl;
      } else{i=50;}     
   }

   cout <<"Digite el numero correspondiente a la cuenta a la cual va a transferir o digite 0 para volver al menú principal :";
    cin>> answc3;

    if (answc3!=0 && accuser!=account[answc3])
    {
        cout << "Digite la cantidad de la transferencia :$";
        cin >> dinero;
        if (balance>=dinero)
        {
      balance-=dinero;
      accbalance[answc3]+=dinero;

        }else{cout << "El saldo en su cuenta no es suficiente para realizar la transferencia!"<<endl;}

    }else{cout << "No se puede transferir a su propia cuenta"<<endl;}
    break;
case 4:
 string newpass,newpass2,answww;

    cout<<"Para continuar ingrese su NIP actual: ";
    cin>> answww;

      if (answww==pass) 
      {
       cout << " Ahora ingrese el nuevo NIP: ";
       cin >> newpass;
       cout<<"Confirme su nuevo NIP porfavor: ";
       cin>>newpass2;
       
        
        if (newpass==newpass2 && newpass.length()==4)
        {
        pass=newpass;
        password[entrada]=pass;
        }else{cout<<"El nip no tiene la longitud correcta"<<endl;}//condicion para confirmar el nip us1

      }else{cout<<"El nip es incorrecto"<<endl; }
    break;
}
if (answ==5)
{
    recarga();
}else 
{
    cout<<"Opcion ingresada es incorrecta"<<endl;
}



accbalance[entrada]=balance;
savedata();
return answ;
}