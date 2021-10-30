#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
string user1="102030", user2="302010", user3="704010", userR, admin="192784",usern,dinero1;
int puser1=2010, puser2=1020, puser3=4010, puserR,answ, entrada,puserad=2719,balance,dinero;

do 
{

 while (entrada == 0 )
 {
    cout << ("***Bienvenido al cajero BBVA Bancomer***'\n'" );
    cout << ("Ingrese su Cuenta: '\n'");
     cin >> userR;
    cout << ("Ingrese su PIN: '\n'");
     cin >> puserR;
if (userR==user1 and puserR==puser1) // entrada a la cuenta 1
{
    entrada = 1;
    
    balance=(puser1*10);
    usern="Pito perez";
    cout << ("Bienvenido(a) " + usern); 
    cout<<("'\n'");
}
    else if (userR==user2 and puserR==puser2) // entrada a la cuenta 2
    {
    entrada=2;
    
    balance=(puser2*10);
    usern="Juan Corrido";
    cout << ("Bienvenido(a) " + usern); 
    cout<<("'\n'");
    }
    else if (userR==user3 and puserR==puser3){ // entrada a la cuenta 3
    entrada=3;
    
    balance=(puser3*10);
    usern="Maria Palomares";
    cout << ("Bienvenido(a) " + usern); 
    cout<<("'\n'");
    }
    else if (userR==admin and puserR==puserad){ // entrada a la cuenta 4
    entrada=4;
    
    usern="Master Admin";
    }  
    else
    {
        std::cout <<"La cuenta o el PIN no son correctos '\n'";  
    }


 if (entrada==4)
{
    cout << "Welcome Dear Admin, the system will be close";
}
else if (entrada>0 and entrada <4)
{
do
{
 cout << ("Desea : '\n'"); 
 cout << ("1.- Retirar'\n'"); 
 cout << ("2.- Consultar Saldo'\n'"); 
 cout << ("3.- Transferir a otra cuenta'\n'");
 cout << ("4.- Consultar Saldo'\n'");
 cout << ("5.- Cambiar NIP'\n'");   
 cout << ("0.- Salir'\n'"); 
 cin>> answ;
switch (answ)
{
case 1:// caso para retiro
    
    cout << ("Cuanto desea retirar : '\n'"); 
    cout << ("Su saldo es : $" );
    cout << (balance);
    cout << (".00 \n'");
    cout << ("1.-$100 '\n'");
    cout << ("2.-$200 '\n'");
    cout << ("3.-$500 '\n'");
    cout << ("4.-$1000 '\n'");
    cout << ("Si desea otra cantidad digitela en multiplos de 100:'\n'");
    cout << ("Recuerde que solo puede retirar $9600: por transaccion: ");
    cin >> (answ);
   
    dinero1=answ;
    dinero=dinero1.length();

    if  (dinero = 5)
    {
        cout << ("Recuerde que solo puede sacar 9600 al mes");
    }
    else 
    {

    }



    break; //break case 1
case 2:// caso para consultar saldo
    /* code */
    break;
case 3:
    /* code */
    break;
case 4:
    /* code */
    break;
case 5:
    /* code */
    break; 
case 0:
    cout << ("Usted ha salido, Gracias por su preferencia'\n'");
    entrada=0;
    break;           
default:
    break;
}




}
while (answ!=0) ; // while para el manejo de la cuenta
} //if de manejo de cuenta
 }   //segundo while
}//primer while "DO"
while (entrada!=4); // instruccion do

return 0;
}
