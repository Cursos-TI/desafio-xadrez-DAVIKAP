#include <stdio.h>

int main() {
    
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;
    int cavalo2 = 1;
    
    while (torre <= 5) {
        printf("Torre movida para direita %d casa(s)\n", torre);
        torre++;
    }

    do
    {
        printf("Bispo movido para cima e para a direita %d casa(s)\n", bispo);
        bispo++;
    } while (bispo <= 5);

    for (rainha; rainha <= 8; rainha++)
    {
        printf("Rainha movida para a esquerda %d casa(s)\n", rainha);
    } 
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

        do {
        printf("Cavalo movido para esquerda\n");
           
            for (cavalo = 1; cavalo <= 2; cavalo++) {
            printf("Cavalo movido para baixo\n");
            }

        } while (cavalo2 < 1);

        for (cavalo = 1; cavalo >= 1; cavalo--) {

            while (cavalo2 <= 2)
            {
            printf("Cavalo para Baixo\n");
            cavalo2++;
            }
        printf("Cavalo para Esquerda\n");
        }  

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
