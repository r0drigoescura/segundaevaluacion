//Intrucciones básicas
//condicional multiple
#include<iostream>//libreria de cabecera
using namespace std;

int main(){	
	//definimos 3 variables
    int resp;
    cout<<"**********************"<<endl;
    cout<<"**       MENU       **"<<endl;
    cout<<"**********************"<<endl;
    cout<<"1. Volver a mostrar el menu"<<endl;
    cout<<"2. Despedirme"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"ELIGE UNA OPCION (1,2 o 3): ";
    cin>>resp;
    while(resp==1){
    switch(resp){
    	case 1:
    		cout<<"**********************"<<endl;
    		cout<<"**       MENU       **"<<endl;
    		cout<<"**********************"<<endl;
    		cout<<"1. Volver a mostrar el menu"<<endl;
    		cout<<"2. Despedirme"<<endl;
    		cout<<"3. Salir"<<endl;
    		cout<<"ELIGE UNA OPCION (1,2 o 3): ";
			cin>>resp;
    		break;
    	case 2:
    		cout<<"Estas despedido";
    		break;
    	case 3:
    		cout<<"";
    		break;
    	default:
    		cout<<"Noo has elegido ninguna opcion correcta";
		}
	}
}
