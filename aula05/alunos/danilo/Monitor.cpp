#include <iostream>
#include "Ponto.cpp"

using namespace std;

class Monitor
{
    Ponto p;

private:
    string formato;
    double pix;
    double coordX;
    double coordY;
public:
    void setFormato(string);
    string getFormato();
    //void setPixel();
    double Pixel(double, double);
    void setResolucaoX(Ponto);
    double getResolucaoX();
    void setResolucaoY(Ponto);
    double getResolucaoY();
    void PrintMonitor();
};

void Monitor::setFormato(string f)
{
    formato = f;
}

string Monitor::getFormato()
{
    return formato;
}

// void Monitor::setPixel ()
// {
//     pix = coordX * coordY;
// }

double Monitor::Pixel (double x, double y)
{
    pix = x * y;
    return pix;
}

void Monitor::setResolucaoX(Ponto x)
{
    coordX = x.getX();
}

void Monitor::setResolucaoY(Ponto y)
{
    coordY = y.getY();
}

double Monitor::getResolucaoX()
{
    return coordX;
}

double Monitor::getResolucaoY()
{
    return coordY;
}

void Monitor::PrintMonitor()
{
    cout << "Formato: " << formato << endl;
    cout << "Resolução: " << coordX << " X " << coordY << endl;
    cout << "Pixels: " <<  pix << endl;
}
