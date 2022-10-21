#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	cout << "***PARES, IMPARES, PERCENTUAL E MEDIA***" << endl;
	
	int v[12],i,soma, media;
	double porcentagem, c;
	c = 0;
	cout << "Digite 12 numeros desejados: "<< "\n";
	
	for(i=0; i<12; i++){
		cout << "Numero: ";
		cin >> v[i];	
	}
	
	cout << "\n";
	
	cout << "Identificacao de Pares e Impares: " << "\n";
	
	for(i=0; i<12; i++){
	
			if(v[i] % 2 == 0){
			cout << v[i] << " - Par" << "\n";
			c++;
			
		} else {
			cout << v[i] << " - Impar" << "\n";
		}
	
	}
	
	for(i=0; i<12; i++){
		soma = soma + v[i];
	}
	
	porcentagem = (12-c)/12*100;
	media = soma/12;
	
	cout << "\n";
	
	cout << "Quantidade de Pares: " << c << "\n";
	cout << "Porcentagem de Pares: " << porcentagem << "%" << "\n";;
	cout << "Media: " << media;
	
	return 0;
}
