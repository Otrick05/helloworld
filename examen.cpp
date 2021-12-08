#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
    string numaletra,centavostr,centavossub,answw;
	double answ=0;
	int cmillar=0,dmillar=0,umillar=0,centena=0,decena=0,unidad=0,centavos=0;
	cout << "Ingrese un número del 0 al 999,999.99" << endl;
	cin>>answw;	
	answ=stod(answw);
	if (answ>=100000) 
	{
		
		if (answ<=999999.99) 
		{
		cmillar=answ/100000;
		dmillar=(answ-(cmillar*100000))/10000;
		umillar=(answ-((cmillar*100000)+(dmillar*10000)))/1000;
		centena=(answ-((cmillar*100000)+(dmillar*10000)+(umillar*1000)))/100;
		decena=(answ-((cmillar*100000)+(dmillar*10000)+(umillar*1000)+(centena*100)))/10;
		unidad=(answ-((cmillar*100000)+(dmillar*10000)+(umillar*1000)+(centena*100)+(decena*10)));
        centavostr=(answw);
        centavossub=centavostr.substr(7,2);
        
		}
		
	}
	
		if (answ>=10000) 
	{
	
		if (answ<=99999.99) 
		{
		
		dmillar=answ/10000;
		umillar=(answ-(dmillar*10000))/1000;
		centena=(answ-((dmillar*10000)+(umillar*1000)))/100;
		decena=(answ-((dmillar*10000)+(umillar*1000)+(centena*100)))/10;
		unidad=(answ-((dmillar*10000)+(umillar*1000)+(centena*100)+(decena*10)))/1;
		centavostr=(answw);
        centavossub=centavostr.substr(6,2);
		}
		
	}
	
		if (answ>=1000) 
	{
		
		if (answ<=9999.99) 
		{
		
		
		umillar=answ/1000;
		centena=(answ-(umillar*1000))/100;
		decena=(answ-((umillar*1000)+(centena*100)))/10;
		unidad=(answ-((umillar*1000)+(centena*100)+(decena*10)));
		centavostr=(answw);
        centavossub=centavostr.substr(5,2);
		}
		
	}
	
		if (answ>=100) 
	{
		
		if (answ<=999.99) 
		{

		centena=answ/100;
		decena=(answ-(centena*100))/10;
		unidad=answ-((centena*100)+(decena*10));
	centavostr=(answw);
        centavossub=centavostr.substr(4,2);
		
		}
		
	}
	
	if (answ>=10) 
	 {
		
		if (answ<=99.99) 
		{

		
		decena=answ/10;
		unidad=(answ-(decena*10));
		centavostr=(answw);
        centavossub=centavostr.substr(3,2);
		
		}
		
     }
	
    if (answ==0)
    {
       numaletra="Cero ";
    }


	switch (cmillar)////////////////////////////////////////////////////centena de millar
    {
	case 1:
    if (dmillar==0 && umillar==0){
numaletra="Cien mil";
    } else {
        numaletra="Ciento";
    }

		break;
    case 2:
    if (dmillar==0 && umillar==0){
numaletra="Docientos mil";
    } else {
        numaletra="Docientos";
    }
		break;
    case 3:
    if (dmillar==0 && umillar==0){
numaletra="TreCientos mil";
    } else {
        numaletra="TreCientos";
    }
		break;
    case 4:
    if (dmillar==0 && umillar==0){
numaletra="CuatroCientos mil";
    } else {
        numaletra="CuatroCientos ";
    }
		break;
    case 5:
    if (dmillar==0 && umillar==0){
numaletra="Quinientos mil";
    } else {
        numaletra="Quientos";
    }
		break;
    case 6:
    if (dmillar==0 && umillar==0){
numaletra="SeisCientos mil";
    } else {
        numaletra="SeisCientos";
    }
		break;
    case 7:
    if (dmillar==0 && umillar==0){
numaletra="SeteCientos mil";
    } else {
        numaletra="SeteCientos";
    }
		break;
    case 8:
    if (dmillar==0 && umillar==0){
numaletra="OchoCientos mil";
    } else {
        numaletra="OchoCientos";
    }
		break;
    case 9:
    if (dmillar==0 && umillar==0){
numaletra="NoveCientos mil";
    } else {
        numaletra="NoveCientos";
    }
		break;
    case 0:
    break;
    default:
    cout << "Probablemente el número que insertó es mayor al rango permitido";
    break;
	}
	
	switch (dmillar) //////////////////////////////////////////////////////////// decena de millar
    {
	case 1:
        if (umillar==0)
        {
 numaletra=numaletra + " Diez mil";           
        }else {
            switch (umillar)
            {
            case 1:
                numaletra=numaletra + " Once Mil";
                break;
            case 2:
                numaletra=numaletra + " Doce Mil";
                break; 
            case 3:
                numaletra=numaletra + " Trece Mil";
                break;
            case 4:
                numaletra=numaletra + " Catorce Mil";
                break;
            case 5:
                numaletra=numaletra + " Quince Mil";
                break;
            case 6:
                numaletra=numaletra + " Dieciseis Mil";
                break;
            case 7:
                numaletra=numaletra + " Diecisiete Mil";
                break;
            case 8:
                numaletra=numaletra + " Dieciocho Mil";
                break;
             case 9:
                numaletra=numaletra + " Diecinueve Mil";
                break;               
            default:
                break;
            }
        }        
		break;
    case 2:
if (umillar==0)
        {
 numaletra=numaletra + " Veinte mil";           
        }else {
            switch (umillar)
            {
            case 1:
                numaletra=numaletra + " Veintiun Mil";
                break;
            case 2:
                numaletra=numaletra + " Veintidos Mil";
                break; 
            case 3:
                numaletra=numaletra + " VeintiTres Mil";
                break;
            case 4:
                numaletra=numaletra + " VeintiCuatro Mil";
                break;
            case 5:
                numaletra=numaletra + " Veinticinco Mil";
                break;
            case 6:
                numaletra=numaletra + " Veintiseis Mil";
                break;
            case 7:
                numaletra=numaletra + " Veintisiete Mil";
                break;
            case 8:
                numaletra=numaletra + " Veintiocho Mil";
                break;
             case 9:
                numaletra=numaletra + " Veintinueve Mil";
                break;               
            default:
                break;
            }
        }        
		break;
    case 3:
        if (umillar!=0){
            numaletra=numaletra + " Treinta Y";
        } else{numaletra=numaletra + " Treinta mil";}


		break;
    case 4:
        if (umillar!=0){
            numaletra=numaletra + " Cuarenta Y";
        } else{numaletra=numaletra + " Cuarenta mil";}

		break;
    case 5:
            if (umillar!=0){
            numaletra=numaletra + " Cincuenta Y";
        } else{numaletra=numaletra + " Cincuenta mil";}

		break;
    case 6:
        if (umillar!=0){
            numaletra=numaletra + " Sesenta Y";
        } else{numaletra=numaletra + " Sesenta mil";}
		break;
    case 7:
        if (umillar!=0){
            numaletra=numaletra + " Setenta Y";
        } else{numaletra=numaletra + " Setenta mil";}
		break;
    case 8:
        if (umillar!=0){
            numaletra=numaletra + " Ochenta Y";
        } else{numaletra=numaletra + " Ochenta mil";}
		break;
    case 9:
        if (umillar!=0){
            numaletra=numaletra + " Noventa Y";
        } else{numaletra=numaletra + " Noventa mil";}
		break;
    default:
    break;
	}	
		

