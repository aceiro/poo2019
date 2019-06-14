#include <iostream>

using namespace std;

class Calculadora{
	private:
		int resultado;
		
	public:;
		double Somar(double, double);
		double Subtrair(double, double);
		double Multiplicar(double, double);
		double Dividir(double, double);
};

double Calculadora::Somar(valor1, valor2){
	
	this->resultado = valor1 + valor2;
	return this->resultado;
}

double Calculadora::Subtrair(valor1, valor2){
	
	this->resultado = valor1 - valor2;
	return this->resultado;
}

double Calculadora::Multiplicar(valor1, valor2){
	
	this->resultado = valor1 * valor2;
	return this->resultado;
}

double Calculadora::Dividir(valor1, valor2){
	
	this->resultado = valor1 / valor2;
	return this->resultado;
}