# Prova P2 - Amanda
Repositório destinado para as respostas da Prova P2 da matéria de Programação Orientada a Objetos.

**Q1 ) Crie uma classe em C++ que para representar um objeto Pessoa com os seguintes atributos – nome, idade, sexo, CPF, RG.**

Resp: 
```
Class Pessoa {
	Private:
		String nome;
		Int idade;
		Cha sexo;
		String CPF;
		String RG;
	Public:
		Pessoa();
		~Pessoa();
};

```

**Q2 )	Crie uma classe em C++ para representar uma Calculadora Aritmética com as seguintes operações – soma, subtração, multiplicação e divisão.**

Resp: 
```
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
```

**Q3) Explique o conceito de construtores e destrutores em C++ com um exemplo. Nesse caso, use um exemplo diferente dos exercícios 1 e 2.**

CONSTRUTOR em POO pe um tipo de rotina que é executada durante a criação de um objeto, ou seja, via a instanciação.
Ex:
```
Class A{   // o construtor da classe é sempre o nome da classe
    A();
};

A::A(){
	Cout << “Entrou em A”;
}
// No código Main:
int main() {
    A*a;
    a = new A();
}
```
DESTRUTOR por outro lado, é uma rotina executável durante a finalização do programa em memória.
“É usado para você fazer uma limpeza de região de memória que não está sendo usado”
```
Ex:
Class No{
	No *ref;
	No();
	~No();
};
No::No(){
	ref=new No(); // ref 1
	ref->ref = new No(). // ref 2 aqui estamos criando o segundo - ref aponta para ref que recebe um novo No
    ref->ref->ref = new No(). // ref 3 aqui estamos criando o terceiro
    ref->ref->ref-> = null. // aqui pegando o ultimo para aponta para nada
};
```

O C++ não limpa a memória para a gente, fica a critério do programador limpar a memória, por isso temos que implementar manualmente o destrutor da classe, como mostrado a segui a continuação do código:
```
No::~No(){
    Delete ref;
    //OU
    Ref= null;
};
```
“Quando o seu no não estiver mais sendo usada apontar para um lugar que não seja o endereço de memória”

**Q4 ) Considerando a importância de Programação Orientada a Objetos nos dias atuais, comente as principais características desse paradigma de desenvolvimento de software. Em particular, procure destacar suas diferentes. Como sugestão, tente completar as lacunas a seguir:**
Resp: “Programação orientada a objetos (POO) é um **PARADIGMA** que visa fornecer o **ENCAPSULAMENTO** para que classes e **MEMBROS** possam ser selecionados por meio da instanciação de classes quando o escopo for **PUBLIC**.”

**Q5 ) Crie uma classe Pai e uma classe Filha e faça a sua representação em herança usando um diagrama e o respectivo código em C++.**
```
Class Pai{
    Private:
        String cor Olhos;
Public:
    Void andar();
}

Class Filha:Pai{ // essa classe pega os membros da classe pai e pode usar na própria classe filha
    Private:
        int idade;
    Public:
        Void correr();
}
```

ILUSTRAÇÃO DE HERANÇAS:




             HERANÇA SIMPLES				    HERANÇA MÚLTIPLA
             
             
**Q6 ) Crie uma classe em C++ como a apresentada abaixo e em seguida adicione para uma classe filha (B) um novo método sobrecarregado f(). Class A { public: void f(); };**

Resp: Criar uma Classe b que herda da a um novo método. Como é sobrecarga diferente números de parâmetros ou diferente tipos de parâmetros e tem que ter o mesmo nome, só acontece em função a sobrecarga.
Ex:
Método 
```
void f(){
void f(char){
```
A sobrecarga é qualquer coisa que tenha um parâmetro tem o mesmo nome mas um tem paramento e outro não...isso é sobrecarga.

**Q7 ) Crie uma classe em C++ como a apresentada abaixo e em seguida adicione para uma classe filha (B) um novo método sobrescrito f()
Class A { public: void f(); };**

```
class A{
	private:
	public:
		void f();
};
	
class B:A{
	private:
	public:
		void f();
};
	
```

**Q8 ) Crie duas classes em C++ (como a apresentada abaixo)
Qual f() será chamado? Como se chama essa mecanismo em C++?**
```
class A{ public: void f();};
	class B:{public: void f(); };
	class C { public: void f(); };
	void C::f () { B *i = new A(); };

class A{
	public:
		void f();
};
	

class B: A{
	public:
		void f();
};
	

class C{
	public:
		void f();
};
	
void C::f(){
	B *i = new A();
}
	
```
RESPOSTA:  O f() chamado será o da classe C, chama-se sobrescrito.

**Q9 ) Comente o funcionamento do STL - Standard Template Library. Dê um exemplo de uso.**

É um conjunto de classes de modelo C ++ para fornecer estruturas e funções de dados de programação comuns, como listas, pilhas, matrizes, etc. É uma biblioteca de classes, algoritmos e iteradores de contêineres. É uma biblioteca generalizada e, portanto, seus componentes são parametrizados. Um conhecimento prático de classes de modelo é um pré-requisito para trabalhar com o STL.
STL tem quatro componentes:
• Algoritmos: O algoritmo de cabeçalho define uma coleção de funções especialmente projetadas para serem usadas em intervalos de elementos. Eles atuam em contêineres e fornecem meios para várias operações para o conteúdo dos contêineres.
• Contêineres ou classes de contêiner armazenam objetos e dados. Há no total sete classes de contêineres de “primeira classe” padrão e três classes de adaptadores de contêiner e apenas sete arquivos de cabeçalho que fornecem acesso a esses contêineres ou adaptadores de contêiner.
• Funções: O STL inclui classes que sobrecarregam o operador de chamada de função. Instâncias de tais classes são chamadas de objetos de função ou functores. Os funcionais permitem que o funcionamento da função associada seja personalizado com a ajuda de parâmetros a serem passados.
• Iteradores: Como o nome sugere, os iteradores são usados para trabalhar em uma sequência de valores. Eles são o principal recurso que permite generalidade no STL.

Abaixo um exemplo de um tipo de programa hello world que usa a biblioteca STL: uma implementação comum de uma abstração de classe de string chamada string.

```
#include <stdio.h> 
   void main(){ 
   	// create string ‘str’ = “Hello World!”
   	char *str = “Hello World!”;

   	printf(“%s\n”, str);
};
```


**Q10 ) Faça um resumo sobre os principais conceitos aprendidos durante o semestre.**


