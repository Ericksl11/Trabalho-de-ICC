#include <stdio.h>
#include <stdlib.h>


void main(){
    
    // Matriz declarada
    int matPosi[3][3];
    
    // Contador para os valores da matriz
    int cont=1;
    
    // Escolha do jogador X ou O
    char choice;
    
    // Variável das jogadas do jogador
    int jogada;
    

    // Atribuindo os valores da matriz
    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){
             matPosi[j][i] = cont++;
        }
    }

    // = Print dos valores da matriz =
    
    // for (int i=0; i<=2; i++){
    //    for (int j=0; j<=2; j++){
    //         printf("%d", matPosi[j][i]);
    //    }
    //    printf("\n");
    //}
    


    printf("========== JOGO DA VELHA ==========\n");
    printf("\n=== Voce deseja ser (O) ou (X)? ===\n");
    scanf("%c", &choice);
    
    
    printf("\n     |     |     \n");
    printf("  %d  |  %d  |  %d  \n", matPosi[0][0],matPosi[1][0],matPosi[2][0]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %d  |  %d  |  %d  \n", matPosi[0][1],matPosi[1][1],matPosi[2][1]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %d  |  %d  |  %d  \n", matPosi[0][2],matPosi[1][2],matPosi[2][2]);
    printf("     |     |     \n");
    
    printf("\nEscolha uma posicao para jogar!\n");
    scanf("%d", &jogada);


    switch (jogada)
    {
    case 1:
        matPosi[0][0] = choice;
        break;
    
    case 2:
        matPosi[1][0] = choice;
        break;
    
    case 3:
        matPosi[2][0] = choice;
        break;
    
    case 4:
        matPosi[0][1] = choice;
        break;

    case 5:
        matPosi[1][1] = choice;
        break;

    case 6:
        matPosi[2][1] = choice;
        break;

    case 7:
        matPosi[0][2] = choice;
        break;

    case 8:
        matPosi[1][2] = choice;
        break;

    case 9:
        matPosi[2][2] = choice;
        break;



    default:
        break;
    }

    printf("\n     |     |     \n");
    printf("  %d  |  %d  |  %d  \n", matPosi[0][0],matPosi[1][0],matPosi[2][0]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %d  |  %d  |  %d  \n", matPosi[0][1],matPosi[1][1],matPosi[2][1]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %d  |  %d  |  %d  \n", matPosi[0][2],matPosi[1][2],matPosi[2][2]);
    printf("     |     |     \n");

    system("pause");   
}