#include <iostream>

using namespace std;

class A {
  public:
    void f();
};

class B : public A {
  public:
    B();
    ~B();
    void f();
};

void A::f() {
  cout << "A::F" << endl;
}

B::B() {
  cout << "Sem sobrecarga" << endl;
  void f(float);

  cout << "Com sobrecarga" << endl;
  void f(int);

}

B::~B() {

}

int main() {
  B *b = new B();
  delete b;
  return 0;
}