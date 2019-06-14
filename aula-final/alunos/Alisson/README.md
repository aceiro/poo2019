# P2 -POO/2019
## ALISSON - 8100213
**Q1 )**  Crie uma classe em C++ que para representar um objeto Pessoa com os seguintes atributos – nome, idade, sexo, CPF, RG.

    class Pessoa{
    		private:
    			string nome;
    			int idade;
    			char sexo;
    			string cpf;
    			string rg;
    		public:
    			Pessoa();
    			~Pessoa();
    	};
**Q2 )** Crie uma classe em C++ para representar uma Calculadora Aritmética com as seguintes operações – soma, subtração, multiplicação e divisão.


    class Calculadora{
    private:
    	double value;
    public:
    	Calculadora();
       ~Calculadora();
	   
    	void soma(double, double);
    	void sub (double, double);
    	void mult(double, double);
    	void div (double, double);
    		print ();
    }
    void Calculadora::print(){
    	cout << "Valor:"<< value;
    }
    void Calculadora::soma(double a, double b){
    	this.value= a+b;
    }
    double Calculadora::mult(double a,double b){
    	this->value= a*b;
    	cout<< "Resultado: " << value; 
    }
    
    double Calculadora::div(double a,double b){
    	this->value= a/b;
    	cout<< "Resultado: " << value; 
    }
**Q3)** Explique o conceito de construtores e destrutores em C++ com um exemplo. Nesse caso, use um exemplo diferente dos exercícios 1 e 2.

**Construtor** em poo um tipo de rotina que executada 
durante a crição de um objeto* ou de, via a instancição.'

```cpp
class A {
{
public:
	A();
	~A();
	
};
A::A(){
	cout<< "Entrou em A"<< endl<;

};
```
O **Destrutor** por outro lado, é uma rotina executada durante a finalização 
do programa em memória.
```cpp
class no{
	No
		No *ref;
		No ();
		~No();

	}:

	No::No (){ //Criação de novos NO e por sim apontamento para null
		ref = new No();
		ref->ref= new No();
		fer->fer->ref = new No();
		ref->ref->ref->ref= null;

	};

	No::~No(){
		ref = null; // aqui faz a limpeza em memória
		//ou:editormd-logo-1x:
		delete ref;
	};

```
**Q4)** Considerando a importância de Programação Orientada a Objetos nos dias atuais, comente as principais características desse paradigma de desenvolvimento de software. Em particular, procure destacar suas diferentes. Como sugestão, tente completar as lacunas a seguir:
> Programação orientada a objetos (POO) é um PARADIGMA que visa fornecer o ENCAPSULAMENTO para que classes e MEMBROS possam ser selecionados por meio da instanciação de classes quando o escopo for PUBLIC.

 >Paradgma: um modelo.
  Encapsulamento: Criação da classe e protegendo com o privat.
  Membro : funçoes e atributos.

**Q5 )** Crie uma classe Pai e uma classe Filha e faça a sua representação em herança usando um diagrama e o respectivo código em C++.


    class Pai{
    private:
    	string corOlhos;
    
    public:
    	void andar
    	
    };
    
    class Filha::Pai{
    public:
    	private:
    		int idade;
    	public:
    		void correr();
    	
    };
    // heranÃ§a multipla:
    
    class A, B, C {
    
    }
    

**Q6 e Q7 )** Crie uma classe em C++ como a apresentada abaixo e em seguida adicione para uma classe filha (B) um novo método sobrecarregado f(); e um método sobrescrito f();. Class A { public: void f(); };

A **sobrescrita** de métodos seria criar um novo método na classe filha contendo
a mesma assinatura e mesmo tipo de retorno do métodos sobrescrito. (Override).
Ja o **sobrecarga**, ele no caso seria, o que permite métodos de mesmo nome, mas com suas assinaturas diferentes, ex argumentos diferentes.

**Sobrecarga:**



   
     class A{
        	public:
        	void setF(string);
    		string getF( ) const;
    		
    class B : public A{
			public:
    		void A::f( )
			{
			}
        B::B( ){
		void f( double);
		}
		};

**Sobrescrita:**


     class A{
        	public:
        	void setF(string);
    		string getF( ) const;
    		
    class B : public A{
			public:
    		void A::f( )
			{
			}
        B::B( ){
		void f(string);
		}
		};
**Q5)** Crie duas classes em C++ (como apresentado abaixo)
class A{ public: void f();};
class B:{public: void f(); };
class C { public: void f(); };
void C::f () { B *i = new A(); };

    #include <iostream>
    
    using namespace std;
    
    class A { // class A
    public: 
    void f();
    };
    
    class B : A { // class B
    public:
    void f();
    };
    
    
    class C { // class C
    public: 
    void f();
    };
    
    void C::f() 
    {
    B *i = new A();
    }
    // Mostra um possivél erro de B em A.
	
	
**Q9)** Comente o funcionamento do STL - Standard Template Library. De um exemplo de uso.

** STL**  É uma biblioteca quase que totalmente baseada em templates, buscando simplicidade, produtividade e rapidez. Ela possui alguns estilos básicos, chamado concepts.
São eles: Containers, Iterators e Algoritmos.

Exemplo iterators:


    #include <vector>
    #include <assert.h>
    
    int main()
    {
    
       std::vector<int> v;
       // 
       // Esse é o tipo do iterator para um vetor de int. 
       // Todos os containers da STL seguem esse padrão, o tipo do iterator
       // é definido por um typedef dentro do próprio container
       //
       std::vector<int>::iterator i;
    
       //
       // container vazio, begin() é igual a end()
       //
       assert(v.begin() == v.end());
    
       v.push_back(10);
       v.push_back(20);
    
       i = v.begin();
       assert(*i == v[0]);
    
       assert(v.begin() != v.end());
    
       // o primeiro item é igual a 10
       assert(v[0] == 10);
    
       // o begin() aponta para o item de índice 0
       assert(v[0] == *v.begin());
    
       // posso somar iterator como somo ponteiros.
       // begin() + 1 aponta para o segundo item.
       assert(*(v.begin() + 1) == 20);
    
       // temos somente dois itens. O item depois do último é o end()
       assert(v.begin() + 2 == v.end());
    
       return 0;
    }

**Q)10** Faça um resumo sobre os principais conceitos aprendidos durante o semestre.

Ao longo deste semestre vimos os principais conceitos de POO, estudamos sobre classes e objetos , conhecemos os principais mecanismo como sobrecarga e sobrescrita.
Também vimos os trés pilares da POO, encapsulamento, herança e Polimorfismo, não podendo esquecer da biblioteca STL que possui varios beneficios para o desenvolvedor.
