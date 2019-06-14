#include <iostream>

using namespace std;

class Pokemon{
private:
    string nome;
    string habilidade;
    string tipo[];
    int hp;
    int atk;
    int def;
    int spatk;
    int spdef;
    int speed;
public:
    Pokemon();
    Pokemon(string);
    ~Pokemon();
    void setNome(string);
    string getNome();
};

class Evolution : Pokemon{
private:
    int evolution;
public:
    Evolution();
    ~Evolution();
};

Evolution::Evolution(){
};

Evolution::~Evolution(){
};


Pokemon::Pokemon(){
    cout << "Classe criada" << endl;
};

Pokemon::Pokemon(string nome){
this->nome = nome;
};

Pokemon::~Pokemon(){
    cout << "Classe destruida" << endl;
};

void Pokemon::setNome(string nome){
    this->nome = nome;
};

string Pokemon::getNome(){
    return this->nome;
};



int main(){ 

Pokemon *pokemon = new Pokemon();
}