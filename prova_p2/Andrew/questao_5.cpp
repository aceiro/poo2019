#include <iostream>

using namespace std;

class Pokemon{
private:
    string name;
    string ability;
    int hp;
    int atk;
    int def;
    int spatk;
    int spdef;
    int speed;
    int evolution;
public:
    Pokemon();
    Pokemon(string);
    ~Pokemon();
    void setStats(string, int, int, int, int, int, int, int);
    string getNome();
};

class PokemonType : public Pokemon{
private:
    string type[];
    string noEffectAgainst[];
    string weakAgainst[];
    string strongAgainst[];
    string resists[];
    string weakTo[];

public:
    PokemonType();
    ~PokemonType();
    void setType(string);
};

PokemonType::PokemonType(){
};

void PokemonType::setType(string type){
    for (int i = 0; i < i+1; i++){
        this->type[i] = type;
    };
};

PokemonType::~PokemonType(){
    
};

Pokemon::Pokemon(){
    cout << "Classe criada" << endl;
};

Pokemon::Pokemon(string nome){
this->name = nome;
};

Pokemon::~Pokemon(){
    cout << "Classe destruida" << endl;
};

void Pokemon::setStats(string ability, int hp, int atk, int def, int spatk, int spdef, int speed, int evolution){
    this->ability = ability;
    this->hp = hp;
    this->atk = atk;
    this->def = def;
    this->spatk = spatk;
    this->spdef = spdef;
    this->speed = speed;
    this->evolution = evolution;
};

string Pokemon::getNome(){
    return this->name;
};



int main(){ 
PokemonType *charmanderFire = new PokemonType();
    charmanderFire->setStats("Blaze", 39, 52, 43, 60, 50, 64, 1);
    charmanderFire->setType("Fire");
}