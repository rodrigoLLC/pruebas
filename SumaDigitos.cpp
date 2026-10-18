#include <iostream>
using namespace std;

int suma(int numero);

int main (){
	int numero;
	int resultado;
	
	cout << "Ingresar el numero: ";
	cin >> numero;
	
	resultado = suma(numero);
	
	cout << "La suma es: " << resultado;
	
	return 0;
}

int suma(int numero){
	if(numero < 10){
		return numero;
	} else {
		return numero%10 + suma(numero/10);
	}
}
