//	*********************************
//	*                               *
//  *	Andrew Vianna Carrazzone    *
//  *   andrewcarrazzone@gmail.com  *
//  *                               *
//  *********************************
//
// Programa feito em aula no dia 23/05/2019 pelo Professor Erik.

#include <iostream>

using namespace std;

// Declaração da classe, para padronizar um idioma eu usei o inglês, mas comentarei tambêm como ficaria em português:
class Stack{                                // Aqui é declarada a nossa classe Stack (Pilha);
    private:                                // Abrimos a tag private para declararmos algumas variáveis que não serão acessadas manualmente;
    int *mem;                               // *mem é a nossa pilha;
    int top = -1;                           // Declaramos nossa variável top a qual será o topo de nossa lista, poderíamos também declaramos a variável como 0 e fazer pequenas alterações;
    int capacity;                           // Aqui é declarado a variável que será responsável por dizer-nos qual a capacidade de nossa pilha.

    public:                                 // Declarações das funções da nossa classe:
        Stack();                            // Função construtora, nota-se que ela não possui um tipo; *Nota 1.
        Stack(int);                         // Sobrecarga da função construtora; *Nota 2.
        ~Stack();                           // Função desconstrutora;
        void push(int);                     // Função para adicionar itens em nossa pilha;
        bool isFull();                      // Função para checar se a pilha está cheia;
        int pop();                          // Função que traz o nosso topo;
        bool isEmpty();                     // Função para checar se a pilha está vazia;
        int remove();                       // Função que remove itens da pilha.

};

Stack::Stack(){                             // Função construtora sem parâmetros:
    cout << "Creating object" << endl;      // Cout para confirmarmos que a função foi executada.
};

Stack::Stack(int capacity){                 // Sobrecarga da nossa função construtor:
    cout << "Creating object" << endl;      // Cout para confirmarmos que a função foi executada;
    mem            = new int[capacity];     // Criação da nossa pilha.
    this->capacity = capacity;              // Determina que a capacidade é igual a capacidade recebida.
};

Stack::~Stack(){                            // Função desconstrutora;;
    cout << "Destroying object" << endl;    // Cout para confirmarmos que a função foi destruída.
};

void Stack::push(int val){                  // Função para adcionarmos valores.
    if ( !isFull() ){                       // Checa se a pilha não esta cheia;
        mem[++top]=val;                     // Caso a fila não esteja cheia; *Nota 3.
    }else{                                  // Caso ela esteja cheia;
        cout << "Stack is full!" << endl;   // Diz que a função está cheia.
    };
};

int Stack::pop(){                           // Função que retorna o nosso topo da pilha:
    if ( !isEmpty() ){                      // Checa se a lista não esta vazia;
        return mem[top];                    // Se a lista não estiver vazia retorna o nosso top.
    } else{                                 // Caso a nossa lista estiver vazia;
        cout << "Stack is empty!" << endl;  // Diz que a lista está vazia.
    };
    
};

bool Stack::isFull(){                       // Função que checa se a lista estiver vazia:
    return top == capacity-1;               // Se top for igual a capacity - 1 retorna true; *Nota 4.
};                                          // Nota-se que é utilizado um -1, pois caso criemos uma ilha com 10 espaços ela irá de 0 a 9.

bool Stack::isEmpty(){                      // Função que checa se a lista estiver vazia:
    return top == -1;                       // Se top for igual a 1 retrna true;
};

int Stack::remove(){                        // Função responsável por remover o topo de nossa pilha:
    if(!isEmpty()){                         // Se a pilha não estiver vazia:
        int aux = mem[top];                 // Nossa variável aux recebe mem[top];
        top--;                              // Top é reduzida em 1;
        return aux;                         // É retornado aux.
    }else{                                  // Se a pilha estiver vazia:
        cout << "Stack is empty!" << endl;  // Diz que a lista esta vazia;
        return -1;                          // Por ser uma função int precisamos retornar algo para ambos os casos.
    }
    
}

int main(){                                 // Função main:
    cout << "Example usage of a Stack in C++" << endl;
    Stack *stack = new Stack(10);           // Utilizamos a função construtora sobrecarregada para gerar uma pilha de 10 espaços;

    stack->push(2);                         // Enviamos o valor 2;
    stack->push(4);                         // Enviamos o valor 4;
    stack->push(8);                         // Enviamos o valor 8;
    stack->push(16);                        // Enviamos o valor 16;

    while ( !stack->isEmpty() ){            // Enquanto não estiver vazia:
        cout << "Value: " << stack->pop() << endl;// Mostramos o nosso valor do topo;
        stack->remove();                    // Removemos o nosso topo;
    };

};

    /* *Nota 1: Referente a função construtora:
            A função construtora é responsável por construir o nosso objeto.
    */

    /* *Nota 2: Referente a função construtora sobrecarregada:
            Esta será utilizada quando inicializarmos a classe com um parâmetro inteiro, definindo assim durante a inicialização uma capacidade;
    */

    /* *Nota 3: Referente a: mem[++top]=val:
            Nota-se que foi colocado o ++ antes de top, para que ele primeiro adicione 1 a variável top e depois top receba val.
            Caso contrario a posição -1 receberia val e então top receberia +1.
            A posição do "++"top é de extrema importância.
    */

   /* *Nota 4: Referente a: return top == capacity-1;
            É importante dizer que seria incorreto o uso de capacity--, pois caso utilizarmos o mesmo ele reduziria o valor de nossa variável;
            Ao utilizarmos o capacity-1 nós não alteramos nossa variável capacity, apenas checamos a posição 9 sem alteramos nossa capacidade de 10.
   */