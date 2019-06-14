#include <iostream>

using namespace std;

class Pessoa{
	private:
		string nome;
		int idade;
		string sexo;
		
    public:
    	void setNome(string);
    	void setIdade(int);
    	void setSexo(string);
    	string getNome();
    	string getSexo();
    	int getIdade();
};

void Pessoa::setNome(nome){
	
	this->nome = nome;
}

void Pessoa::setIdade(idade){
	
	this->idade = idade;
}

void Pessoa::setSexo(sexo){
	
	this->sexo = sexo;
}

string Pessoa::getNome(){
	return this->nome;
}

string Pessoa::getSexo(){
	return this->sexo;
}

int Pessoa::getIdade(){
	return this->idade;
}