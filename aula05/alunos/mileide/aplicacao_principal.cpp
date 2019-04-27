#include <iostream>
#include "monitor.cpp"
//#include "monitorTeste.cpp"

using namespace std;


	Monitor modelo[6];     
	modelo[0].setFormato() = modelo[0]->setDescricao("4K Televisão de ultra-alta definicao") ;
	modelo[0] = 3840;
	modelo[0].yPonto = 2160;
	modelo[0].pixels = 8294400;
   
	modelo[1].formato = "Digital Cinema Initiatives 4k resolucao nativa";
	modelo[1].xPonto = 4096;
	modelo[1].yPonto = 2160;
	modelo[1].pixels = 8847360;

	modelo[2].formato = "DCI 4K (CinemaScopo cortado)";
	modelo[2].xPonto = 4096;
	modelo[2].yPonto = 1714;
	modelo[2].pixels = 7020544;
	
	modelo[3].formato = "DCI 4K (Widescreen)";
	modelo[3].xPonto = 3996;
	modelo[3].yPonto = 2160;
	modelo[3].pixels = 8631360;
	
	modelo[4].formato = "Academy Ratio 4K (formato de armazenamento)";
	modelo[4].xPonto = 3656;
	modelo[4].yPonto = 2664;
	modelo[4].pixels = 9739584;
	
	modelo[5].formato = "Fullscreen 4K (formato de armazenamento)";
	modelo[5].xPonto = 4096;
	modelo[5].yPonto = 2160;
	modelo[5].pixels = 8847360;
	
void imprime (int i, Monitor modelo){
	//Imprimindo 
	//int i;
	
	cout << "Televisao:\n";
	cout << "Formato: "<< modelo[i]->setDescricao() <<endl;
	cout << "X: "<< modelo[i].xPonto <<endl;
	cout << "Y: "<< modelo[i].yPonto <<endl;
	cout << "Pixels: "<< modelo[i].pixels <<endl <<endl;
}	

int main()
{
   int op = 100;
   
do{
		system("cls");
		cout << "Digite qual opcao vc quer especificacao: ";
		cout << "\n1 - 4K Televisão de ultra-alta definicao.";
		cout << "\n2 - Digital Cinema Initiatives 4k resolucao nativa.";
		cout << "\n3 - DCI 4K (CinemaScopo cortado).";
		cout << "\n4 - DCI 4K (Widescreen).";
		cout << "\n5 - Academy Ratio 4K (formato de armazenamento).";
		cout << "\n6 - Fullscreen 4K (formato de armazenamento).";
		cout << "\n0 - Sair.";
		cout << "\nEscolha: ";
		cin >> op;
		
		switch(op){
			case 1 :
				int i = 0;
				void imprime (int i, Monitor Modelo); 
				//falta chamar aqui os testes de monitorTeste 
				break;
			case 2 :
				int i = 2;
				void imprime (int i, Monitor Modelo); 
				//falta chamar aqui os testes de monitorTeste 
				break;
			case 3 :
				int i = 3;
				void imprime (int i, Monitor Modelo); 
				//falta chamar aqui os testes de monitorTeste 
				break;
			case 4 :
				int i = 4;
				void imprime (int i, Monitor Modelo); 
				//falta chamar aqui os testes de monitorTeste 			
				break;
			case 5 :
				int i = 5;
				void imprime (int i, Monitor Modelo); 
				//falta chamar aqui os testes de monitorTeste 
				break;
			case 6 :
				int i = 6;
				void imprime (int i, Monitor Modelo); 
				//falta chamar aqui os testes de monitorTeste 
				break;
					}
	}while(op!=0);
   
   return 0;
}

