#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Este programa genera una matriz 3x3 rellena de  
//numeros enteros entre el 0 y el 9 con repeticion
using namespace std;
int main(){
	long semillita;
	int cont;
	semillita=time(0);
	srand(semillita);
	for(cont=0;cont<100;cont++){
		cout<<"Un numero al azar: "<<rand()%6+1<<endl;
	}

	return 0;
}
