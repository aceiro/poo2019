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
    void setPixel();
    double getPixel();
    void setResolucaoX(Ponto);
    double getResolucao();
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

void Monitor::setPixel ()
{
    pix = coordX * coordY;
}

double Monitor::getPixel ()
{
    return pix;
}

void Monitor::setResolucao(Ponto x)
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
