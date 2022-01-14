#include <iostream>
#include <fstream>
using namespace std;

double balance[20];

int main() {



ifstream archivobalance ("C://Archivobalcuentas.txt");
 
 for(int i=0;i<=19;i+=1)
    {  
    string fill; 
    getline(archivobalance,fill);
   balance[i]=stod(fill);   
  cout<<"si sale esta madre 8) me ahorco "<<balance[i]<<endl; 
    }

return 0;
}









