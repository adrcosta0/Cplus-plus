#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int verificacaoClasse (int r, int m){ // Método para verificação da Classe da pagina

	if(r == 0 && m ==0){ // Classe 0 (R: 0 | M: 0)
		return 0;
	}
	if(r == 0 && m ==1){ // Classe 1 (R: 0 | M: 1)
		return 1;
	}
	if(r == 1 && m ==0){ // Classe 2 (R: 1 | M: 0)
		return 2;
	}
	if(r == 1 && m ==1){ // Classe 3 (R: 1 | M: 1)
		return 3;
	}
	
};

int main(int argc, char** argv) {
	
	cout << "\t\t *** ALGORITMO NRU *** \n\n";
	
	int tabPag[4], pag1[3], pag2[3], pag3[3], pag4[3], R, M, aux; // Declaração das variaveis 
	
	cout << "Pagina 1: 1 - REFERENCIAR || 0 - NAO REFERENCIAR: "; 
	cin >> R; // Referenciado
	
	cout << "Pagina 1: 1 - MODIFICAR || 0 - NAO MODIFICAR: ";
	cin >> M; // Modificado
	
	cout << "\n";
	
	if(R+M > 2) { // Operador condicional para identificar opção incorreta 
		cout << "Opcao incorreta! Operacao encerrada...";
		return 0;
		exit(0); // Caso opção for incorreta, operação será encerrada
	};
	
	cout << "\n";
	
	// vetor no espaço 0 receberá R(referenciado) e espaço 1 receberá M(modificado)
	pag1[0] = R; 
	pag1[1] = M;
	
	pag1[2] = verificacaoClasse(R, M); // Atribuindo a Classe de acordo com sua determinada Pagina
	
	cout << "\n";
	cout << "\n";
	
	cout << "Pagina 2: 1 - REFERENCIAR || 0 - NAO REFERENCIAR: ";
	cin >> R;
	
	cout << "Pagina 2: 1 - MODIFICAR|| 0 - NAO MODIFICAR: ";
	cin >> M;
	
	cout << "\n";
	
	if(R+M > 2) { // Operador condicional para identificar se opção for incorreta 
		cout << "Opcao incorreta! Operacao encerrada...";
		return 0;
		exit(0); // Caso opção for incorreta, operação será encerrada
	};
	
	cout << "\n";	
	
	// vetor no espaço 0 receberá R(referenciado) e espaço 1 receberá M(modificado)
	pag2[0] = R;
	pag2[1] = M;
	
	pag2[2] = verificacaoClasse(R, M); // Atribuindo a Classe de acordo com sua determinada Pagina
	
	cout << "\n";
	cout << "\n";
	
	cout << "Pagina 3: 1 - REFERENCIAR || 0 - NAO REFERENCIAR: ";
	cin >> R;
	
	cout << "Pagina 3: 1 - MODIFICAR || 0 - NAO MODIFICAR: ";
	cin >> M;
	
	cout << "\n";
	
	if(R+M > 2) { // Operador condicional para identificar se opção for incorreta 
		cout << "Opcao incorreta! Operacao encerrada...";
		return 0;
		exit(0); // Caso opção for incorreta, operação será encerrada
	};
	
	cout << "\n";
	
	// vetor no espaço 0 receberá R(referenciado) e espaço 1 receberá M(modificado)
	pag3[0] = R;
	pag3[1] = M;
	
	pag3[2] = verificacaoClasse(R, M); // Atribuindo a Classe de acordo com sua determinada Pagina
	
	cout << "\n";
	cout << "\n";
	
	cout << "Pagina 4: 1 - REFERENCIAR || 0 - NAO REFERENCIAR: ";
	cin >> R;
	
	cout << "Pagina 4: 1 - MODIFICAR || 0 - NAO MODIFICAR: ";
	cin >> M;
	
	if(R+M > 2) { // Operador condicional para identificar se opção for incorreta 
		cout << "Opcao incorreta! Operacao encerrada...";
		return 0;
		exit(0); // Caso opção for incorreta, operação será encerrada
	};
	
	cout << "\n";
	
	// vetor no espaço 0 receberá R(referenciado) e espaço 1 receberá M(modificado)
	pag4[0] = R;
	pag4[1] = M;
	
	pag4[2] = verificacaoClasse(R, M); // Atribuindo a Classe de acordo com sua determinada Pagina
	
	// tabPag[] representa a Tabela de Pagina
	tabPag[0] = pag1[2]; // repassando as Classes de cada pagina
	tabPag[1] = pag2[2];
	tabPag[2] = pag3[2];
	tabPag[3] = pag4[2];
	
	cout << "\n";
	cout << "\n";
	
	cout << "Pagina 1 - Classe: " << pag1[2] << "\n";
	cout << "Pagina 2 - Classe: " << pag2[2] << "\n";
	cout << "Pagina 3 - Classe: " << pag3[2] << "\n";
	cout << "Pagina 4 - Classe: " << pag4[2] << "\n";
	
	cout << "\n";
	
	cout << "\t * ERROR: PAGE FAULT * \n"; 
	
	// Laço de repetição que irá identificar qual a menor classe
	for(int i=0; i <=4; i++){			
			for(int j=1; j <=4; j++){
					if(tabPag[j]>tabPag[i]){
						
						tabPag[j] = aux;
						
					}else {
						tabPag[i] = aux;
					}
			}
	};
	
	cout << "\n";
	
	// Após o laço de repetição, operador condicional irá identificar qual pagina tem o mesmo valor identificado pelo 'for', para remove-lo
	if(pag1[2] == aux){
		cout << "Pagina 1: Removida \n";
	} else if(pag2[2] == aux){
		cout << "Pagina 2: Removida \n";
	} else if(pag3[2] == aux) {
		cout << "Pagina 3: Removida \n";
	} else if(pag4[2] == aux){
		cout << "Pagina 4: Removida \n";
	};	
 	
	 return 0;
}
