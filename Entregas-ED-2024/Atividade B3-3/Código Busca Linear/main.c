/*------------------------------------------------------------------------*/
/*             FATEC-São Caetano do Sul - Estrutura de Dados              */
/*                         Atividade: Busca Linear                        */
/*                   Objetivo: Buscar elemento em um array                */
/*                       Autores: Vinicius Crozato                        */
/*                                                                        */
/*                                                         Data:08/09/2024*/
/*------------------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int A[] = {40, 80, 10, 20, 30, 50, 70, 60};
    int x = 50;
    int i = 0;

    while (i <= sizeof(A)){

        if(x == A[i]){
            printf("Valor encontrado: %d", A[i]);
          return i;
        }

        i = i + 1;
    }
        printf("Valor não encontrado!");
        return -1;

} 
