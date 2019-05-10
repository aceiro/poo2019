### Faculdade: Asser (Rio Claro - SP) - Curso: Sistemas da Informação - Disciplina: POO (3º Período)

Aluno: Andrew Vianna Carrazzone - POO Prova 1 - Link para respositório: *<https://github.com/aDwCarrazzone/MenuTemplate>*

------

##### *Respostas:*

### 1. (1,0 ponto) Adicionar para o menu principal as seguintes opções: Video Options; SoundOptions; Controls.

	main.cpp
	
		Linhas 34 ~ 36:
			
			MenuA.addEntry("GAME_OPTIONS", " Game options");
			MenuA.addEntry("GAME_VIDEO_OPTIONS", " Game video options");
			MenuA.addEntry("GAME_SOUND_OPTIONS", " Game sound options");

### 2. (1,0 ponto) Modificar a descrição do Menu do game para “Neverwinter Nights Simple Menu”

	main.cpp
	
		Linha 25:

			MenuA.Title = "\t\tNeverwinter Nights Simple Menu";
	
### 3. (1,0 ponto) A classe MenuTemplate possui inúmeros métodos (ver arquivo MenuTemplate.hpp).Contudo, nem todos os métodos foram implementados. Um deles é o método getCursor() que retornaa string associada com o cursor definido inicialmente. Sua atividade aqui nessa questão é implementaressa rotina getCursor para retornar e então exibi-la no programa main.cpp.

	main.cpp

		Linha 30:
		
			MenuA.addEntry("MENU_CURSOR", MenuA.getCursor());
	
		Linhas 456 ~ 458:
	
			string MenuTemplate::getCursor(){
			return this->Cursor;
			}
	
### 4. (1,0 ponto) Adicione para a classe  MenuTemplate  a possibilidade de contar a quantidade decaracteres que existem na string do cursor do menu. Para isso, crie um atributo e um método quearmazene e retorne respectivamente a quantidade de caracteres existente na string do cursor. O nome davariável e método faica a critério do aluno.

	 main.cpp:
	
		Linha 42:
	
			cout << "Chosen Option: " << MenuA.displayGetName() << " | Current Cursor Length: " << MenuA.getCursorLength() << endl;

	 MenuTemplate.hpp
	
		Linha 148:
		
			int CursorLength;
			
		Linhas 339 ~ 341:
		
			void setCursorLength(const int CursorLength);

			int getCursorLength();
	
### 5. (3,0 ponto) Por padrão, a biblioteca MenuTemplate monta um menu de opções que exibe caracteres ASCII através da String definida em setCursor. Para melhorar a apresentação do Menu é importante poder adicionar outros tipos de caracteres. Nesse caso, sua tarefa aqui é definir um método adicional para a classe MenuTemplate de tal forma que essa classe possa suportar além de caracteresASCII (comportamento default) o uso de caracteres Unicode UTF-8 (vide Tabela abaixo).

	A questão 5 eu não consegui fazer funcionar no windows.
