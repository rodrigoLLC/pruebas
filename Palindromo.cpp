#include <iostream>
using namespace std;

int Invertir(int numero, int invertido);

int main (){
	int numero;
	int respuesta;
	
	cout << "Ingresar el numero: ";
	cin >> numero;
	
	respuesta = Invertir(numero, 0);
	if(numero == respuesta){
		cout << "Es palindromo" << endl;
	} else {
		cout << "No es palindromo" << endl;
	}
	
	return 0;
}

int Invertir(int numero, int invertido){
    if(numero == 0){
        return invertido;
    } else {
        return Invertir(numero / 10, invertido * 10 + numero % 10);
    }
}
