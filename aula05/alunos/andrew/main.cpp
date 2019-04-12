#include <iostream>
#include "Monitor.cpp"
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Habilita a acentua��o para o portugu�s

    Monitor newMonitor;
    int opt;
do
{
    cout << "Escolha o monitor desejado:" << endl;
    cout << "1 - TV 4K Televis�o de ultra-alta defini��o." << endl;
    cout << "2 - Digital Cinema Initiatives 4k resolu��o nativa" << endl;
    cout << "3 - DCI 4K (CinemaScope cortado)" << endl;
    cout << "4 - DCI 4k (Widescreen)" << endl;
    cout << "5 - Academy Ratio 4K (formato de armazenamento)" << endl;
    cout << "6 - Fullscreen 4k (formato de armazenamento)" << endl;
    cout << "0 - Sair" << endl;

    cin >> opt;

    switch (opt)
    {
    case 1:
        system("cls");
        cout << "TV 4K Televis�o de ultra-alta defini��o." << endl;
        newMonitor.setModelo("TV 4K Televis�o de ultra-alta defini��o.");
        newMonitor.setCoordXY(3840,2160);
        newMonitor.setPixel();
        newMonitor.printAll();
        break;
    
    case 2:
        system("cls");
        cout << "2 - Digital Cinema Initiatives 4k resolu��o nativa" << endl;
        newMonitor.setModelo("Digital Cinema Initiatives 4k resolu��o nativa");
        newMonitor.setCoordXY(4096,2160);
        newMonitor.setPixel();
        newMonitor.printAll();
        break;
    
    case 3:
        system("cls");
        cout << "3 - DCI 4K (CinemaScope cortado)" << endl;
        newMonitor.setModelo("DCI 4K (CinemaScope cortado)");
        newMonitor.setCoordXY(4096,1714);
        newMonitor.setPixel();
        newMonitor.printAll();
        break;
    
    case 4:
        system("cls");
        cout << "4 - DCI 4k (Widescreen)" << endl;
        newMonitor.setModelo("DCI 4k (Widescreen)");
        newMonitor.setCoordXY(3996,2160);
        newMonitor.setPixel();
        newMonitor.printAll();
        break;
    
    case 5:
        system("cls");
        cout << "5 - Academy Ratio 4K (formato de armazenamento)" << endl;
        newMonitor.setModelo("Academy Ratio 4K (formato de armazenamento");
        newMonitor.setCoordXY(3656,2664);
        newMonitor.setPixel();
        newMonitor.printAll();
        break;
    
    case 6:
        system("cls");
        cout << "6 - Fullscreen 4k (formato de armazenamento)" << endl;
        newMonitor.setModelo("Academy Ratio 4K (formato de armazenamento");
        newMonitor.setCoordXY(4096,2160);
        newMonitor.setPixel();
        newMonitor.printAll();
        break;
    
    case 0:
    	system("cls");
        cout << "Goodbye!! :D" << endl;
        break;
    
    default:
    	system("cls");
        cout << "Op��o invalida" << endl;
        break;
    }
} while (opt != 0);

}
