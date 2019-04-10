#include <iostream>
#include "Monitor.cpp"

using namespace std;

int main(){
	
	int monitor;
	
	do {
	
		cout << "Digite o numero referente ao Monitor Desejado para saber sua quantidade de Pixel: " << endl;
		cout << "(1) - 4k Televisao de ultra-alta definicao  " << endl;
		cout << "(2) - Digital Cinema Iniatives 4k resolucao nativa " << endl;
		cout << "(3) - DCI 4k (CinemaScope cortado) " << endl;
		cout << "(4) - DCI 4k (Widescreen) " << endl;
		cout << "(5) - Academy Ratio 4k " << endl;
		cout << "(6) - Fullscreen 4k " << endl;
		cout << "(0) - SAIR " << endl;
		cout << "OPCAO: ";
		cin >> monitor;
		cout << endl;
		
		if(monitor == 1){
			Monitor *mon1= new Monitor(1); // no primeiro monitor eu imprimi os valores sem usar a funcao imprimir
			cout << "Descricao: " << mon1->getDescricao() << endl;
			cout << "Pixel: " << mon1->getPixel() << endl;
			cout << "------------------------- " << endl;
		} else if(monitor == 2){
			Monitor *mon2 = new Monitor(2);
			mon2->imprimir();
		} else if(monitor == 3){
			Monitor *mon3 = new Monitor(3);
			mon3->imprimir();
		} else if(monitor == 4){
			Monitor *mon4 = new Monitor(4);
			mon4->imprimir();	
		} else if(monitor == 5){
			Monitor *mon5 = new Monitor(5);
			mon5->imprimir();
		} else if(monitor == 6){
			Monitor *mon6 = new Monitor(6);
			mon6->imprimir();
		} else if (monitor == 0){
			break;
		};
	} while (monitor!=0);
	
	return 0;
	
}


