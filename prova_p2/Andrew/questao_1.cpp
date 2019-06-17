#include <iostream>

using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
    string sexo;
    string cpf;
    string rg;
public:
    Pessoa();
    Pessoa(string, int, string, string, string);
    ~Pessoa();
    void funcSexo();
};

Pessoa::Pessoa(){
    cout << "Classe criada." << endl;
};

Pessoa::Pessoa(string nome, int idade, string sexo, string cpf, string rg){
    cout << "Classe criada." << endl;
    this->nome = nome;
    this->idade = idade;
    this->sexo = sexo;
    this->cpf = cpf;
    this->rg = rg;
    cout << "Dados atribuidos." << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    Pessoa::funcSexo();
    cout << "CPF: " << this->cpf << endl;
    cout << "RG: " << this->rg << endl;
};

Pessoa::~Pessoa(){
    cout << "Classe destrúida." << endl;
};

void Pessoa::funcSexo(){
    if ((sexo == "M") || (sexo == "m")){
        cout << "Sexo: Masculino" << endl;
    }else if ((sexo == "F") || (sexo == "f")){
        cout << "Sexo: Feminino" << endl;
    }else{
        cout << "Sexo: Não binário" << endl;
    };
    
};

int main(){
    Pessoa *pessoa = new Pessoa("Nome", 18, "M", "CPF", "RG");
};