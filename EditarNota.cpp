#include <iostream>
using namespace std;

int Editar(int &nota);

int main(){
	int nota;
	int a;
	int respuesta;
	
	do{
	cout << "Ingresar la nota (0 a 20): ";
	cin >> nota;
	}while(nota < 0 || nota > 20);
	
	a = nota;
	respuesta = Editar(nota);
	
	cout << "La nota es: " << a << endl;
	cout << "La nota editada es: " << nota;
	
	return 0;
}

int Editar(int &nota){
	if(nota == 20){
		return nota;
	}
	if(nota == 19){
		nota+= 1;
		return nota;
	}
	if(nota < 19){
		nota+= 2;
		return nota;
	}
}
