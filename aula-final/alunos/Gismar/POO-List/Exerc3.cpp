#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

#define NLIN 5 
#define NCOL 3

class ContainerMatriz {
  private:
    int matriz[NLIN][NCOL] = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}, {1, 0 , 1}, {0, 0, 1}};

  public:
    // Contrustores: usamos os construtores/destrutores para inicializações da Classe (quando necessárias)
    ContainerMatriz();
    ~ContainerMatriz();
};

ContainerMatriz::ContainerMatriz() {
  int i, j, total = 0;
  for (i = 0; i < NLIN; i++) {
    for (j = 0; j < NCOL; j++)
      total += matriz[i][j];
  }

  cout << endl << endl << "A somatoria das celulas da Matriz e = " << total << endl << endl;
}

ContainerMatriz::~ContainerMatriz() {

}

int main() {
  ContainerMatriz *matriz = new ContainerMatriz();

  delete matriz;
  return 0;
}