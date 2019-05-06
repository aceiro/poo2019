Nome do aluno: Mileide Cristina Loureiro
Link para o repositório: https://github.com/eideloureiro/MenuTemplate


Descrição detalhada sobre como as questões foram solucionadas:

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
e chamando a exibição em main.cpp linha 44

Q4) Criado as funções setCursorLength e getCursorLength em MenuTemplate.cpp e criado a variável int CursorLength em MenuTemplate.hpp para passa como parametro para as mesmas. Em main.cpp, chamado MenuA.getCursorLength() para impressão do valor.