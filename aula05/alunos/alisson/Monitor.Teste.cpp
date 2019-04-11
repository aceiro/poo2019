#include <assert.h>
#include <iostream>
#include "Monitor.cpp"

using namespace std;


//*****************************************************
//                 MAIN-LOOP
//*****************************************************
void assertPontoMonitor(Monitor m);

int main()
{

   //DECLARA√á√ÉO DOS OBJETOS 
   //PONTOS QUE SER√ÉO TESTADOS
    
   Monitor monitor;

   monitor.setResx (3840);
   monitor.setResy(2160);
   monitor.setNpixel(8294400);
   monitor.setDescricao("4K Televis„o de Ultra-alta definiÁ„o");
   
   // 1. TESTE

   cout << "TESTE -- Coordenadas maximas do Monitor \n";
   cout << "TESTE -- ValidaÁ„o de coordenadas \n";
   assert ( monitor.getResx()==3840 );  /*MODIFICAR AQUI PARA INCLUIR A CHAMADA DA ROTINA*/
   assert ( monitor.getResy()==2160 );
   cout << "TESTE -- PASSOU\n\n";
   
   // 2. TESTE
   
   cout << "TESTE -- Numero de Pixel\n";
   assert (monitor.getNpixel()==8294400);
   cout <<"TESTE -- PASSOU \n\n";
   
   // 3. TESTE
   
   cout << "TESTE -- DescriÁ„o do monitor\n";
   assert (monitor.getDescricao()=="4K Televis„o de Ultra-alta definiÁ„o");
   cout << "TESTE -- PASSOU \n";
   
   

   return 0;
}


