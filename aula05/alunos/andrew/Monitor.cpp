#include <iostream>

using namespace std;

class Monitor
{
private:
    double pixel;
    double coordX;
    double coordY;
    string modelo;
public:
	void setCoordXY(double, double);
    void setModelo(string);
    string getModelo();
    void setPixel();
    void printAll();
};

void Monitor::setCoordXY(double x, double y)
{
	coordX = x;
	coordY = y;
}

void Monitor::setModelo(string m)
{
    modelo = m;
}

string Monitor::getModelo()
{
    return modelo;
}

void Monitor::setPixel()
{
    pixel = (coordX * coordY);
}

void Monitor::printAll()
{
    cout << "Modelo: " << modelo << endl;
    cout << "Resolução " << coordX << " X " << coordY << endl;
    cout << "Pixels: " << pixel << endl;
}
