Danilo Alves

Link para reposit�rio: https://github.com/DaniloAlv/MenuTemplate

QUEST�O 1)
Para a primeira quest�o inseri no menu principal do jogo, na classe main.cpp,
mais tr�s op��es que foram adicionadas ao final do menu.

    MenuA.addEntry("GAME_VIDEO_OPTIONS", "Video Options");
    MenuA.addEntry("GAME_SOUND_OPTIONS", "Sound Options");
    MenuA.addEntry("GAME_CONTROLS", "Controls"); 

QUEST�O 2)
Foi pedido para alterar a descri��o do menu do jogo.
Atrav�s da propriedade Description de MenuA, pode se alterar sua descri��o, no caso o t�tulo
do game tamb�m foi alterado atrav�s da propriedade Title.

	MenuA.Title = "\t\tNeverwinter Nights";
	MenuA.Description = "Neverwinter Nights Simple Menu";

QUEST�O 3)
Pedido a implementa��o do m�todo getCursor() para retornar o cursor setado.
Na classe MenuTemplate.cpp inseri o tal m�todo no corpo da classe como segue abaixo:

	string MenuTemplate::getCursor(){
		return this->Cursor;
	}
Logo depois no arquivo main.cpp, � feita a chamada do m�todo, ap�s o usu�rio inserir um cursor,
este mesmo � mostrado depois da escolha da op��o do menu.

	//Aqui retorna qual o cursor inserido para o menu
    cout << "Cursor do Menu: " << MenuA.getCursor() << endl;

QUEST�O 4)
Depois de ser pedido a contagem da quantidade de caracteres presentes na string do Cursor,
implementei o m�todo para fazer tal a��o, na classe MenuTemplate declarei o m�todo:

	int MenuTemplate::getSizeCursor(){

    		int sizeCursor = Cursor.length();

    		return sizeCursor;
	}
No main.cpp , depois do usu�rio escolher a op��o desejada no menu, � mostrado quantos
caracteres possui a string Cursor, que foi "setada" pelo pr�prio usu�rio

	 //Aqui retorna a quantidade de caracteres do cursor
    cout << "O cursor " << MenuA.getCursor() << " possui " << MenuA.getSizeCursor() << " caractere(s)." << endl;

QUEST�O 5)
Adicionar um m�todo para verificar e mostrar um caractere mesmo este sendo da categoria
Unicode UTF-8, para isso, foi feita uma edi��o no m�todo setCursor presente em MenuTemplate
No caso:
	
	if (strcmp(Cursor, this->heart)==0){
            		isUnicode = true;
            	   	this->Cursor = this->heart;
       	 }
        	else{
            		isUnicode = false;
            		this->Cursor = Cursor;
        	}

Onde verifico se as strings Cursor e heart possuem o mesmo conte�do caso verdade, posso mostrar
armazenando heart em Cursor, setando a string de heart em main.cpp.