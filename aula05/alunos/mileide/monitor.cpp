#include <iostream>
#include <string>
#include "Ponto.cpp"
using namespace std;

//**************************************************
/*ATIVIDADE - DESAFIO MONITORES 4K

Considere um monitor de ultra definição (4K). Tais monitores são comuns atualmente
no mercado por possuirem a capacidade de representar pontos (mais conhecidos como Pixels)
acima de 3840 pixels na horizontal e 2160 na vertical. Portanto, é importante compreender
as principais características desses monitores. Nesse caso, suponha que você irá desenvolver
um sistema de Gestão e Controle para uma empresa de venda via Internet de Monitores. 

A empresa deseja portanto representar os monitores de alta definição da melhor forma 
possível para auxiliar na busca e recuperação de informação para potenciais clientes. 
Com base nesse exemplo (case) faça uma classe que represente um Monitor com os seguintes 
atributos - Coordenadas máximas (resolução), Descrição e Número de Pixels. Faça com que 
o carregamento dos dados seja feita de duas formas. Na primeira delas crie 
uma classe MonitorTeste.cpp para carregar e validar a solução proposta. Em seguida, 
crie uma outra classe para fazer o carregamento dos monitores via teclado.*/

class Monitor
{
   private:
	double xPonto;
    double yPonto;
    int pixels;
   	string formato;		
    
   public:
  
   	void setFormato (string); //lê
	string getFormato () const;	//retorna
	void setxPonto (double);
    double getxPonto () const;
    void setyPonto (double);
    double getyPonto () const;
    void setPixels (int);
    int getPixels () const;
};

void Monitor::setFormato(string vFormato)
{
   formato = vFormato ;
}

string Monitor::getFormato() const {
    return formato;
}

void Monitor::setxPonto(double x){
	xPonto = x;
}

double Monitor::getxPonto() const {
    return xPonto;
}

void Monitor::setyPonto(double y){
	yPonto = y;
}

double Monitor::getyPonto() const {
    return yPonto;
}

void Monitor::setPixels(int vPixels){
	pixels = vPixels;
}


int Monitor::getPixels() const {
    return pixels;
}


