#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

void host();
void archivo();
int binadec();
void submaskk();
    int resp,hosts,subredes,exponente,operador,clase;
    int dirRed,dirRed1,dirRed2,dirRed3,numunos;
    string submask,dival,dirinval,dircom,numbin;

int main (){
 
    

    cout<< "Digite la direccion de red esta se pedirá separada en 4 segmentos";

    cout<< "Ingrese la direccion de red segmento 1";
    cin>>dirRed;
    cout<< "Ingrese la direccion de red segmento 2";
    cin>>dirRed1;
    cout<< "Ingrese la direccion de red segmento 3";
    cin>>dirRed2;
    cout<< "Ingrese la direccion de red segmento 4";
    cin>>dirRed3;

     if (dirRed>=0 and dirRed<=127 ){
      submask="255."; numunos=24; clase=1;
      
      }else if(dirRed>=128 and dirRed<=191 ){
        submask="255.255."; numunos=16; clase=2;

      }else if(dirRed>=192 and dirRed<=223 ){
        submask="255.255.255."; numunos=8; clase=3;
       }else{cout<< "Ha ingresado algo incorrect0";}

    
        if (dirRed1>=0 ) {
                    cout<< "¿Desea ingresar el numero de hosts o de subredes? '\n'";
                    cout<< "1.- Por hosts '\n'";
                    cout<< "2.-Por Subred :";
                    cin>>resp;

                    if (resp=1){
                    cout<< "Ingrese el numero de hosts: ";
                    cin>>resp;
                        for(int x=1;x<=numunos;x+=1) {
                            
                            operador=pow (2,x);
                            if (operador-2>=resp and numunos=8){       
                                    int ceros=8-x;
                                    int unos=x;
                                    subredes=numunos-x;
                                    hosts=x;
                                do{
                                    numbin+="1";
                                    unos-=1;
                                }while(unos!=0);   
                                do{
                                    numbin+="0";
                                    ceros-=1;
                                }while(ceros!=0);
                                x=numunos;
                            }

                        }//////////////////

                   /*     for(int x=1;x<=exoponentesub;x+=1) {
                            
                            operador+=x*2 
                        }*/
                    
                        submaskk();

                    }else if (resp=2){
                    cout<< "Ingrese el numero de subredes: ";
                    cin>>resp;

                    }else{cout<< "Ha digitado una acción incorrecta";}  
   

        }
}






void submaskk (){
    string numext;
    
    int numiter,numout=0;
    int tamnum=numbin.length();
 for (int i=tamnum;i>0;i--) {
			  numext=numbin.substr(i-1,1);
			  numiter=stoi(numext);
			  
			  switch(numiter) {
			  case 1: numout+=pow(2,tamnum-i);
			  	break;
			  case 0: cout<< "/////";
			   break;
			  default: cout<<"Se ingresó un dato erroneo";
			  	break;
			  }
}

if (numout>255){
    subredes=512-numout;

}else{
subredes=256-numout;
submask+=to_string(numout);
if (clase==1){submask+=".0.0";}
else if (clase==2){submask+=".0";}
}


cout << submask;
}

void archivo (){
ofstream outarchivo;
outarchivo.open("C://Archivoredes.txt",ios::out);
 if (outarchivo.fail()){                                       // if si falla la apertura de archivo
    cout << "Error : El archivo no se pudo abrir" << endl;
    exit(1);   
    for (x=1;x<=subredes;x+=1){
        do
        {
            if(numunos=24){

            }else if (numunos=16)
            {
                /* code */
            }else if (numunos=8)
            {
                /* code */
            }else{cout<<"Hubo un error durante el programa";}
            
            
        } while (hosts!=0);
        



    }
















}