#include<iostream>
using namespace std;

//
//
// Uso de Herânca
// 
class StackRuntimeException: exception{
	private:
		string message;
	public:
		StackRuntimeException(string message);
		void printMessage();
};

StackRuntimeException::StackRuntimeException(string message){
	this->message = message;
}
void StackRuntimeException:: printMessage(){
	cout << message << endl;
}

class Stack{
	private:
		const int LIMIT = 16;
		int *mem;
		int top = -1;
		int max = -1;	
	public:
		Stack();
		Stack(int);
		~Stack();
		void push(int);
		int pop(void);
		int capacity(void);
		bool empty(void);
		bool isFull(void);
		int remove();
};

Stack::Stack(){
	this->max = LIMIT;
	this->mem = new int[LIMIT];
}

Stack::Stack(int max){
	this -> max = max;
	this-> mem  = new int[max];
}

Stack::~Stack(){
	delete []mem;
}

void Stack::push(int value){
	if( !isFull() )
		mem[++top] = value;
		else {
			throw StackRuntimeException("Stack is full!");
		}
}

int Stack::pop(){
	if( !empty() )
		return mem[top];
		else {
			throw StackRuntimeException("Stack is empty!");
		}
}


int Stack::remove(){
	if( !empty() ){
		int aux  = mem[top--];
		return aux;
		}else {
			throw StackRuntimeException("Stack is empty!");
		}
}


int Stack::capacity(){
	return this->max;
}

bool Stack::empty(){
	return top<0;
}

bool Stack::isFull(){
	return top == capacity() -1 ;
}

int main(int argc, char *argv[]){
	/*
		Para C++, utilize nullptr sempre que possível.
		nullptr é tipo bem definido, diferente de apenas usar 0.
		O comitê do C++ reforça este uso, no principal e mais atual guia de boas práticas:
		https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-nullptr
		Compiladores gcc-4.6, clang 2.9 e msvc-10.0 já supportam esta feature do C++11.
		Para os compiladores gcc e clang, basta adicionar a opção --std=c++11
		g++ main.cpp -o Exemplo -std=c++11
	*/

	Stack *stack = new Stack(10);

	cout << "Exemplo de uso de uma pilha em C++" << endl;
	cout << "Converter de decimal para binário " << endl;

	int n = atoi(argv[1]);
	int r = -1;
	do{
		try{
			r = n % 2;		
			n = n / 2;
			stack->push( r );
		}
		catch(StackRuntimeException e){
			e.printMessage();
			cout << "Stack is limited, computation is imprecise! " << endl;
			break;
		}
	}while( n!=0 );

	while ( !stack->empty() ){
		cout << stack->remove();
	}
	
	cout << "" << endl;


}