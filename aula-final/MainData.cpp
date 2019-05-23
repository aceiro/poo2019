
#include<iostream>
#include<iomanip>
using namespace std;

class Data {
 public:
	void define(short d, short m, short a);
 	void exibe(void);
 	Data();
 	~Data();
 private:
 	unsigned short data;
};

Data::Data(void){
	cout << "Entrou no construtor da classe" << endl;
}

Data::~Data(void){
	cout << "Entrou no destrutor da classe" << endl;
}

void Data::define(short d, short m, short a)
{
	 data = ((a-1980)<<9) | (m<<5) | d;
}
void Data::exibe(void)
{
	 cout << setw(2) << setfill('0') << (data & 0x1F) << "/" << setw(2) << setfill('0') << ((data>>5) & 0xF) << "/" << (data>>9)+1980 << endl;
} 

int main(){
	cout << "Exemplos"<< endl;

	cout << "Tamanho em bytes: " << sizeof(unsigned short) << endl;
	cout << "Tamanho em bites: " << 8 * sizeof(unsigned short) << endl;

	cout << "---- Sem referencia ---- " << endl;
	cout << "Exemplo de Data de Hoje" << endl;
	
	Data hoje;
	hoje.define(22, 5, 2019);
	hoje.exibe();

	cout << "---- Com referencia ---- " << endl;
	cout << "Exemplo de Data" << endl;

	Data *instanciaAmanha = new Data;
	instanciaAmanha->define(22, 5, 2019);
	instanciaAmanha->exibe();

}
