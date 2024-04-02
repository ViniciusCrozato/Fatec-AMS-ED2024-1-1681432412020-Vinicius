#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int entrada(){
  int id_prod, qtd_prod;
  char nome_prod[50];
  float preco_prod;

  printf("-Insira o id do produto: \n");
  printf("-Insira o nome do produto: \n");
  printf("-Insira o quantidade do produto: \n");
  printf("-Insira o preço do produto: \n");
  printf("-Digite 5 para sair: \n");

  scanf("%d", &id_prod);
  scanf("%c", nome_prod);
  scanf("%d", &qtd_prod);
  scanf("%f", &preco_prod);

  
  return 0;
}
