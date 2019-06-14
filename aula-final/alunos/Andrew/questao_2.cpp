//	********************************
//	*                              *
//  *	Andrew Vianna Carrazzone   *
//  *   andrewcarrazzone@gmail.com *
//  *                              *
//  ********************************

#include <iostream>

using namespace std;

class Calc{
private:
	double value;
public:
	Calc();
	~Calc();
	void soma(double, double);
	void sub(double, double);
	void mult(double, double);
	void div(double, double);
	void print();
};

Calc::Calc(){
	cout << "Calculadora criada." << endl;
}

Calc::~Calc(){
	cout << "Calculadora destrúida." << endl;
}

void Calc::soma(double a, double b){
	this->value = a+b;
};

void Calc::sub(double a, double b){
	this->value = a-b;
};

void Calc::mult(double a, double b){
	this->value = a*b;
};

void Calc::div(double a, double b){
	this->value = a/b;
};

void Calc::print(){
	cout << "Resultado: " << value << endl;
};

int main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	Calc *calc = new Calc();
	cout << "Soma {" << endl;
	calc->soma(30, 2);
	calc->print();
	cout << "     }Fim.Soma" << endl << " " << endl << "Subtra��o {" << endl;
	calc->sub(30, 2);
	calc->print();
	cout << "             }Fim.Subtra��o" << endl << " " << endl << "Multiplica��o {" << endl;
	calc->mult(30, 2);
	calc->print();
	cout << "              }Fim.Multiplica��o" << endl << " " << endl << "Divis�o {" << endl;
	calc->div(30, 2);
	calc->print();
	cout << "        }Fim.Divis�o" << endl;
	return 0;
};
