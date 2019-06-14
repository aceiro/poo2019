# P2 -POO/2019
## ALISSON - 8100213
**Q1 )**  Crie uma classe em C++ que para representar um objeto Pessoa com os seguintes atributos � nome, idade, sexo, CPF, RG.

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
**Q2 )** Crie uma classe em C++ para representar uma Calculadora Aritm�tica com as seguintes opera��es � soma, subtra��o, multiplica��o e divis�o.


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
**Q3)** Explique o conceito de construtores e destrutores em C++ com um exemplo. Nesse caso, use um exemplo diferente dos exerc�cios 1 e 2.

**Construtor** em poo um tipo de rotina que executada 
durante a cri��o de um objeto* ou de, via a instanci��o.'

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
O **Destrutor** por outro lado, � uma rotina executada durante a finaliza��o 
do programa em mem�ria.
```cpp
class no{
	No
		No *ref;
		No ();
		~No();

	}:

	No::No (){ //Cria��o de novos NO e por sim apontamento para null
		ref = new No();
		ref->ref= new No();
		fer->fer->ref = new No();
		ref->ref->ref->ref= null;

	};

	No::~No(){
		ref = null; // aqui faz a limpeza em mem�ria
		//ou:editormd-logo-1x:
		delete ref;
	};

```
**Q4)** Considerando a import�ncia de Programa��o Orientada a Objetos nos dias atuais, comente as principais caracter�sticas desse paradigma de desenvolvimento de software. Em particular, procure destacar suas diferentes. Como sugest�o, tente completar as lacunas a seguir:
> Programa��o orientada a objetos (POO) � um PARADIGMA que visa fornecer o ENCAPSULAMENTO para que classes e MEMBROS possam ser selecionados por meio da instancia��o de classes quando o escopo for PUBLIC.

 >Paradgma: um modelo.
  Encapsulamento: Cria��o da classe e protegendo com o privat.
  Membro : fun�oes e atributos.

**Q5 )** Crie uma classe Pai e uma classe Filha e fa�a a sua representa��o em heran�a usando um diagrama e o respectivo c�digo em C++.


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
    // herança multipla:
    
    class A, B, C {
    
    }
    

**Q6 e Q7 )** Crie uma classe em C++ como a apresentada abaixo e em seguida adicione para uma classe filha (B) um novo m�todo sobrecarregado f(); e um m�todo sobrescrito f();. Class A { public: void f(); };

A **sobrescrita** de m�todos seria criar um novo m�todo na classe filha contendo
a mesma assinatura e mesmo tipo de retorno do m�todos sobrescrito. (Override).
Ja o **sobrecarga**, ele no caso seria, o que permite m�todos de mesmo nome, mas com suas assinaturas diferentes, ex argumentos diferentes.

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
    // Mostra um possiv�l erro de B em A.
	
	
**Q9)** Comente o funcionamento do STL - Standard Template Library. De um exemplo de uso.

** STL**  � uma biblioteca quase que totalmente baseada em templates, buscando simplicidade, produtividade e rapidez. Ela possui alguns estilos b�sicos, chamado concepts.
S�o eles: Containers, Iterators e Algoritmos.

Exemplo iterators:


    #include <vector>
    #include <assert.h>
    
    int main()
    {
    
       std::vector<int> v;
       // 
       // Esse � o tipo do iterator para um vetor de int. 
       // Todos os containers da STL seguem esse padr�o, o tipo do iterator
       // � definido por um typedef dentro do pr�prio container
       //
       std::vector<int>::iterator i;
    
       //
       // container vazio, begin() � igual a end()
       //
       assert(v.begin() == v.end());
    
       v.push_back(10);
       v.push_back(20);
    
       i = v.begin();
       assert(*i == v[0]);
    
       assert(v.begin() != v.end());
    
       // o primeiro item � igual a 10
       assert(v[0] == 10);
    
       // o begin() aponta para o item de �ndice 0
       assert(v[0] == *v.begin());
    
       // posso somar iterator como somo ponteiros.
       // begin() + 1 aponta para o segundo item.
       assert(*(v.begin() + 1) == 20);
    
       // temos somente dois itens. O item depois do �ltimo � o end()
       assert(v.begin() + 2 == v.end());
    
       return 0;
    }

**Q)10** Fa�a um resumo sobre os principais conceitos aprendidos durante o semestre.

Ao longo deste semestre vimos os principais conceitos de POO, estudamos sobre classes e objetos , conhecemos os principais mecanismo como sobrecarga e sobrescrita.
Tamb�m vimos os tr�s pilares da POO, encapsulamento, heran�a e Polimorfismo, n�o podendo esquecer da biblioteca STL que possui varios beneficios para o desenvolvedor.
