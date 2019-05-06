Danilo Alves

Link para repositório: https://github.com/DaniloAlv/MenuTemplate

QUESTÃO 1)
Para a primeira questão inseri no menu principal do jogo, na classe main.cpp,
mais três opções que foram adicionadas ao final do menu.

    MenuA.addEntry("GAME_VIDEO_OPTIONS", "Video Options");
    MenuA.addEntry("GAME_SOUND_OPTIONS", "Sound Options");
    MenuA.addEntry("GAME_CONTROLS", "Controls"); 

QUESTÃO 2)
Foi pedido para alterar a descrição do menu do jogo.
Através da propriedade Description de MenuA, pode se alterar sua descrição, no caso o título
do game também foi alterado através da propriedade Title.

	MenuA.Title = "\t\tNeverwinter Nights";
	MenuA.Description = "Neverwinter Nights Simple Menu";

QUESTÃO 3)
Pedido a implementação do método getCursor() para retornar o cursor setado.
Na classe MenuTemplate.cpp inseri o tal método no corpo da classe como segue abaixo:

	string MenuTemplate::getCursor(){
		return this->Cursor;
	}
Logo depois no arquivo main.cpp, é feita a chamada do método, após o usuário inserir um cursor,
este mesmo é mostrado depois da escolha da opção do menu.

	//Aqui retorna qual o cursor inserido para o menu
    cout << "Cursor do Menu: " << MenuA.getCursor() << endl;

QUESTÃO 4)
Depois de ser pedido a contagem da quantidade de caracteres presentes na string do Cursor,
implementei o método para fazer tal ação, na classe MenuTemplate declarei o método:

	int MenuTemplate::getSizeCursor(){

    		int sizeCursor = Cursor.length();

    		return sizeCursor;
	}
No main.cpp , depois do usuário escolher a opção desejada no menu, é mostrado quantos
caracteres possui a string Cursor, que foi "setada" pelo próprio usuário

	 //Aqui retorna a quantidade de caracteres do cursor
    cout << "O cursor " << MenuA.getCursor() << " possui " << MenuA.getSizeCursor() << " caractere(s)." << endl;

QUESTÃO 5)
Adicionar um método para verificar e mostrar um caractere mesmo este sendo da categoria
Unicode UTF-8, para isso, foi feita uma edição no método setCursor presente em MenuTemplate
No caso:
	
	if (strcmp(Cursor, this->heart)==0){
            		isUnicode = true;
            	   	this->Cursor = this->heart;
       	 }
        	else{
            		isUnicode = false;
            		this->Cursor = Cursor;
        	}

Onde verifico se as strings Cursor e heart possuem o mesmo conteúdo caso verdade, posso mostrar
armazenando heart em Cursor, setando a string de heart em main.cpp.
