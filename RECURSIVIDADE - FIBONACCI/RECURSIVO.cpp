#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int fibonacci(int n);

int main(int argc, char *argv[]){
	
	cout << "*** Recursividade - Fibonacci ***"
	
    int x;
    cout << "Informe um numero desejado: ";
    cin>>x;
    
    for(int i=1; i<=x; i++)
    cout<<fibonacci(i)<<"\n"; 
    
    
    
    system ("PAUSE");
    return 0;
}

int fibonacci(int n) {
    
  if ((n == 1)||(n==2)) {
    return(1);
  }
  
   return fibonacci(n-1) + fibonacci(n-2);
  
}
    
