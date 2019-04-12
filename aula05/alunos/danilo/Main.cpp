#include <iostream>
#include "Monitor.cpp"

using namespace std;

int main()
{
    Monitor m;
    Ponto p;
    double x, y, pix;

    cout << "\tControle de estoque de Monitores\n" << endl;
    int op;

    do
    {
        cout << "Selecione uma opção a ser mostrada\n" << endl;
        cout << "1 - TV 4K Ultra-Alta Definição" << endl;
        cout << "2 - TV 4K Digital Cinema Initiatives Resolução Nativa" << endl;
        cout << "3 - TV 4K DCI (CinemaScope)" << endl;
        cout << "4 - TV 4K DCI (Widescreen)" << endl;
        cout << "5 - TV 4K Academy Ratio" << endl;
        cout << "6 - TV 4K Fullscreens" << endl;
        cout << "0 - Sair do Menu" << endl;

        cin >> op;

        switch (op)
        {
            case 1:
                m.setFormato("TV 4K Ultra-Alta Definição");
                p.setX(3840);
                p.setY(2160);
                x = p.getX();
                y = p.getY();
                pix = m.Pixel(x, y);
                m.PrintMonitor();
                break;

            case 2:
                m.setFormato("TV 4K Digital Cinema Initiatives Resolução Nativa");
                p.setX(4096);
                x = p.getX();
                y = p.getY();
                pix = m.Pixel(x, y);
                p.setY(2160);
                m.PrintMonitor();
                break;

            case 3:
                m.setFormato("TV 4K DCI (CinemaScope))");
                p.setX(4096);
                p.setY(1714);
                x = p.getX();
                y = p.getY();
                pix = m.Pixel(x, y);
                m.PrintMonitor();
                break;

            case 4:
                m.setFormato("TV 4K DCI (Widescreen))");
                p.setX(3996);
                p.setY(2160);
                x = p.getX();
                y = p.getY();
                pix = m.Pixel(x, y);
                m.PrintMonitor();
                break;

            case 5:
                m.setFormato("TV 4K Academy Ratio");
                p.setX(3656);
                p.setY(2664);
                x = p.getX();
                y = p.getY();
                pix = m.Pixel(x, y);
                m.PrintMonitor();
                break;

            case 6:
                m.setFormato("TV 4K Fullscreen");
                p.setX(4096);
                p.setY(2160);
                x = p.getX();
                y = p.getY();
                pix = m.Pixel(x, y);
                m.PrintMonitor();
                break;

            default:
                break;
        }
    }
    while (op != 0);
    cout << "Saindo..." << endl;
}
