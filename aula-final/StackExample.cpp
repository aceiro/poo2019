//	********************************
//	*                              *
//  *	Andrew Vianna Carrazzone   *
//  *   andrewcarrazzone@gmail.com *
//  *                              *
//  ********************************

#include <iostream>

using namespace std;

class Stack{
    private:
    int *mem;
    int top = -1;
    int capacity;

    public:
        Stack();
        Stack(int);
        ~Stack();
        void push(int);
        bool isFull();
        int pop();
        bool isEmpty();
        int remove();

};

Stack::Stack(){
    cout << "Creating object" << endl;
};

Stack::Stack(int capacity){
    cout << "Creating object" << endl;
    mem            = new int[capacity];
    this->capacity = capacity;
};

Stack::~Stack(){
    cout << "Destroying object" << endl;
};

void Stack::push(int val){
    if ( !isFull() ){
        mem[++top]=val;
    }else{
        cout << "Stack is full!" << endl;
    };
};

int Stack::pop(){
    if ( !isEmpty() ){
        return mem[top];
    } else{
        cout << "Stack is empty!" << endl;
    };
    
};

bool Stack::isFull(){
    return top ==  capacity-1;
};

bool Stack::isEmpty(){
    return top==-1;
};

int Stack::remove(){
    if(!isEmpty()){
        int aux = mem[top];
        top--;
        return aux;
    }else{
        cout << "Stack is empty!" << endl;
        return -1;
    }
    
}

int main(){
    cout << "Example usage of a Stack in C++" << endl;
    Stack *stack = new Stack(10);

    stack->push(2);
    stack->push(4);
    stack->push(8);
    stack->push(16);

    while ( !stack->isEmpty() ){
        cout << "Value: " << stack->pop() << endl;
        stack->remove();
    };

};
