#include<iostream>//libreria de cabecera
using namespace std;

int main(){
    int edad;
    cout<<"Introduce tu edad: ";
    cin>> edad;
    for(edad>=18)
    	cout<<"Eres mayor de edad";
	
	else{
		//Rama falso
		cout<<"Eres menor de edad";
	}
    return 0;
}
