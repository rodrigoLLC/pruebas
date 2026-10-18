#include <iostream>
using namespace std;

int main(){
	int arreglo[100];
	int cantidad;
	int aux;
	
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> cantidad;
	
	cout << "-----Datos-----\n";
	for(int i = 0; i < cantidad; i++){
		cout << "N-" << i + 1 << ": ";
		cin >> arreglo[i];
	}
	cout << endl;
	
	for(int i = 1; i < cantidad; i++){
		for(int j = 0; j < cantidad - i; j++){
			if(arreglo[j] > arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}	
		}	
	}
	
	cout << endl;
	cout << "-----Ordenado-----\n";
	for(int i = 0; i < cantidad; i++){
		cout << arreglo[i] << " ";
	}
	
	return 0;
}
