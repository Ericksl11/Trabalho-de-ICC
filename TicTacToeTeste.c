#include <stdio.h>
#include <stdlib.h>

void printf_tabuleiro(char matPosi[3][3]){
    
    printf("========= JOGO DA VELHA =========\n\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n", matPosi[0][0],matPosi[0][1],matPosi[0][2]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n", matPosi[1][0],matPosi[1][1],matPosi[1][2]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n", matPosi[2][0],matPosi[2][1],matPosi[2][2]);
    printf("\t     |     |     \n");

}

#define jogador 'X'
#define maquina 'O'


// SISTEMA MINIMAX

// Verifica se ainda existem jogadas disponíveis
int movimentosRestantes(char matPosi[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matPosi[i][j] != 'X' && matPosi[i][j] != 'O')
                return 1;
    return 0;
}


// Avalia o estado do tabuleiro
int avaliar(char matPosi[3][3]) {

    // Linhas
    for (int i = 0; i < 3; i++) {
        if (matPosi[i][0] == matPosi[i][1] &&
            matPosi[i][1] == matPosi[i][2] &&
            (matPosi[i][0] == jogador || matPosi[i][0] == maquina)) {

            if (matPosi[i][0] == maquina) return 10;
            else return -10;
        }
    }

    // Colunas
    for (int j = 0; j < 3; j++) {
        if (matPosi[0][j] == matPosi[1][j] &&
            matPosi[1][j] == matPosi[2][j] &&
            (matPosi[0][j] == jogador || matPosi[0][j] == maquina)) {

            if (matPosi[0][j] == maquina) return 10;
            else return -10;
        }
    }

    // Diagonal principal
    if (matPosi[0][0] == matPosi[1][1] &&
        matPosi[1][1] == matPosi[2][2] &&
        (matPosi[0][0] == jogador || matPosi[0][0] == maquina)) {

        if (matPosi[0][0] == maquina) return 10;
        else return -10;
    }

    // Diagonal secundária
    if (matPosi[0][2] == matPosi[1][1] &&
        matPosi[1][1] == matPosi[2][0] &&
        (matPosi[0][2] == jogador || matPosi[0][2] == maquina)) {

        if (matPosi[0][2] == maquina) return 10;
        else return -10;
    }

    return 0;
}



 int minimax(char matPosi[3][3], int isMax) {

    int score = avaliar(matPosi);

    // Caso terminal: vitória ou derrota
    if (score == 10 || score == -10)
        return score;

    // Empate
    if (!movimentosRestantes(matPosi))
        return 0;

    if (isMax) { // Máquina (maximizador)
        int melhor = -1000;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matPosi[i][j] != 'X' && matPosi[i][j] != 'O') {
                    char backup = matPosi[i][j];
                    matPosi[i][j] = maquina;

                    int valor = minimax(matPosi, 0);
                    melhor = (valor > melhor) ? valor : melhor;

                    matPosi[i][j] = backup;
                }
            }
        }
        return melhor;
    } 
    else { // Jogador (minimizador)
        int melhor = 1000;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matPosi[i][j] != 'X' && matPosi[i][j] != 'O') {
                    char backup = matPosi[i][j];
                    matPosi[i][j] = jogador;

                    int valor = minimax(matPosi, 1);
                    melhor = (valor < melhor) ? valor : melhor;

                    matPosi[i][j] = backup;
                }
            }
        }
        return melhor;
    }
}



int melhorJogada(char matPosi[3][3]) {
    int melhorValor = -1000;
    int posicao = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matPosi[i][j] != 'X' && matPosi[i][j] != 'O') {
                char backup = matPosi[i][j];
                matPosi[i][j] = maquina;

                int valor = minimax(matPosi, 0);
                matPosi[i][j] = backup;

                if (valor > melhorValor) {
                    melhorValor = valor;
                    posicao = (i * 3 + j + 1);
                }
            }
        }
    }
    return posicao;
}



