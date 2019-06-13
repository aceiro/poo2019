#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

class Calculadora{
	private:
		double value;
	public:
		Calculadora();
		~Calculadora();
		double soma(double a,double b);
		double sub(double a,double b);
		double mult(double a,double b);
		double div(double a,double b);
};

Calculadora::Calculadora(){
	
}

Calculadora::~Calculadora() {

}

double Calculadora::soma(double a,double b){
	this->value= a+b;
	cout<< "Resultado: " << value; // this é um ponteiro que está relaciona com a propria classe, serve para evitar a redundancia de codigo, é o value que está dentro da classe
}

double Calculadora::sub(double a, double b){
	this->value= a-b;
	cout<< "Resultado: " << value; 
}

double Calculadora::mult(double a,double b){
	this->value= a*b;
	cout<< "Resultado: " << value; 
}

double Calculadora::div(double a,double b){
	this->value= a/b;
	cout<< "Resultado: " << value; 
}

int main() {
	
	Calculadora calc;
	double a, b; 
	int c;
	
	cout << "Digite a operacao matematica deseja fazer: "<< endl;
	cout << "1 : Adicao"<< endl;
	cout << "2 : Subtracao"<< endl;
	cout << "3 : Multiplicacao"<< endl;
	cout << "4 : Divisao"<< endl;
	cin >> c;
	
	switch(c){
		case 1:
			cout << "Digite o primeiro numero: "<< endl;
			cin >> a;
			cout << "Digite o segundo numero: "<< endl;
			cin >> b;
			calc.soma(a,b);
			break;
		case 2:
			cout << "Digite o primeiro numero: "<< endl;
			cin >> a;
			cout << "Digite o segundo numero: "<< endl;
			cin >> b;
			calc.sub(a,b);
			break;
		case 3:
			cout << "Digite o primeiro numero: "<< endl;
			cin >> a;
			cout << "Digite o segundo numero: "<< endl;
			cin >> b;
			calc.mult(a,b);
			break;
		case 4:
			cout << "Digite o primeiro numero: "<< endl;
			cin >> a;
			cout << "Digite o segundo numero: "<< endl;
			cin >> b;
			calc.div(a,b);
			break;
	}
		
	return 0;
}
