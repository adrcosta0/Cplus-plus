#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    int num[10], i, aux;
    
    for(i = 0; i < 10 ; i++) {
          cout << "Digite os numeros desejaveis: ";      
          cin >> num[i];
          
          if(num[i] < 0) {
                    cout << "Programa encerrado" << endl; 
                    break;         
          } 
    }
    
        for(aux = 0; aux < i; aux++) {
              cout << "Valores invertidos " << num[aux]*-1 << endl;      
        }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
