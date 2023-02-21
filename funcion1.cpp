#include<iostream>
using namespace std;
int esPitagorica(int num1,int num2,int num3){
	//Decidimos cual es la hipotenusa
	int c1,c2,hip;
	int respuesta=0;
	if(num1>num2 && num1>num3){
		hip=num1;
		c1=num2;
		c2=num3;
	}
	else{
		if(num2>num1 && num2>num3){
		hip=num2;
		c1=num1;
		c2=num3;
		}
		else{
		hip=num3;
		c1=num1;
		c2=num2;
		}
	}
	if(hip*hip==(c1*c1)+(c2*c2)){
		respuesta;
	}
	else{
		respuesta=0;
	}
	return respuesta;
}
int main(){
	int num1,num2,num3;
	int respuesta;
	cout<<"Introduce 3 numeros:   "<<endl;
	cout<<"Primer numero:  ";
	cin>>num1;
	cout<<"Segundo numero:  ";
	cin>>num2;
	cout<<"Tercer numero:  ";
	cin>>num3;
	//Invocamos funcion
	respuesta=esPitagorica(num1,num2,num3);
	if(respuesta==1){
		cout<<"Es una terna pitagorica";
	}
	else{
		cout<<"No es una terna pitagorica";
	}
}