if (dmillar!=1 && dmillar!=2)
{
    switch (umillar) //////////////////////////////////////////////////////////// Unidad de millar
    {
    case 1:
    numaletra=numaletra + " Un mil";
    break;
    case 2:
    numaletra=numaletra + " Dos mil";
    break;
    case 3:
 numaletra=numaletra + " Tres mil";
		break;
    case 4:
 numaletra=numaletra + " Cuatro mil";
		break;
    case 5:
 numaletra=numaletra + " Cinco mil";
		break;
    case 6:
 numaletra=numaletra + " Seis mil";
		break;
    case 7:
 numaletra=numaletra + " Siete mil";
		break;
    case 8:
 numaletra=numaletra + " Ocho mil";
		break;
    case 9:
 numaletra=numaletra + " Nueve mil";
		break;
    default:
    break;
	}		
}

        
	

	switch (centena) //////////////////////////////////////////////////////////// Centena
    {
	case 1:
    if (decena==0)
    {
      if (unidad==0)
      {
numaletra=numaletra + " Cien";
      }
    }else{
numaletra=numaletra + " Ciento";
    }
		break;
    case 2:
numaletra=numaletra + " Docientos";
		break;
    case 3:
numaletra=numaletra + " Trecientos";
		break;
    case 4:
numaletra=numaletra + " Cuatrocientos";
		break;
    case 5:
numaletra=numaletra + " Quinientos";
		break;
    case 6:
numaletra=numaletra + " Seiscientos";
		break;
    case 7:
numaletra=numaletra + " Setecientos";
		break;
    case 8:
numaletra=numaletra + " Ochocientos";
		break;
    case 9:
numaletra=numaletra + " Novecientos";
		break;
    default:
    break;
	}		


