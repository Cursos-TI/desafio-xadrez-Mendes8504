#include <stdio.h>


int main() {
    
        //Declarando e iniciando as variaveis com valor 0
    int t = 0, b = 0, r = 0, c = 0;


        //Laço de repetição simulando a movimentação da Torre
    printf("Torre moveu-se para:\n");
    for (t ; t < 5; t++)
    {
    printf("Direita\n");
    }


        printf("--------------\n");


        //Laço de repetição simulando a movimentação do Bisbo
    printf("Bispo moveu-se para:\n");
    while (b < 5)
    {
        printf("Cima, Direita\n");
        b++;
    }


        printf("--------------\n");


         //Laço de repetição simulando a movimentação da Rainha
    printf("Rainha se moveu para:\n");
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r <= 7);
    

            printf("--------------\n");


         //Laço de repetição simulando a movimentação do Cavalo
    printf("Cavalo se moveu para:\n");
    for (c; c < 1; c++)
    {
        while (c < 2)
        {
            printf("Baixo\n");
            c++;
        }
        
        printf("Esquerda\n");
    }
    
    
    return 0;
}
