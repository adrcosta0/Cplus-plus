#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int A[3][5], vet[3];
    int i,j, soma = 0;

    for(i = 0; i < 3; i++){
            for(j = 0; j < 5; j++){
                    A[i][j] = rand() % 10;
                    cout << A[i][j] << " | ";
                    soma = soma + A[i][j];
                  }
                  cout << "\n";
                  vet[i] = soma;
                  soma = 0;
          }                     
            
       for(i = 0; i < 3; i++){
    
           cout << "Soma: " << vet[i] << "\n"; 
    }
            

    system("PAUSE");
    return EXIT_SUCCESS;
}
