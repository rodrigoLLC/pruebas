#include <iostream>
using namespace std;

void Intercambio(int *a, int *b);

int main(){
	int a;
	int b;
	
	cout << "Ingresar el primer numero: ";
	cin >> a;
	cout << "Ingresar el segundo numero: ";
	cin >> b;
	
	Intercambio(&a, &b);

	return 0;	
}

void Intercambio(int *a, int *b){
	int cambio;
	
	cambio = *a;
	*a = *b;
	*b = cambio;
	
	cout << "----Intercambio----\n";
	cout << "Primero: " << *a << endl;
	cout << "Segundo: " << *b << endl;
}
