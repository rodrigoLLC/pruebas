#include <iostream>
using namespace std;

int Buscar(int *a, int *b, int *c);

int main(){
	int a;
	int b;
	int c;
	int respuesta;
	
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	cout << "Ingrese el tercer numero: ";
	cin >> c;
	
	respuesta = Buscar(&a, &b, &c);
	
	cout << "El mayor es: " << respuesta;
	
	return 0;
}

int Buscar(int *a, int *b, int *c){
	int mayor = *a;
	
	if(mayor < *b){
		mayor = *b;
	} 
	if(mayor < *c){
		mayor = *c;
	}
	return mayor;
}
