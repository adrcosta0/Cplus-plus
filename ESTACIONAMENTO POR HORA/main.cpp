#include <iostream>
#include <cstdlib>

using namespace std;

class Estacionamento{
	
	public:
		
		int diaE, diaS, horaEntrada, horaSaida;
		
		void solicitacaoDados(){
			
			cout << "Informe o dia de entrada no estacionamento: ";
			cin >> diaE;
			
			cout << "\n";
				
			cout << "Informe o dia de entrada no estacionamento: ";
			cin >> diaS;
			
			cout << "\n";
				
			cout << "Informe a hora da entrada no estacionamento: ";
			cin >> horaEntrada;
			
			cout << "\n";
			
			cout << "Informe a hora da saida do estacionamento: ";
			cin >> horaSaida;
			
			cout << "\n";
		}
		
		int calcValor(){
			
			if(diaS > diaE+1){
				return 0;
			} else if(diaS>diaE){
				return ((24-horaEntrada) + horaSaida)*5;
			} else {
				return (horaSaida - horaEntrada) * 5;
		}
	}
};

int main(int argc, char** argv) {
	
	Estacionamento est;
	
	cout << "----- Estacionamento 24hrs- R$5,00 por hora ----- \n";
	cout << "------- *Obs: Permanência maxima de 24hrs -------\n\n";
	
	est.solicitacaoDados();

	cout << "-------------------------------------------- \n\n";
	
	if(est.calcValor() == 0){
		cout << "Tempo de limite de estacionamento ultrapassado. \n Favor, comparecer no estacionamento para maiores informacoes...";
	} else {
		cout << "Valor a ser pago: R$" << est.calcValor() << ",00" << endl;
	}
	return 0;
}
