#include <iostream>

using namespace std;

class A{
	public:
		void f(int, int);
};

void A::f(int val1, int val2){
	int soma;
	soma = val1+val2;
	cout << "Soma: " << soma << endl;
}

class B:public A{
	public:
		void f(int, int);
};

void B::f(int val1, int val2){
	int mult;
	mult = val1*val2;
	cout << "Multiplica��o: " << mult << endl;
}

int main (){
	
	int v1, v2;
	B b;
	
	cout << "Entre com n�mero: ";
	cin >> v1;
	cout << "Entre com outro n�mero: ";
	cin >> v2;
	
	b.f(v1, v2);
	return 0;
}