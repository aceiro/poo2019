#include <iostream>

using namespace std;

class A{
	public:
		void f();
};

void A::f(){}

class B : public A{
	public:
		void f(string, int);
};

void B::f(string nome, int idade){
	cout << nome << " tem " << idade << " anos" << endl;
}