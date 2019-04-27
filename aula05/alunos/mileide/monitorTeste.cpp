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
 

void assertPontoEstaNaOrigem(Ponto p){
   // 2. MODIFICAR A ROTINA PARA INCLUIR O CÓDIGO DO TESTE

}
}

