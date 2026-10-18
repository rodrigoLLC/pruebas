#include <iostream>
using namespace std;

void Editar(int numero, int base);

int main(){
	int numero;
	int base;
	
	cout << "Ingrese el numero decimanal: ";
	cin >> numero;
	
	do{
		cout << "Ingrese la base que quiere transformar el numero (entre 2 y 9): ";
		cin >> base;
	}while(base > 9 || base < 2);
	
	cout << "El numero es: " << numero << endl;
	cout << "El resultado es: ";
	Editar(numero, base);	
	return 0;	
}

void Editar(int numero, int base){	
	if(numero < base){
		cout << numero;
		return;
	} else {
		Editar(numero/base, base);
		cout << numero%base;
	}
}

