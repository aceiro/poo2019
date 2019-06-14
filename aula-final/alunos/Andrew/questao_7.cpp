#include <iostream>

using namespace std;

class A {
  public:
    void f() {
      cout << "A void f()" << endl;
  }
};

class B : public A {
  public:
    B() {
      A::f();
      int num = f();
      cout << " Funcionou :D" << num << endl;
    }
    ~B() {
      
    }
    int f() {
      return 10;
    }
};

int main() {
  B *b = new B();

  delete b;
  return 0;
}