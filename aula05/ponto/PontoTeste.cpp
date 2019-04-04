#include <assert.h>
#include <iostream>
#include "Ponto.cpp"

using namespace std;


//*****************************************************
//                 MAIN-LOOP
//*****************************************************
void assertPontoEstaNaOrigem(Ponto p);

int main()
{

   //DECLARAÇÃO DOS OBJETOS 
   //PONTOS QUE SERÃO TESTADOS
   Ponto origem; 
   Ponto maximo;

   origem.setX(0.0);
   origem.setY(0.0);
   
   // 1. TESTE
   //
   cout << "TESTE -- Ponto - origem \n";
   cout << "TESTE -- Valida que a instancia origem tem a origem (0,0) \n";
   assert ( origem.getX()==0 );  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   assert ( origem.getY()==0 );
   cout << "TESTE -- PASSOU\n";
   
   // 3. ADICIONAR UM NOVO TESTE PARA VALIDAR O PONTO NA COORDENADA MÁXIMA 100 X 100

   return 0;
}

void assertPontoEstaNaOrigem(Ponto p){
   // 2. MODIFICAR A ROTINA PARA INCLUIR O CÓDIGO DO TESTE

}

// 4. CRIAR UMA ROTINA PARA VALIDAR O PONTO NO MÁXIMO