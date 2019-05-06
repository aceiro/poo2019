## PROVA P1
### NOME: ALISSON D. R. SANTOS
Link do repositório MenuGame:

>  https://github.com/alissondrs1/MenuGame.git

Para compilar o código utilize o comando:

>  g++ main.cpp MenuGame/MenuGame.cpp MenuGame/Entry.cpp MenuGame/ExternFunctions/getChar.cpp -o Menu

Directive alterada para ``#define LINUX``.


**Descrições detalhadas sobre como as questões foram solucionadas:**

**Q1)** Com a Classe MenuGame declarada como ``MenuA``, utilizei o método ``addEntry`` para a implementação de novas opções em ``main.cpp``.

 ***

**Q2)** Semelhante à **Q1)**, com a Classe ``MenuGame`` (MenuA) modifiquei a descrição do Menu para  **``“Neverwinter Nights Simple Menu” ``**, ultilizando a rotina  ``Title`` em ``main.cpp``.

***
**Q3)** Em ``MenuGame/MenuGame.cpp``, implementei a rotina getCursor para que a mesma seja exibida no ``Main.cpp`` onde fiz a chamada da rotina ``getCursor`` para exibir a string associada.

***

**Q4)** Em ``MenuGame/MenuGame.hpp``, criei o atributo ``int cursorNuber`` para armazenar e retornar a quantidade de caracteres existente na string do cursor.
Logo em seguida Implementei os métodos ``void setCursorNumber(const int CursorNumber);`` e ``int getCursorNumber();`` , em ``MenuGame/MenuGame.hpp``.
Por fim, fiz a chamada do método em ``main.cpp``.

***

**Q5)** Em ``MenuGame/MenuGame.hpp``, criei um novo método chamado  ``MenuTemplate::setCursor(const string &Cursor,
const bool isUnicode)``,  para suportar caracteres ASCII (comportamento default) e caracteres Unicode UTF-8.
Em ``MenuGame.cpp`` fiz a implementção do método adicionando testes para definir se é ou não UNICODE. Utilizei a variável Boolena para exibir o cursor em ASCII ou UNICODE  e por fim em ``main.cpp`` declarei a constante ``const string heart = "\xe2\x99\xa5 ";`` para carregar o código em hexadecimal e pela classe atribuida como ``MenuA``, fiz a chamada do método ``setCursor`` usando a variável ``heart`` e logo em seguida, para a exibição utilizei `` MenuA.getCursor()``.

***