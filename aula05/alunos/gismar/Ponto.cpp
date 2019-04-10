#include <iostream>
using namespace std;

//**************************************************
// Cria uma classe com a definição do que deve     *
// ser um ponto                                    *
//**************************************************
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

//**************************************************
// Cria os métodos de acesso aos atributos X e Y   *
//**************************************************

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