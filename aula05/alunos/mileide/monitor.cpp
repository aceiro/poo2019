#include <iostream>
#include <string>
#include "Ponto.cpp"
using namespace std;

//**************************************************
/*ATIVIDADE - DESAFIO MONITORES 4K

Considere um monitor de ultra defini��o (4K). Tais monitores s�o comuns atualmente
no mercado por possuirem a capacidade de representar pontos (mais conhecidos como Pixels)
acima de 3840 pixels na horizontal e 2160 na vertical. Portanto, � importante compreender
as principais caracter�sticas desses monitores. Nesse caso, suponha que voc� ir� desenvolver
um sistema de Gest�o e Controle para uma empresa de venda via Internet de Monitores. 

A empresa deseja portanto representar os monitores de alta defini��o da melhor forma 
poss�vel para auxiliar na busca e recupera��o de informa��o para potenciais clientes. 
Com base nesse exemplo (case) fa�a uma classe que represente um Monitor com os seguintes 
atributos - Coordenadas m�ximas (resolu��o), Descri��o e N�mero de Pixels. Fa�a com que 
o carregamento dos dados seja feita de duas formas. Na primeira delas crie 
uma classe MonitorTeste.cpp para carregar e validar a solu��o proposta. Em seguida, 
crie uma outra classe para fazer o carregamento dos monitores via teclado.*/

class Monitor
{
   private:
	double xPonto;
    double yPonto;
    int pixels;
   	string formato;		
    
   public:
  
   	void setFormato (string); //l�
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


