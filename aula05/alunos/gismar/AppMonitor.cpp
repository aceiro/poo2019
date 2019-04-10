#include <iostream>
#include <string.h>
#include "Ponto.cpp"
#include "ClasseMonitor.cpp"

using namespace std;

#define QTDE 6

int main(int argc, char *argv[]) {
    Monitor monitor[QTDE];
    Ponto resolucao;
    string recDescMonitor;
    double recCoordHorizontal;
    double recCoordVertical;
    double recNumPixels;
    double recResolucaoXY;
    int i;

    for (i = 0; i < QTDE; ++i) {
        system("clear");

        cout << endl << "Cadastro de Monitores (Aula05 Displina P00 2019) - 6 Registros" << endl;

        cout << endl << "Qual o Formato do Monitor (modelo): ";
        cin.ignore();
        getline(cin, recDescMonitor);
        monitor[i].setDescMonitor(recDescMonitor);

        cout << endl << "Quais sao as medidas da resolucao?" << endl;
        cout << "\tCoordenada X (Horizontal): ";
        cin >> recResolucaoXY;
        resolucao.setX(recResolucaoXY);
        monitor[i].setCoordHorizontal(resolucao.getX());
        recCoordHorizontal = monitor[i].getCoordHorizontal();

        cout << "\tCoordenada Y (Vertical): ";
        cin >> recResolucaoXY;
        resolucao.setY(recResolucaoXY);
        monitor[i].setCoordVertical(resolucao.getY());
        recCoordVertical = monitor[i].getCoordVertical();

        monitor[i].setNumPixels(recCoordHorizontal, recCoordVertical);
    }

    cout << endl << "Cadastro de Monitores (Aula05 Displina P00 2019) - 6 Registros" << endl;
    cout << endl << "\tFormato\t\t\t\t\t\t\tResolucao\t\t\t\t\tPixel" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    for (i = 0; i < QTDE; ++i) {
        cout << "\t" << monitor[i].getDescMonitor() << "\t\t\t\t\t\t" << monitor[i].getCoordHorizontal() << " X " << monitor[i].getCoordVertical() << "\t\t" << monitor[i].getNumPixels() << endl;
    }

    return 0;
}
