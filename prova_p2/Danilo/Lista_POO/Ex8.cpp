#include <iostream>

using namespace std;

class A{
	public:
		void f();
};

void A::f(){
	cout << "Chamando m�todo da classe A" << endl;
}

class B: A{
	public:
		void f();
};

void B::f(){
	cout << "Chamando m�todo da classe B" << endl;
}

class C{
	public:
		void f();
};

void C::f(){
	B *i = new A();
	cout << "Chamando m�todo da classe C" << endl;
}

// Ao executar a aplica��o ocorre um erro, onde retorna que A n�o � inacess�vel da classe B