switch (decena) //////////////////////////////////////////////////////////// decena
    {
	case 1:
        if (unidad==0)
        {
 numaletra=numaletra + " Diez";           
        }else {
            switch (umillar)
            {
            case 1:
                numaletra=numaletra + " Once";
                break;
            case 2:
                numaletra=numaletra + " Doce";
                break; 
            case 3:
                numaletra=numaletra + " Trece";
                break;
            case 4:
                numaletra=numaletra + " Catorce";
                break;
            case 5:
                numaletra=numaletra + " Quince";
                break;
            case 6:
                numaletra=numaletra + " Dieciseis";
                break;
            case 7:
                numaletra=numaletra + " Diecisiete";
                break;
            case 8:
                numaletra=numaletra + " Dieciocho";
                break;
             case 9:
                numaletra=numaletra + " Diecinueve";
                break;               
            default:
                break;
            }
        }        
		break;
    case 2:
if (unidad==0)
        {
 numaletra=numaletra + " Veinte";           
        }else {
            switch (unidad)
            {
            case 1:
                numaletra=numaletra + " Veintiun";
                break;
            case 2:
                numaletra=numaletra + " Veintidos";
                break; 
            case 3:
                numaletra=numaletra + " VeintiTres";
                break;
            case 4:
                numaletra=numaletra + " VeintiCuatro";
                break;
            case 5:
                numaletra=numaletra + " Veinticinco";
                break;
            case 6:
                numaletra=numaletra + " Veintiseis";
                break;
            case 7:
                numaletra=numaletra + " Veintisiete";
                break;
            case 8:
                numaletra=numaletra + " Veintiocho";
                break;
             case 9:
                numaletra=numaletra + " Veintinueve";
                break;               
            default:
                break;
            }
        }        
		break;
    case 3:
        if (unidad!=0){
            numaletra=numaletra + " Treinta Y";
        } else{numaletra=numaletra + " Treinta";}


		break;
    case 4:
        if (unidad!=0){
            numaletra=numaletra + " Cuarenta Y";
        } else{numaletra=numaletra + " Cuarenta";}

		break;
    case 5:
            if (unidad != 0 ){
            numaletra=numaletra + " Cincuenta Y";
        } else{numaletra=numaletra + " Cincuenta";}

		break;
    case 6:
        if (unidad!=0){
            numaletra=numaletra + " Sesenta Y";
        } else{numaletra=numaletra + " Sesenta";}
		break;
    case 7:
        if (unidad!=0){
            numaletra=numaletra + " Setenta Y";
        } else{numaletra=numaletra + " Setenta";}
		break;
    case 8:
        if (unidad!=0){
            numaletra=numaletra + " Ochenta Y";
        } else{numaletra=numaletra + " Ochenta";}
		break;
    case 9:
        if (unidad!=0){
            numaletra=numaletra + " Noventa Y";
        } else{numaletra=numaletra + " Noventa";}
		break;
    default:
    break;
	}	

if (decena!=1 && decena!=2)
{
    switch (unidad) //////////////////////////////////////////////////////////// Unidad de millar
    {
    case 1:
    numaletra=numaletra + " Un";
    break;
    case 2:
    numaletra=numaletra + " Dos";
    break;
    case 3:
 numaletra=numaletra + " Tres";
		break;
    case 4:
 numaletra=numaletra + " Cuatro";
		break;
    case 5:
 numaletra=numaletra + " Cinco";
		break;
    case 6:
 numaletra=numaletra + " Seis";
		break;
    case 7:
 numaletra=numaletra + " Siete";
		break;
    case 8:
 numaletra=numaletra + " Ocho";
		break;
    case 9:
 numaletra=numaletra + " Nueve";
		break;
    default:
    break;
	}		
}



if (answ>=0.01 && answ<=0.99)
{
centavostr=(answw);
centavossub=centavostr.substr(2,2);
}else if (answ==0.00){
    cout << "Son " << numaletra << " Pesos " << centavossub << "00/100 M.N." << '\n';    
}else{cout << "Son " << numaletra << " Pesos " << centavossub << "/100 M.N." << '\n';    
}


















	return 0;
}