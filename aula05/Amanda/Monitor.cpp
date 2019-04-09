#include <iostream>
#include "Ponto.cpp"
using namespace std;

/*Com base nesse exemplo (case) faça uma classe que represente um Monitor com os seguintes atributos:
Coordenadas máximas (resolução), Descrição e Número de Pixels.
Faça com que o carregamento dos dados seja feita de duas formas.
Na primeira delas crie uma classe MonitorTeste.cpp para carregar e validar a solução proposta.
Em seguida, crie uma outra classe para fazer o carregamento dos monitores via teclado.
*/

class Monitor
{
	private:
		string descricao;
		int pixel; 
	public:
		void setDescricao(char);
		void setPixel(int);
		string getDescricao() const;
		int getPixel() const;
		Monitor(int tp);
		void imprimir();
};

Monitor::Monitor(int tp){ // 1 - 4k Tv Ultra Def. 2- Digital Cinema Initiatives 4k 3 - CinemaScope 4- WideScreen 5 - AcademyRadio 6- Fullscreen
	if(tp==1){
		descricao = "4k Tv Ultra Def";
		pixel = 8294400;
	} else if(tp==2){
		descricao = "Digital Cinema Initiatives";
		pixel = 8847360;
	} else if (tp==3){
		descricao = "CinemaScope";
		pixel = 7020544;
	} else if (tp==4){
		descricao = "WideScreen";
		pixel = 8631360;
	} else if (tp==5){
		descricao = "AcademyRadio";
		pixel = 9739584;
	} else if (tp==6){
		descricao = "Fullscreen";
		pixel = 8847360;
	}
}

void Monitor::imprimir(){ // criei a funcao imprimir dentro da classe monitor na parte publica
	cout << "Descricao: " << descricao << endl;
	cout << "Pixel:     " << pixel << endl;
	cout << "--------------------------- \n" << endl;
}

void Monitor::setDescricao(char descricaoMonitor)
{
	descricao = descricaoMonitor;
}

void Monitor::setPixel(int pixelMonitor)
{
	pixel = pixelMonitor;
}

string Monitor::getDescricao() const
{
	return descricao;
}

int Monitor::getPixel() const
{
	return pixel;
}