void main(){
    
    // Matriz declarada
    char matPosi[3][3];

    matPosi[0][0] = '1';
    matPosi[0][1] = '2';
    matPosi[0][2] = '3';
    matPosi[1][0] = '4';
    matPosi[1][1] = '5';
    matPosi[1][2] = '6';
    matPosi[2][0] = '7';
    matPosi[2][1] = '8';
    matPosi[2][2] = '9';
    
    // Variável de quem começa o jogo
    int escolha = 0;
    
    // Variável das jogadas do jogador
    int jogada;
    
    // Variável de vitória
    int win = 0;

    // Variável para reiniciar o jogo
    int jogar = 1;

    // Jogador que esta jogando
    char jogador_vez;

    // Troca dos jogadores
    int troca = 0;
    
    // Armazenar a melhor jogada da maquina
    int jogada_maquina;

    // Contador de jogadas
    int cont = 0;


        // Reiniciar o jogo
        while (jogar == 1)
        {

            // Sistema do jogo
            while (win != 1)
            {   

                if (troca == 1)
                {
                    // Troca dos jogadores entre humano - maquina
                    if (jogador_vez == jogador)
                    {
                        jogador_vez = maquina;
                    }
                    else
                    {
                        jogador_vez = jogador;
                    }

                }
                    
                    // Trocar o jogador após cada rodada
                    if (escolha == 0)
                    {
                        printf("\nQuem deseja comecar o jogo?\n");
                        printf("1- Humano\n2- Maquina\n");
                        scanf("%d", &escolha);
                    
                    // Definir quem começa
                    if (escolha == 1)
                    {
                        jogador_vez = jogador;
                    }
                    else
                    {
                        jogador_vez = maquina;
                    }
                    }
                    
                    

                printf_tabuleiro(matPosi);
                
                
                    // Vez do jogador e vez da maquina
                    if (jogador_vez == jogador)
                    {
                        printf("\nEscolha uma posicao para jogar!\n");
                        scanf("%d", &jogada);
                    }
                    else if (jogador_vez == maquina)
                    {
                        if (cont < 9)
                        {                            
                            jogada_maquina = melhorJogada(matPosi);
                            jogada = jogada_maquina;
                            printf("\n");
                            printf("A jogada da maquina foi: %d\n\n", jogada);
                        }
                        
                        
                    }
                    
                

                // Verificar se a jogada é válida dentro do tabuleiro
                if (jogada < 0 || jogada > 9)
                {
                    printf("POSICAO INVALIDA!\n");
                    printf("ESCOLHA NOVAMENTE...\n");
                    scanf("%d", &jogada);
                }

                // Verificar se a posição esta ocupada
                switch (jogada)
                {
                case 1:
                if (matPosi[0][0] == jogador || matPosi[0][0] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                    break;

                case 2:
                if (matPosi[0][1] == jogador || matPosi[0][1] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                case 3:
                if (matPosi[0][2] == jogador || matPosi[0][2] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                case 4:
                if (matPosi[1][0] == jogador || matPosi[1][0] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                case 5:
                if (matPosi[1][1] == jogador || matPosi[1][1] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                case 6:
                if (matPosi[1][2] == jogador || matPosi[1][2] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                case 7:
                if (matPosi[2][0] == jogador || matPosi[2][0] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                case 8:
                if (matPosi[2][1] == jogador || matPosi[2][1] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                case 9:
                if (matPosi[2][2] == jogador || matPosi[2][2] == maquina)
                    {
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        scanf("%d", &jogada);
                    }
                break;

                
                default:
                break;
                }
                
                

                // Atribuir X ou O no tabuleiro
                switch (jogada)
                {
                    case 1:
                    
                        matPosi[0][0] = jogador_vez;
                    
                    break;
                    
                    case 2:
                    
                        matPosi[0][1] = jogador_vez;                    
                    
                    break;

                    case 3:

                        matPosi[0][2] = jogador_vez;
                        
                    break;
                    
                    case 4:

                        matPosi[1][0] = jogador_vez;
                        
                    break;
                    
                    case 5:

                        matPosi[1][1] = jogador_vez;
                        
                    break;
                    
                    case 6:

                        matPosi[1][2] = jogador_vez;
                        
                    break;
                    
                    case 7:

                        matPosi[2][0] = jogador_vez;
                        
                    break;
                    
                    case 8:

                        matPosi[2][1] = jogador_vez;
                            
                    break;
                    
                    case 9:

                        matPosi[2][2] = jogador_vez;
                            
                    break;
                            
                default:
                break;
                }
                
                troca = 1;

                // Checagem de vitórias 
                
                // -- cima
                if (matPosi[0][0] ==  matPosi[0][1]  && matPosi[0][1] == matPosi[0][2]) 
                {
                    if (matPosi[0][0] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                    
                // | esquerda
                else if (matPosi[0][0] ==  matPosi[1][0]  && matPosi[1][0] == matPosi[2][0]) 
                {
                    if (matPosi[0][0] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                
                // -- meio
                else if (matPosi[1][0] ==  matPosi[1][1]  && matPosi[1][1] == matPosi[1][2]) 
                {
                    if (matPosi[1][0] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                
                // -- baixo
                else if (matPosi[2][0] ==  matPosi[2][1]  && matPosi[1][0] == matPosi[2][2]) 
                {
                    if (matPosi[2][0] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                
                // | meio
                else if (matPosi[0][1] ==  matPosi[1][1]  && matPosi[1][1] == matPosi[2][1]) 
                {
                    if (matPosi[0][1] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                
                // | direita
                else if (matPosi[0][2] ==  matPosi[1][2]  && matPosi[1][2] == matPosi[2][2]) 
                {
                    if (matPosi[0][2] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                
                // \ diagonal
                else if (matPosi[0][0] ==  matPosi[1][1]  && matPosi[1][1] == matPosi[2][2]) 
                {
                    if (matPosi[0][0] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                
                // / diagonal
                else if (matPosi[0][2] ==  matPosi[1][1]  && matPosi[1][1] == matPosi[2][0]) 
                {
                    if (matPosi[0][2] == maquina)
                    {
                        printf("\nA MAQUINA GANHOU!!!\n");
                    }
                    else
                    {
                        printf("O JOGADOR GANHOU!!!");
                    }
                    printf("\n");                    
                    
                    win = 1;
                }
                
                // empate
                else if (cont == 8)
                {
                    printf("\nEMPATOU!!\n");
                    printf("\n");
                    win = 1;
                }
  
                cont ++;
            }
            
            printf_tabuleiro(matPosi);

            matPosi[0][0] = '1';
            matPosi[0][1] = '2';
            matPosi[0][2] = '3';
            matPosi[1][0] = '4';
            matPosi[1][1] = '5';
            matPosi[1][2] = '6';
            matPosi[2][0] = '7';
            matPosi[2][1] = '8';
            matPosi[2][2] = '9';
            
            win = 0;

            cont = 0;

            escolha = 0;

            printf("\n| <1- Novo Jogo>        |\n");
            printf("| <2- Sair>             |\n");
            printf("\n");
            scanf("%d", &jogar);
    
        }
    
}