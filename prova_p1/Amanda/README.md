# Prova P1 - Amanda
Repositório destinado para as respostas da Prova P1 da matéria de Programação Orientada a Objetos

**Q1 ) (1,0 ponto) Adicionar para o menu principal as seguintes opções: Video Options; Sound Options; Controls.**
Resp: No código Main.cpp dentro de int main() foi adicionado mais 3 Opções através do comando: MenuA.addEntry(“”,””).

**Q2) (1,0 ponto) Modificar a descrição do Menu do game para “Neverwinter Nights Simple Menu”** 
Resp: No código Main.cpp dentro de int main() foi modificado o conteúdo do menu: MenuA.Title = "\t\tNeverwinter Nights Simple Menu";

**Q3) (1,0 ponto) A classe MenuTemplate possui inúmeros métodos (ver arquivo MenuTemplate.hpp). Contudo, nem todos os métodos foram implementados. Um deles é o método getCursor() que retorna a string associada com o cursor definido inicialmente. Sua atividade aqui nessa questão é implementar essa rotina getCursor para retornar e então exibi-la no programa main.cpp.**

Resp: No código MenuTemplate.cpp, ao final do código foi implementado a chamada da função GetCursor:
```
string MenuTemplate::getCursor(){
return this->Cursor;
}
```
Essa função pega o conteúdo de cursor e joga na string Cursor.
E no código Main foi introduzida a linha para imprimir na tela qual é o cursor:
```
cout << "Tipo do Cursor: " << MenuA.getCursor() << endl;
```

**Q4) (1,0 ponto) Adicione para a classe MenuTemplate a possibilidade de contar a quantidade de caracteres que existem na string do cursor do menu. Para isso, crie um atributo e um método que armazene e retorne respectivamente a quantidade de caracteres existente na string do cursor. O nome da variável e método faica a critério do aluno.**

Resp: 

Código MenuTemplate.hpp:
```
void setCursorLength(const int CursorLength);
int getCursorLength();
```

Código MenuTemplate.cpp
```
void MenuTemplate::setCursorLength(const int CursorLength){
this->CursorLength = CursorLength;
}

int MenuTemplate::getCursorLength(){
return this->CursorLength;
}
```

Código Main:
Foi inserido a linha para imprimir na tela o tamanho do cursor através do comando:
```
cout << "Tamanho do Cursor: " << MenuA.getCursorLength() << endl;
```


**Q5) (3,0 ponto) Por padrão, a biblioteca MenuTemplate monta um menu de opções que exibe caracteres ASCII através da String definida em setCursor. Para melhorar a apresentação do Menu é importante poder adicionar outros tipos de caracteres. Nesse caso, sua tarefa aqui é definir um método adicional para a classe MenuTemplate de tal forma que essa classe possa suportar além de caracteres ASCII (comportamento default) o uso de caracteres Unicode UTF-8 (vide Tabela abaixo).**

**Assim, pede-se que seja criado um novo método MenuTemplate::setCursor(const string &Cursor,
const bool isUnicode) onde Cursor é uma string em Unicode e isUnicode é uma flag para controlar a
exibição em unicode. Use a variável booleana isUnicode para controlar ou não a exibição em ASCII ou
UNICODE. Para carregar o código UNICODE em string C++ use o exemplo abaixo**

No código MenuTemplate.cpp foi alterado a função setCursor para receber a string do cursor e o valor booleano que verifica a condição se é ou não Unicode.
Dentro da função foi adicionado a verificação com o “if else”. Se o valor for true é exibido o cursor em Unicode se não é exibido o “>”.
```
void MenuTemplate::setCursor(const string &Cursor, const bool isUnicode) {
...
		if (isUnicode) {
			this->Cursor = Cursor;
		} else {
			this->Cursor = “>”;
		}
    }
...
```

Dentro do código main.cpp foi alterado o valor da variável heart para "\xe2\x99\xa5 ". A chamada da função setCursor que passa a variável heart foi adicionada a variável booleana que funciona como uma flag que determina se é ou não Unicode.
```
MenuA.setCursor(heart, true);
```

E no MenuTemplate.hpp foi alterada apenas a chamada da função para incluir a variável booleana:
```
void setCursor(const string &Cursor, const bool isUnicode);
```


**Q6 ) (3,0 ponto) A implementação atual do MenuTemplate considera a inserção de um novo elemento sempre no final do vetor (vide método – MenuTemplate ::addEntry). Em PCs com pouca capacidade de processamento isso pode ser um problema uma vez que pode leva a um uso excessivo da memória para além do limite permitido. Para resolver esse problema, uma alternativa é o uso de uma estrutura de dados do Tipo Vetor Circular – i.e., um novo elemento é sempre adicionado na cabeça do vetor considerando-se que a cabeça do vetor sempre será o item menos usado. Assim, para essa questão modifique a implementação do método addEntry para que esse método passe a user um vetor circular.**

