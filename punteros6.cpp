#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	char letra[]="historia";
	int cont;
	for(cont=0;cont<=7;cont++){
		printf("Dame la letra[%d]= %c en la posicion= %x\n",cont,*(letra+cont)&letra[cont]);
		
	}
	printf("letra=%s\n",letra);
	printf("letra=%x",letra);
	return 0;
}
