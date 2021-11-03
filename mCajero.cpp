#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main ()
{
string user1="102030", user2="302010", user3="704010", userR, admin="192784",usern,tamnips;
int passuser1=2010, passuser2=1020, passuser3=4010, puserR,answ, entrada=0,puserad=2719,balance,accbal1,accbal2,accbal3,dinero,newpass,tamnip;
accbal1=(passuser1*10);
accbal2=(passuser2*10);
accbal3=(passuser3*10);
do 
{

 while (entrada == 0 )
 {
    cout << ("***Bienvenido al cajero BBVA Bancomer***'\n'" );
    cout << ("Ingrese su Cuenta: '\n'");
     cin >> userR;
    cout << ("Ingrese su PIN: '\n'");
     cin >> puserR;
if (userR==user1 and puserR==passuser1) // entrada a la cuenta 1
{
    entrada = 1;
    balance=accbal1;
    usern="Pito perez";
    cout << ("Bienvenido(a) " + usern); 
    cout<<("'\n'");
}
    else if (userR==user2 and puserR==passuser2) // entrada a la cuenta 2
    {
    entrada=2;
    balance=accbal2; 
    usern="Juan Corrido";
    cout << ("Bienvenido(a) " + usern); 
    cout<<("'\n'");
    }
    else if (userR==user3 and puserR==passuser3){ // entrada a la cuenta 3
    entrada=3;
    
    balance=accbal3; 
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
  cout << ("4.-Cambiar NIP'\n'");  
  cout << ("0.- Salir'\n'"); 
  cin>> answ;

switch (answ)
{
case 1:// caso para retiro
    
    cout << ("Cuanto desea retirar : '\n'"); 
    cout << ("Su saldo es : $" ) << (balance);   
    cout << (".00 \n'");
    cout << ("1.-$100 '\n'");
    cout << ("2.-$200 '\n'");
    cout << ("3.-$500 '\n'");
    cout << ("4.-$1000 '\n'");
    cout << ("Si desea otra cantidad digitela en multiplos de 100:'\n'");
    cout << ("Recuerde que solo puede retirar $9600: por transaccion: ");
    cin >> (answ);
   if (answ ==4 and balance>=1000)
    {
    balance=balance-1000;
     cout << ("Su saldo es :$")<< balance <<("\n");    
    }
    else if ( answ==3 and balance>=500)
    {
    balance=balance-500;
     cout << ("Su saldo es :$")<< balance <<("\n");    
    }
    else if (answ==2 and balance>=200)  
    {
        balance=balance-200;
         cout << ("Su saldo es :$")<< balance <<("\n");    
    }
    else if (answ==1 and balance>=100)
    {
        balance=balance-100;
         cout << ("Su saldo es :$")<< balance <<("\n");    
    }
    else if (answ >=100 and answ <=9600 ) 
    {      
        if (answ > balance)
        {
            cout << ("Saldo insuficiente'\n'");
        }
        else if (balance>=answ)
        {
        dinero=(answ/100);  
        balance=balance-(dinero*100);
        cout << ("Su saldo es :$")<< balance <<("\n");
        dinero=0;    
        }       
    }

   
    else
    {
        cout<<("Digite una cantidad u opción correcta porfavor!'\n'" );
    }
    break; //break case 1
if (entrada==1)
{
accbal1=balance;

}
else if (entrada==2)
{
    accbal2=balance;
    //balance=0;
} 
else if (entrada=3)
{
    accbal3=balance;
    //balance=0;
}


case 2:// caso para consultar saldo
    cout << ("Su saldo es :$")<< balance <<("\n");   
    break;
case 3:
    cout << ("Su saldo es :$")<< balance <<("\n");   
    cout << ("Digite el número de cuenta '\n'");
    cout << ("por lo pronto contamos con las siguientes opciones :'\n'");
    cout << ("1.-") << passuser1 <<("'\n'");
    cout << ("2.-") << passuser2 <<("'\n'");
    cout << ("3.-") << passuser3 <<("'\n'");
    cin>> answ;
    cout << ("Digite la cantidad de la transferencia :$");
    cin >> dinero;
    cout <<("'\n'");
    
    if (answ==1 and dinero>=1)// if de transferencia
    {
    
        if (balance>=dinero)
        {
         balance=balance-dinero;
         cout<<("Su saldo ahora es :$") << balance <<("'\n'");
         accbal1=balance;
        // balance=0;
        }// segundo if transferencia
        else{cout << ("El dinero en su cuenta es insuficiente'\n'");}
    }
    else if (answ==2)
    {
    
        if (balance>=dinero)
        {
         balance=balance-dinero;
         cout<<("Su saldo ahora es :$") << balance <<("'\n'");
         accbal2=balance;
         //balance=0;
        }// segundo if transferencia
        else{cout << ("El dinero en su cuenta es insuficiente'\n'");}
    }
    else if (answ==3)
    {
        
        if (balance>=dinero)
        {
         balance=balance-dinero;
         cout<<("Su saldo ahora es") << balance <<("'\n'");
         accbal3=balance;
        // balance=0;
        }// segundo if transferencia
        else{cout << ("El dinero en su cuenta es insuficiente'\n'");}
    }
    else
    {cout<< ("Porfavor ingrese datos correctos '\n'"); }//fin if transferencia
        
   
    break; 
case 4:
    cout<<("Para continuar ingrese su NIP actual: ");
    cin>> answ;

      if (answ==passuser1 and entrada==1) //entrada al usuario 1
      {
       cout << (" Ahora ingrese el nuevo NIP: ");
       cin >> newpass;
       cout<<("'\n'Confirme su nuevo NIP porfavor: ");
       cin>>answ;
       tamnips=to_string(newpass);
        tamnip=tamnips.length();
        if (newpass==answ and tamnip==4)
        {
        passuser1=newpass;
        }else{cout<<("El nip no tiene la longitud correcta'\n'");}//condicion para confirmar el nip us1

      }
    else if (answ==passuser2 and entrada==2)//entrada al usuario 2
    {
       cout << ("'\n'Ahora ingrese el nuevo NIP: ");
       cin >> newpass;
       cout<<("'\n'Confirme su nuevo NIP porfavor: ");
       cin>>answ;
       tamnips=newpass;
       tamnip=tamnips.length();
        if (newpass==answ and tamnip==4)
        {
        passuser2=newpass;
        cout<< ("Transacción realizada con éxito")<<endl;
        }else{cout<<("El nip no tiene la longitud correcta'\n'");}
    }    
    else if (answ==passuser3 and entrada==3) //entrada al usuario 3
    {
       cout << ("'\n'Ahora ingrese el nuevo NIP: ");
       cin >> newpass;
       cout<<("'\n'Confirme su nuevo NIP porfavor: ");
       cin>>answ;
        tamnips=newpass;
        tamnip=tamnips.length();
        if (newpass==answ and tamnip==4)
        {
        passuser3=newpass;
        cout<< ("Transacción realizada con éxito")<<endl;
        }else{cout<<("El nip no tiene la longitud correcta'\n'");}       
    }else{cout << ("'\n' El Nip no es correcto '\n'");}
 

    
    break;// break caso 4
case 0:
    cout << ("Usted ha salido, Gracias por su preferencia'\n'");
    entrada=0;
    break;           
default:
    break;
}




}
while (answ!=0) ; // while para el manejo de la cuenta
  } //endif de manejo de cuenta
 }   //segundo while
}//primer while "DO"
while (entrada!=4); // instruccion do

return 0;
}
