#include <iostream>

using namespace std;

class A{
	public:
		void f();
};

void A::f(){
	cout << "Chamando método da classe A" << endl;
}

class B: A{
	public:
		void f();
};

void B::f(){
	cout << "Chamando método da classe B" << endl;
}

class C{
	public:
		void f();
};

void C::f(){
	B *i = new A();
	cout << "Chamando método da classe C" << endl;
}

// Ao executar a aplicação ocorre um erro, onde retorna que A não é inacessível da classe B