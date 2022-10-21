#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    int num [4][4];
    int resultado = 0;
       
       for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                    
                    num[i][j] = rand() % 10;
                                        
                    if (i == j){
                       resultado = resultado + num[i][j];
                       }
            }     
    }
    cout << "\n";
    
     for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                    cout << num[i][j]<<"\t";
            }     
    cout << "\n";
    }
    cout << "\n";
     
     cout << "Soma da diagonal principal: " << resultado << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
