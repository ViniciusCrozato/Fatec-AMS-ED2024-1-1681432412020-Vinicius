/*------------------------------------------------------------------------*/
/*             FATEC-São Caetano do Sul - Estrutura de Dados              */
/*                        Atividade: Busca Binária                        */
/*         Objetivo: Buscar elemento em um array de forma binária         */
/*                       Autores: Vinicius Crozato                        */
/*                                                                        */
/*                                                         Data:08/09/2024*/
/*------------------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int A[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int x = 50;

    int meio;
    int esq = 0;
    int dir = sizeof(A);

    while (esq <= dir){

        meio = (esq + dir) / 2;

        if(x == A[meio]){
            printf("Valor encontrado: %d", A[meio]);
          return meio;
        }
        else if(x > A[meio]){
            esq = meio + 1;
        }
        else{
            dir = meio - 1;
        }

    }

        printf("Valor não encontrado!");
        return -1;

}