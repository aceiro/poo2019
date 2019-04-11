#include <assert.h>
#include <iostream>
#include "monitor.cpp"
#include "Ponto.cpp"

using namespace std;

//*****************************************************

void assertPontoEstaNaOrigem(Ponto p);

int main()
{
   Ponto origem; 
   Ponto maximo;
   
    origem.setX(0.0);
    origem.setY(0.0);   
    maximo.setX(4096);
    maximo.setY(2160);
   
   //DECLARAÃ‡ÃƒO DOS OBJETOS 

	// Declarando um vetor de modelos do tipo Monitor
	Monitor modelo[6];     
	modelo[0].formato = "4K Televisão de ultra-alta definicao";
	modelo[0].xPonto = 3840;
	modelo[0].yPonto = 2160
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
   

   // 1. TESTE COORDENADAS ORIGEM E MAXIMO X E Y
   cout << "TESTE -- Ponto - origem \n";
   cout << "TESTE -- Valida que a instancia origem tem a origem (0,0) \n";
   assert ( origem.getX()==0 );  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   assert ( origem.getY()==0 );
   cout << "TESTE -- PASSOU\n\n";
   
   cout << "TESTE -- Ponto - maximo \n";
   cout << "TESTE -- Valida que a instancia maxima tem a maxima (3840,2160) \n";
   assert ( maximo.getX()==4096);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   assert ( maximo.getY()==2160);
   cout << "TESTE -- PASSOU\n\n";
   
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
			
				break;
			case 2 :
			
				break;
			case 3 :
				
				break;
			case 4 :
							
				break;
			case 5 :
				
				break;
			case 6 :
				
				break;
					}
	}while(op!=0);
   
   return 0;
}

void assertPontoEstaNaOrigem(Ponto p){
   // 2. MODIFICAR A ROTINA PARA INCLUIR O CÃ“DIGO DO TESTE

}

