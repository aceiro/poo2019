#include <iostream>
#include <string.h>
#include <iomanip>
#include "Ponto.cpp"
#include "ClasseMonitor.cpp"

using namespace std;

#define QTDE 6
#define RESOLHORMIN 3656
#define RESOLHORMAX 4096
#define RESOLVERMIN 1714
#define RESOLVERMAX 2664

/* Imprimir cabeçalho da tabela de Monitores */
void  printHeader();

/* Funcao recursiva que checa valores (Horizontal: min = 3656, max = 4096) e (Vertical: min = 1714, max = 2664) */
double numberChecker(int optCoord, double number);

int main(int argc, char *argv[]) {
  Monitor monitor[QTDE];
  Ponto resolucao;
  string recDescMonitor;
  double recCoordHorizontal;
  double recCoordVertical;
  double recNumPixels;
  double recResolucaoXY;
  int i;

  for (i = 0; i < QTDE; i++) {
    system("clear");

    printHeader();

    cout << endl << "Qual o Formato do Monitor (modelo): ";
    getline(cin, recDescMonitor);

    monitor[i].setDescMonitor(recDescMonitor);

    cout << endl << "Quais sao as medidas da resolucao?" << endl;
    cout << "\tCoordenada X (Horizontal): ";
    cin >> recResolucaoXY;

    recResolucaoXY = numberChecker(1, recResolucaoXY);

    resolucao.setX(recResolucaoXY);
    monitor[i].setCoordHorizontal(resolucao.getX());
    recCoordHorizontal = monitor[i].getCoordHorizontal();

    cout << "\tCoordenada Y (Vertical): ";
    cin >> recResolucaoXY;

    recResolucaoXY = numberChecker(2, recResolucaoXY);

    resolucao.setY(recResolucaoXY);
    monitor[i].setCoordVertical(resolucao.getY());
    recCoordVertical = monitor[i].getCoordVertical();

    monitor[i].setNumPixels(recCoordHorizontal, recCoordVertical);
    
    /* Garante que o '\n' nao sera enviado para proxima string */
    cin.ignore(); 
  }


  system("clear");
  printHeader();

  cout << endl;
  cout << setw(80) << left << "Formato";
  cout << setw(27) << left << "Resolucao";
  cout << setw(20) << left << "Pixel" << endl;
  cout << "-----------------------------------------------------------------------------------------------------------------------------------------------" << endl;
  for (i = 0; i < QTDE; i++) {
    cout << setw(80) << left << monitor[i].getDescMonitor();
    cout << monitor[i].getCoordHorizontal();
    cout << " x ";
    cout << setw(20) << left << monitor[i].getCoordVertical();
    cout << setw(20) << left << setprecision(8) << monitor[i].getNumPixels() << endl;
  }
  cout << endl;

  return 0;
}

void  printHeader() {
  cout << endl << "Cadastro de Monitores (Aula05 Displina P00 2019) - 6 Registros" << endl;
}

double numberChecker(int optCoord, double number) {
  if (optCoord == 1) {
    if ((number < RESOLHORMIN) || (number > RESOLHORMAX)) {
      cout << endl << number << " nao e valido!" << endl << "Entre com valores entre " << RESOLHORMIN << " a " << RESOLHORMAX << endl;
      cout << "Entre com um novo valor (dentro das especificoes): ";
      cin >> number;
      numberChecker(optCoord, number);
    }
    else
      return number;    
  }

  if (optCoord == 2) {
    if ((number < RESOLVERMIN) || (number > RESOLVERMAX)) {
      cout << endl << number << " nao e valido!" << endl << "Entre com valores entre " << RESOLVERMIN << " a " << RESOLVERMAX << endl;
      cout << "Entre com um novo valor (dentro das especificoes): ";
      cin >> number;
      numberChecker(optCoord, number);
    }
    else
      return number;    
  }
}