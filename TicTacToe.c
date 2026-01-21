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
    
    // Contador para os valores da matriz
    int cont=1;
    
    // Escolha do jogador X ou O
    char jogador;
    
    // Variável das jogadas do jogador
    int jogada;
    
    // Variável de vitória
    int win=0;

    printf("========== JOGO DA VELHA ==========\n");
    printf("\n=== Voce deseja ser (O) ou (X)? ===\n");
    scanf("%c", &jogador);
    
    printf("\n     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", matPosi[0][0],matPosi[1][0],matPosi[2][0]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", matPosi[0][1],matPosi[1][1],matPosi[2][1]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", matPosi[0][2],matPosi[1][2],matPosi[2][2]);
    printf("     |     |     \n");
    
    while (win != 1)
    {
        
    
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
                    
                    }            break;
            
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
        
        printf("\n     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", matPosi[0][0],matPosi[1][0],matPosi[2][0]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", matPosi[0][1],matPosi[1][1],matPosi[2][1]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", matPosi[0][2],matPosi[1][2],matPosi[2][2]);
        printf("     |     |     \n");
            
        // -- cima
        if (matPosi[0][0] == jogador && matPosi[1][0] == jogador && matPosi[2][0] == jogador)
        {
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);        }

        // | esquerda
        else if (matPosi[0][0] == jogador && matPosi[0][1] == jogador && matPosi[0][2] == jogador) 
        {
            
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);
        }

        // -- meio
        else if (matPosi[0][1] == jogador && matPosi[1][1] == jogador && matPosi[2][1] == jogador)
        {
            
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);
        }

        // -- baixo
        else if (matPosi[0][2] == jogador && matPosi[1][2] == jogador && matPosi[2][2] == jogador)
        {
            
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);
        }

        // | meio
        else if (matPosi[1][0] == jogador && matPosi[1][1] == jogador && matPosi[1][2] == jogador)
        {
            
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);
        }

        // | direita
        else if (matPosi[2][0] == jogador && matPosi[2][1] == jogador && matPosi[2][2] == jogador)
        {
            
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);
        }

        // \ /
        else if (matPosi[0][0] == jogador && matPosi[1][1] == jogador && matPosi[2][2] == jogador)
        {
            
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);
        }

        // /
        
        else if (matPosi[2][0] == jogador && matPosi[1][1] == jogador && matPosi[0][2] == jogador)
        {
            
            printf("\nPARABENS!!! VOCE GANHOU!\n");
            printf("\n");
            system ("pause");
            printf("Para comecar um novo jogo pressione '1' ");
            scanf("%d", &win);
        }
        



    }
    
}