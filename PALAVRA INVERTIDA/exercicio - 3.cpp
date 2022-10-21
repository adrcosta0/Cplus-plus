#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	char palavra[10];
	int i, qnt;
	cout << "Digite uma palavra, com no maximo de 10 letras, letra por letra." << "\n";
	cout << "Informe a quantidade de caracteres da palavra: ";
	cin >> qnt;
	
	for(i; i < qnt; i++){
		cin >> palavra[i];
	}
	
	cout << endl;
	
	int j = qnt;
	
	cout << "Palavra invertida: " << "\n";
	
	for(j; j > -1; j-- ){
		cout << palavra[j] << "\n";
	}
	
	
	
	return 0;
}
