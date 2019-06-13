#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

class A {
  public:
    void f();
};

class B : public A {
  public:
    B();
    ~B();
};

void A::f() {

}

B::B() {
  cout << endl << "usando método f, sem sobrecarga" << endl;
  void f();

  cout << endl << "usando método f, com sobrecarga" << endl;
  void f(int);

}
B::~B() {

}


int main() {
  B *b = new B();

  delete b;
  return 0;
}