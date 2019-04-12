#include <assert.h>
#include <iostream>
#include "Monitor.cpp"

using namespace std;


//*****************************************************
//                 MAIN-LOOP
//*****************************************************
int main(){
	int op;
	Monitor monitor;



do
    {
        cout << "\n\nEscolha o Monitor \n\n"  ;
        cout << "1 - 4K Ultra-Alta Definição\n" ;
        cout << "2 - Digital Cinema Iniatives 4K Resolução nativa \n"; 
        cout << "3 - DCI 4K (CinemaScope cortado) \n";
        cout << "4 - DCI 4K (Widescreen)\n";
        cout << "5 - Acamemy Ratio 4K (formato de Armanezamento)\n";
        cout << "6 - Fullscreen 4K (formato de armazenamento)\n";
        cout << "0 - Sair" << endl;

        cin >> op;

        switch (op)
        {
            case 1:
                monitor.setDescricao("4K Televisão de Ultra-alta definição");
                monitor.setResx (3840);
   				monitor.setResy(2160);
   				monitor.setNpixel(8294400);
   				monitor.PrintMonitor();
                break;
            
            case 2:
                monitor.setDescricao("Digital Cinema Iniatives 4K Resolução nativa");
                monitor.setResx (4096);
   				monitor.setResy(2160);
   				monitor.setNpixel(8847360);
   				monitor.PrintMonitor();
                break;
            
            case 3:
                monitor.setDescricao("DCI 4K (CinemaScope cortado)");
                monitor.setResx (4096);
   				monitor.setResy(1714);
   				monitor.setNpixel(7020544);
   				monitor.PrintMonitor();
                break;
            
            case 4:
                monitor.setDescricao("DCI 4K (Widescreen)");
                monitor.setResx (3996);
   				monitor.setResy(2160);
   				monitor.setNpixel(8631360);
   				monitor.PrintMonitor();
                break;
            
            case 5:
                monitor.setDescricao("Acamemy Ratio 4K (formato de Armanezamento)");
                monitor.setResx (3656);
   				monitor.setResy(2664);
   				monitor.setNpixel(9739584);
   				monitor.PrintMonitor();
                break;
			
            case 6:
                monitor.setDescricao("Fullscreen 4K (formato de armazenamento)");
                monitor.setResx (4096);
   				monitor.setResy(2160);
   				monitor.setNpixel(8847360);
   				monitor.PrintMonitor();
                break;
     

            default:
                break;
        }
    }
    while (op != 0);
}
