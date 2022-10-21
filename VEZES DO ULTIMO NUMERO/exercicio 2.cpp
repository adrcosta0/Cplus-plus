#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    int elemento[100],i, aux = 0, g, ant, cont = 0;
    
    for(i = 0; i < 100; i++){
          
          cout << "Digite numeros desejados: ";
          cin >> g;
          
          elemento[i] = g;
          ant = aux;
          aux = g;
          
          
              if(g == 0){
                 for(int y = 0; y <= i; y++){
                     g = elemento[y];
                     if(g == ant) {
                          cont++;
                     }  
                 }
                 cout << "Ultimo numero apareceu " << cont << "vezes" << endl;
                  system("PAUSE");
                  return EXIT_SUCCESS;                       
              }
          }
        
    }
      
