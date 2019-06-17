#include <iostream>
#include "Pessoa.cpp"

using namespace std;

class Funcionario : public Pessoa{
	private;
		string cargo;
		double salario;
		
	public:
		void setCargo(string);
		void setSalario(double);
		string getCargo();
		double getSalario();
};

void Funcionario::setCargo(cargo){
	this->cargo = cargo;
}

void Funcionario::setSalario(salario){
	this->salario = salario;
}

double Funcionario::getSalario(){
	return this->salario;
}

string Funcionario::getCargo(){
	return this->cargo;
}

string Funcionario::getNome(){
	return nome;
}

int Funcionario::getIdade(){
	return idade;
}