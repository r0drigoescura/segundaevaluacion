#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int cuenta_letras(char *p_nombre){
	int cont=0;
	while(*(p_nombre+cont)!='\0'){
		cont++;
	}
	return cont;
}
int main(){
	char *reyes[3];
	char nombre[10];
	int longitud;
	int cont;
	for(cont=0,cont<3,cont++){
		//pedimos el nombre del rey mago
		cout<<"Dime el nombre del rey mago"<<cont<< " : ";
		cin>>nombre;
		//verificamos que lo hemos leido bien mostrandolo por pantalla
		cout<<"\nHas introducido el nombre de "<<nombre;
		//contamos cuantas letras tiene el nombre
		longitud=cuenta_letras(nombre);
		//lo deletreamos en vertical
		//verificamos que lo hemos leido bien mostrandolo por pantalla
		cout<<"\nHas introducido el nombre de "<<nombre;
		//contamos cuantas letras tiene el nombre
		longitud=cuenta_letras(nombre);
		//lo deletreamos en vertical
		for (cont=0;cont<longitud;cont++){
			printf("\n%c",*(nombre+cont));
			}
		//reservamos memeoria para el nombre
		reyes[0]=(char*)malloc((longitud+1)*sizeof(char));
		printf("\nLongitud= %d",longitud);
		//trasladamos la palabra letra a letra
		for (cont=0;cont<longitud;cont++){
			*(*reyes+cont)=nombre[cont];
		}
	//comprobacion
	printf("\n En su nueva ubicacion %s",*reyes);	
	}
	//verificamos que lo hemos leido bien mostrandolo por pantalla
	cout<<"\nHas introducido el nombre de "<<nombre;
	//contamos cuantas letras tiene el nombre
	longitud=cuenta_letras(nombre);
	//lo deletreamos en vertical
	for (cont=0;cont<longitud;cont++){
		printf("\n%c",*(nombre+cont));
	}
	//reservamos memeoria para el nombre
	reyes[0]=(char*)malloc((longitud+1)*sizeof(char));
	printf("\nLongitud= %d",longitud);
	//trasladamos la palabra letra a letra
	for (cont=0;cont<longitud;cont++){
		*(*reyes+cont)=nombre[cont];
	}
	//comprobacion
	printf("\n En su nueva ubicacion %s",*reyes);
	return 0;
}
