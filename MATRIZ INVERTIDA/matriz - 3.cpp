#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    int matriz[2][3];
    int i, j;
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
          cout << "[" << i << "]" << "[" << j << "]: ";
          cin >> matriz[i][j];
        }         
    }
    
    cout << "\n";
    
    cout << "Matriz invertida" << "\n";
    
      for(i=0;i<3;i++){
        for(j=0;j<2;j++){
          cout << matriz[j][i] << " | ";
        }         
        cout << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
