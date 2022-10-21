#include <cstdlib>
#include <iostream>

using namespace std;

      int ordenacao(int v[10]){
          
          int aux = 0, i;
          for(i=0; i<10;i++){
                  for(int j = 0;j<10;j++){
                          if(v[i] < v[j]){
                                  aux = v[i];
                                  v[i] = v[j];
                                  v[j] = aux;
                                  }
                          }
                  }
          } 
          
        int BuscaBinaria(int vetor[], int item)
        {
            int inicio = 0;
            int fim = 10 -1;
        
            while (inicio <= fim) { 
        
                int i = (inicio + fim) / 2; 
        
                if (vetor[i] == item) { 
                    return i;
                }
        
                if (vetor[i] < item) {  
                    inicio = i + 1;
                } else {  
                    fim = i;
                }
            }
        
            return -1;
        } 

int main(int argc, char *argv[]){
    
    int item;
    cout << "Escolha valor de busca: ";
    cin >> item;
    
    int vet[10] = {11,13,14,16,17,19,20,32,42,1};
    
    ordenacao(vet);
    BuscaBinaria(vet, item);
    
        for(int k=0;k<10;k++){
            cout << vet[k] << "\n";
            }
    
    if(BuscaBinaria(vet, item) == -1){
                    cout << "Parametros nao encontrados! \n";
         } else {
                cout << "Item encontrado na posicao: " << (BuscaBinaria(vet, item)+1) << endl;
                }
    

            
            

        system("PAUSE");
    return EXIT_SUCCESS;
}
