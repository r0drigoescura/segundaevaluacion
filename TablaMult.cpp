#include<iostream>//libreria de cabecera
using namespace std;

int main(){
	int n_tabla;
	cout<<"Introduce un numero:  ";
	cin>>n_tabla;
	cout<<"********************"<<endl;
	cout<<"Tabla del "<<n_tabla<<endl;
	cout<<"******************** "<<endl;
	int cont;
	for(cont=1;cont<=10;cont++){
		cout<<n_tabla<<"x"<< cont<<"="<< n_tabla*cont<< endl;
	}
	return 0;
}
