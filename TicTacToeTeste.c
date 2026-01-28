#include <stdio.h>
#include <stdlib.h>


void main(){
    
    // Matriz declarada
    char matPosi[3][3];

    matPosi[0][0] = '1';
    matPosi[1][0] = '2';
    matPosi[2][0] = '3';
    matPosi[0][1] = '4';
    matPosi[1][1] = '5';
    matPosi[2][1] = '6';
    matPosi[0][2] = '7';
    matPosi[1][2] = '8';
    matPosi[2][2] = '9';
    
    // Variável de quem começa o jogo
    int escolha;
    
    // Escolha do jogador 
    char jogador = 'a';
    
    // Variável das jogadas do jogador
    int jogada;
    
    // Variável de vitória
    int win=0;

    // Variável para reiniciar o jogo
    int jogar = 1;


    printf("========== JOGO DA VELHA ==========\n");
    

    
        // Teste de reiniciar o jogo
        while (jogar == 1)
        {
            
            
            

            // Sistema do jogo
            while (win != 1)
            {   

                    
                    
                    if (jogador == 'a')
                    {
                        printf("\n=== Quem deseja comecar o jogo? <1- Humano || 2- Maquina> ===\n");
                        scanf("%d", &escolha);
                        
                        jogador = 'X';
                        
                        
                    }

                    

                printf("\t     |     |     \n");
                printf("\t  %c  |  %c  |  %c  \n", matPosi[0][0],matPosi[1][0],matPosi[2][0]);
                printf("\t_____|_____|_____\n");
                printf("\t     |     |     \n");
                printf("\t  %c  |  %c  |  %c  \n", matPosi[0][1],matPosi[1][1],matPosi[2][1]);
                printf("\t_____|_____|_____\n");
                printf("\t     |     |     \n");
                printf("\t  %c  |  %c  |  %c  \n", matPosi[0][2],matPosi[1][2],matPosi[2][2]);
                printf("\t     |     |     \n");

                printf("\nEscolha uma posicao para jogar!\n");
                scanf("%d", &jogada);

                
            
                switch (jogada)
                {
                    case 1:
                    if (matPosi[0][0] == jogador && matPosi[0][0] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                    else
                    {
                        matPosi[0][0] = jogador;
                    }
                    
                    
                    break;
                    
                    case 2:
                    if (matPosi[1][0] == jogador && matPosi[1][0] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                    else
                    {
                        matPosi[1][0] = jogador;
                        
                    }
                    break;
                    
                    case 3:
                    if (matPosi[2][0] == jogador && matPosi[2][0] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                    else
                    {
                        matPosi[2][0] = jogador;
                        
                    }            
                    break;
                    
                    case 4:
                    if (matPosi[0][1] == jogador && matPosi[0][1] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                    else
                    {
                        matPosi[0][1] = jogador;
                        
                    }
                    break;
                    
                    case 5:
                    if (matPosi[1][1] == jogador && matPosi[1][1] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                    else
                            {
                                matPosi[1][1] = jogador;
                            
                            }
                    break;
                    
                    case 6:
                    if (matPosi[2][1] == jogador && matPosi[2][1] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                    else
                    {
                        matPosi[2][1] = jogador;
                        
                    }
                    break;
                    
                    case 7:
                    if (matPosi[0][2] == jogador && matPosi[0][2] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                    else
                    {
                        matPosi[0][2] = jogador;
                        
                    }
                    break;
                    
                    case 8:
                    if (matPosi[1][2] == jogador && matPosi[1][2] == jogador){
                        printf("POSICAO JA OCUPADA!\n");
                        printf("ESCOLHA NOVAMENTE...\n");
                        system ("pause");
                    }
                        else
                        {
                                matPosi[1][2] = jogador;
                                
                            }
                    break;
                    
                    case 9:
                    if (matPosi[2][2] == jogador && matPosi[2][2] == jogador){
                                printf("POSICAO JA OCUPADA!\n");
                                printf("ESCOLHA NOVAMENTE...\n");
                                system ("pause");
                            }
                            else
                            {
                                matPosi[2][2] = jogador;
                                
                            }
                            break;
                            
                    default:
                    break;
                }
                
                // Checagem de vitórias 
                
                // -- cima
                if (matPosi[0][0] == jogador && matPosi[1][0] == jogador && matPosi[2][0] == jogador)
                {
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;        
                }
                    
                // | esquerda
                else if (matPosi[0][0] == jogador && matPosi[0][1] == jogador && matPosi[0][2] == jogador) 
                {
        
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;
                }
                
                // -- meio
                else if (matPosi[0][1] == jogador && matPosi[1][1] == jogador && matPosi[2][1] == jogador)
                {
                    
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;
                }
                
                // -- baixo
                else if (matPosi[0][2] == jogador && matPosi[1][2] == jogador && matPosi[2][2] == jogador)
                {
                    
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;
                }
                
                // | meio
                else if (matPosi[1][0] == jogador && matPosi[1][1] == jogador && matPosi[1][2] == jogador)
                {
                    
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;
                }
                
                // | direita
                else if (matPosi[2][0] == jogador && matPosi[2][1] == jogador && matPosi[2][2] == jogador)
                {
                    
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;
                }
                
                // \ diagonal
                else if (matPosi[0][0] == jogador && matPosi[1][1] == jogador && matPosi[2][2] == jogador)
                {
                    
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;
                }
                
                // / diagonal
                else if (matPosi[2][0] == jogador && matPosi[1][1] == jogador && matPosi[0][2] == jogador)
                {
                    
                    printf("\nPARABENS!!! VOCE GANHOU!\n");
                    printf("\n");
                    win = 1;
                }
                
                // empate
                else
                {
                    printf("EMPATE");
                }
                
                
                if (jogador == 'X')
                {
                    jogador = 'O';
                }
                else
                {
                    jogador = 'X';
                }
                
                
                
                
            }
            
                printf("\t     |     |     \n");
                printf("\t  %c  |  %c  |  %c  \n", matPosi[0][0],matPosi[1][0],matPosi[2][0]);
                printf("\t_____|_____|_____\n");
                printf("\t     |     |     \n");
                printf("\t  %c  |  %c  |  %c  \n", matPosi[0][1],matPosi[1][1],matPosi[2][1]);
                printf("\t_____|_____|_____\n");
                printf("\t     |     |     \n");
                printf("\t  %c  |  %c  |  %c  \n", matPosi[0][2],matPosi[1][2],matPosi[2][2]);
                printf("\t     |     |     \n");

            matPosi[0][0] = '1';
            matPosi[1][0] = '2';
            matPosi[2][0] = '3';
            matPosi[0][1] = '4';
            matPosi[1][1] = '5';
            matPosi[2][1] = '6';
            matPosi[0][2] = '7';
            matPosi[1][2] = '8';
            matPosi[2][2] = '9';
            
            win = 0;
            
            jogador = 'a';

            printf("\n| <1- Novo Jogo>        |\n");
            printf("| <2- Sair>             |\n");
            printf("\n");
            scanf("%d", &jogar);
    
        }
            
    
}