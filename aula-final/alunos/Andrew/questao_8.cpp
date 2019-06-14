#include <iostream>

using namespace std;

class A{
public: 
void f();
};

class B : A{
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

// C não tem relação de herança com B ou A, B é filho de A. Só é necessário inicializar B.