#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	int v[10], w[10], i, aux, j, f;
	
	cout << "***CALCULO DE FATORIAL***" << endl;
	cout << "Digite 10 numeros de 1-30: " << "\n";
	
	for(i = 0; i<10;i++){
		cout << i+1 << " Fatorial: ";
		cin >> v[i];
		
		w[i] = 1;
		for(aux = 1; aux <= v[i]; aux++){
			w[i]*=aux;			
		}
	}
	
		for(i = 0; i<10;i++){
		cout << "Fatorial de " << v[i] << ": " << w[i] << "\n";
	}
	
	
	return 0;
}
