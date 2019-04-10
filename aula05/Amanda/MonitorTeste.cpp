#include <assert.h>
#include <iostream>
#include "Monitor.cpp"

using namespace std;


//*****************************************************
//                 MAIN-LOOP
//*****************************************************
void assertPontoEstaNaOrigem(Monitor p);

int main()
{

   //DECLARAÇÃO DOS OBJETOS 
   //PONTOS QUE SERÃO TESTADOS
   Ponto origem; 
   Ponto maximo;
   
   //DECLARAÇÃO DOS OBJETOS 
   //MONITORES QUE SERÃO TESTADOS
   Monitor pixel4k;
   Monitor pixelDigital;
   Monitor pixelCinemaScope;
   Monitor pixelWidescreen;
   Monitor pixelAcademyRatio;
   Monitor pixelFullscreen;
   
   origem.setX(0.0);
   origem.setY(0.0);   
   maximo.setX(3840);
   maximo.setY(2160);
   
   pixel4k.setPixel(8294400);
   pixelDigital.setPixel(8847360);
   pixelCinemaScope.setPixel(7020544);
   pixelWidescreen.setPixel(8631360);
   pixelAcademyRatio.setPixel(9739584);
   pixelFullscreen.setPixel(8847360);
   
   
   // 1. TESTE COORDENADAS ORIGEM E MAXIMO X E Y
   cout << "TESTE -- Ponto - origem \n";
   cout << "TESTE -- Valida que a instancia origem tem a origem (0,0) \n";
   assert ( origem.getX()==0 );  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   assert ( origem.getY()==0 );
   cout << "TESTE -- PASSOU\n\n";
   
   cout << "TESTE -- Ponto - maximo \n";
   cout << "TESTE -- Valida que a instancia maxima tem a maxima (3840,2160) \n";
   assert ( maximo.getX()==3840);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   assert ( maximo.getY()==2160);
   cout << "TESTE -- PASSOU\n\n";
   
   // 2. TESTE PIXEL
   
   cout << "TESTE -- PIXEL \n";
   cout << "TESTE -- Valida que a instancia pixel e 4k Televisao de ultra-alta definicao (8.294.400) \n";
   assert ( pixel4k.getPixel()==8294400);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   cout << "TESTE -- PASSOU -- 4k Televisao de ultra-alta definicao\n\n";
   
   cout << "TESTE -- Valida que a instancia pixel e Digital Cinema Iniatives 4k resolucao nativa (8.847.360) \n";
   assert ( pixelDigital.getPixel()==8847360);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   cout << "TESTE -- PASSOU -- Digital Cinema Iniatives 4k resolucao nativa\n\n";
   
   cout << "TESTE -- Valida que a instancia pixel e DCI 4k (CinemaScope cortado) (7.020.544) \n";
   assert ( pixelCinemaScope.getPixel()==7020544);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   cout << "TESTE -- PASSOU -- DCI 4k (CinemaScope cortado)\n\n";
   
   cout << "TESTE -- Valida que a instancia pixel e DCI 4k (Widescreen) (8.631.360) \n";
   assert ( pixelWidescreen.getPixel()==8631360);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   cout << "TESTE -- PASSOU -- DCI 4k (Widescreen)\n\n";
   
   cout << "TESTE -- Valida que a instancia pixel e Academy Ratio 4k (formato de armazenamento) (9.739.584) \n";
   assert ( pixelAcademyRatio.getPixel()==9739584);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   cout << "TESTE -- PASSOU -- Academy Ratio 4k\n\n";
   
   cout << "TESTE -- PIXEL \n";
   cout << "TESTE -- Valida que a instancia pixel e Fullscreen 4k (formato de armazenamento) (8.847.360) \n";
   assert ( pixelFullscreen.getPixel()==8847360);  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   cout << "TESTE -- PASSOU -- Fullscreen 4k\n";
   

   return 0;
}

void assertPontoEstaNaOrigem(Monitor p){
   // 2. MODIFICAR A ROTINA PARA INCLUIR O CÓDIGO DO TESTE

}

void assertPixel(){
	
}

// 4. CRIAR UMA ROTINA PARA VALIDAR O PONTO NO MÁXIMO
