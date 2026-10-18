#include <iostream>
using namespace std;

void Espejo(int numero);

int main(){
	int numero;
	
	cout << "Ingresa el numero: ";
	cin >> numero;
	
	cout << "El numero invertido es: ";
	Espejo(numero);
	
	return 0;
}

void Espejo(int numero){
	if(numero < 10){
		cout << numero;
		return;
	} else {
		cout << numero%10;
		Espejo(numero/10);
	}
}
