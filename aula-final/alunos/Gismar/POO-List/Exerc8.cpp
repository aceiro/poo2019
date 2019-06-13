#include <iostream>

using std::cout;
using std::endl;

class A {public: void f();};
// void A::f(){ cout << endl << "A" << endl;}

class B : A {public: void f();};
// void B::f(){ cout << endl << "B" << endl;}

class C {public: void f();};
// void C::f(){ cout << endl << "C" << endl;}

void C::f() {B *i = new A();}
// Neste casso o código está em erro, pois não aceita um B em A