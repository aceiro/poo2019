#include <iostream>

using namespace std;

class Ponto{
    private:
    double x;
    double y;

    public:

    void setY(double);
    void setX(double);
    double getX();
    double getY();
};

void Ponto::setX(double coordX){
    x = coordX;
}

void Ponto::setY(double coordY){
    y = coordY;
}

double Ponto::getX(){
    return x;
}

double Ponto::getY(){
    return y;
}
