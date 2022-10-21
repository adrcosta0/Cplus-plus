#include <iostream>

using namespace std;

	int squad1 (int n1){
		
		return n1*n1;
	}
	
	int squad2 (int n2){
		
		return n2*n2;
	}
	
	int somaSquad (int s1, int s2){
		
		return s1+s2;
	}

int main(int argc, char** argv) {
	
	cout << "***SOMA DOS QUADRADOS***" << "\n";
	cout << "\n";

	int num1, num2;
	cout << "Informe o valor do 1 quadrado: ";
	cin >> num1;
	
	cout << "\n";
	
	cout << "Informe o valor do 2 quadrado: ";
	cin >> num2;
	
	cout << "\n";
	
	cout << "Area do 1 quadrado: " << squad1(num1) <<"\n"; 
	cout << "Area do 2 quadrado: " << squad2(num2) <<"\n";
	int result1 = squad1(num1);
	int result2 = squad2(num2);
	
	
	cout << "\n";
	
	cout << "Soma dos Quadrados: " << somaSquad(result1, result2);
	
	return 0;
}
