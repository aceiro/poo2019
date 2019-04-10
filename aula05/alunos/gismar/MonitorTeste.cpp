#include <iostream>
#include <assert.h>
#include "ClasseMonitor.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    Monitor monitor;

    monitor.setDescMonitor("Monitor-Padrao");
    monitor.setCoordHorizontal(4096.0);
    monitor.setCoordVertical(2664.0);
    monitor.setNumPixels(4096.0, 2664.0);

    system("clear");
    cout << endl;
    cout << "ROTINA DE TESTES" << endl;
    cout << endl;
    cout << "TESTES: Validar entradas de Descricao, Resolucao Maxima e Numero de Pixels" << endl;
    cout << "Valores Padroes:" << endl;
    cout << "\t--Descricao:\t\t" << monitor.getDescMonitor() << endl;
    cout << "\t--Resolucoes Maximas:\t" << monitor.getCoordHorizontal() << " X " << monitor.getCoordVertical() << endl;
    cout << "\t--Numero de Pixels:\t" << monitor.getNumPixels() << endl;
    cout << endl;

    assert(monitor.getDescMonitor() == "Monitor-Padrao");
    assert(monitor.getCoordHorizontal() == 4096);
    assert(monitor.getCoordVertical() == 2664);
    assert(monitor.getNumPixels() == 10911744);

    cout << endl;
    cout << "TESTE -- PASSOU" << endl;
    cout << endl;

    return 0;
}
