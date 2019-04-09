#include <iostream>
#include "Monitor.cpp"

using namespace std;

int main(){
	
	int monitor;
	
	cout << "Digite o numero do Monitor Desejado para saber suas configurações: ";
	cin >> monitor;
	
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
	};
	
	
	return 0;

	
}


