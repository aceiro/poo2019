Nome do aluno: Mileide Cristina Loureiro
Link para o reposit�rio: https://github.com/eideloureiro/MenuTemplate


Descri��o detalhada sobre como as quest�es foram solucionadas:

Q1) Adicionado=
	MenuA.addEntry("VIDEO_OPTIONS", "Video Options");
	MenuA.addEntry("SOUND_OPTIONS", "Sound Options");
	MenuA.addEntry("CONTROLS", "Controls");
nas linhas 35, 36 e 37 respectivamente.


Q2) Alterado a linha 25 de:
	MenuA.Title = "\t\tMenuTemplate 1.04";
para:
	MenuA.Title = "\t\tNeverwinter Nights Simple Menu";


Q3) Implementado rotina getCursor em MenuTemplate.cpp, linhas 522, 523 e 524
e chamando a exibi��o em main.cpp linha 44

Q4) Criado as fun��es setCursorLength e getCursorLength em MenuTemplate.cpp e criado a vari�vel int CursorLength em MenuTemplate.hpp para passa como parametro para as mesmas. Em main.cpp, chamado MenuA.getCursorLength() para impress�o do valor.