#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	// Ano Bissexto
	
	int ano;
	cout << "Informe um ano de preferencia";
	cin >> ano;
	
	if(ano %400 ==0){
		cout << "Ano e Bissexto";
	} else {
		cout << "Ano nao e Bissexto";
	}
	
	return 0;
}
