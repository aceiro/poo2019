#include <iostream>
using namespace std;

/*Com base nesse exemplo (case) fa�a uma classe que represente um Monitor com os seguintes atributos:
Coordenadas m�ximas (resolu��o), Descri��o e N�mero de Pixels.
Fa�a com que o carregamento dos dados seja feita de duas formas.
Na primeira delas crie uma classe MonitorTeste.cpp para carregar e validar a solu��o proposta.
Em seguida, crie uma outra classe para fazer o carregamento dos monitores via teclado.
*/

class Ponto
{
   private:
      double x;  
      double y; 
   public:
      void setX(double);
      void setY(double);
      double getX() const;
      double getY() const;
};


void Ponto::setX(double coordX)
{
   x = coordX;
}

void Ponto::setY(double coordY)
{
   y = coordY;
}


double Ponto::getX() const
{
   return x;
}


double Ponto::getY() const
{
   return y;
}
