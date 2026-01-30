*Tic-Tac-Toe - Introdução Ciência da Computacao*

Integrantes
- Erick Leal  
- Estevao Cavalcante  
- Gabriel Duarte  
- Gabriel Almeida  

Descricao do Projeto

Este projeto implementa o jogo Tic-Tac-Toe (Jogo da Velha) no modo Jogador Humano vs Computador.  
O jogador humano enfrenta uma inteligencia artificial capaz de analisar o tabuleiro e realizar jogadas estrategicas, seguindo as regras tradicionais do jogo.

A inteligencia do computador foi desenvolvida utilizando o algoritmo Minimax, um metodo classico de tomada de decisao aplicado em jogos de dois jogadores. O algoritmo avalia todas as jogadas possiveis a partir do estado atual do tabuleiro, assumindo que ambos os jogadores sempre escolhem a melhor jogada disponivel. Dessa forma, o computador torna-se imbatavel, garantindo sempre o melhor resultado possivel.

Tecnologias Utilizadas
- Linguagem C
- Visual Studio Code
- MinGW
- Algoritmo Minimax
  
Compilacao e Execucao

Pre-requisitos
- Visual Studio Code
- MinGW instalado e configurado no sistema
- Extensoes no VS Code:
  - C/C++ (Microsoft)
  - C/C++ Compile Run (danielpinto8zz6)

Passo a Passo

1. Instale o Visual Studio Code;
2. Instale as extensoes mencionadas acima;
3. Baixe o MinGW em:  
   https://sourceforge.net/projects/mingw/files/latest/download
4. Execute o instalador do MinGW;
5. Selecione os pacotes:
   - mingw32-base-bin
   - mingw32-gcc-g++
6. Aplique as alteracoes em Installation -> Apply Changes;
7. Configure a variavel de ambiente Path, adicionando o caminho da pasta bin do MinGW  
   (exemplo: C:\MinGW\bin);
8. Abra a pasta do projeto no Visual Studio Code;
9. Execute o arquivo main.c pressionando F6.

Observacao sobre Acentuacao

Caso ocorram problemas com caracteres acentuados no terminal, altere o encoding do Visual Studio Code no canto inferior direito, trocando de UTF-8 para Western (ISO 8859-1).

Status do Projeto
Concluido  
Computador imbatavel utilizando Minimax
