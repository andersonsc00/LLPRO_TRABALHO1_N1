#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  
  char p1[18], p2[18], p3[18], p4[18], p5[18], p6[18], p7[18], p8[18]; 
  float valor_p1, valor_p2, valor_p3, valor_p4, valor_p5, valor_p6, valor_p7, valor_p8;
  int q_p1, q_p2, q_p3, q_p4, q_p5, q_p6, q_p7, q_p8;
  int codigo1[8], codigo2[8], codigo3[8], codigo4[8], codigo5[8], codigo6[8], codigo7[8], codigo8[8];

  float total;
  printf("Criar Nota Fiscal ");
  printf("\nNome do Produto: ");
  scanf("%s",&p1);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p1);  
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p1);
   
  
  printf("\nNome do Produto: ");
  scanf("%s",&p2);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p2);  
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p2);
 
  
  printf("\nNome do Produto: ");
  scanf("%s",&p3);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p3);
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p3);
 
  
  printf("\nNome do Produto: ");
  scanf("%s",&p4);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p4);  
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p4);
 
  
  printf("\nNome do Produto: ");
  scanf("%s",&p5);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p5);  
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p5);

  
  printf("\nNome do Produto: ");
  scanf("%s",&p6);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p6);  
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p6);

  
  printf("\nNome do Produto: ");
  scanf("%s",&p7);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p7);  
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p7);

  
  printf("\nNome do Produto: ");
  scanf("%s",&p8);
  printf("Valor do Produto: ");
  scanf("%f", &valor_p8);  
  printf("Quantidade do Produto: ");
  scanf("%d", &q_p8);
   
  
  total = valor_p1*q_p1 + valor_p2*q_p2 + valor_p3*q_p3 + valor_p4*q_p4 + valor_p5*q_p5 + valor_p6*q_p6 + valor_p7*q_p7 + valor_p8*q_p8;  
  
  
  printf("|%-8s |%-8s |%-15s |%-10s |%-10s|\n", "Código", "Quantidade", "Produto", "Preço Unitário", "Preço Total");
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo1, q_p1, valor_p1, p1, valor_p1*q_p1);
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo2, q_p2, valor_p2, p2, valor_p2*q_p2);
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo3, q_p3, valor_p3, p3, valor_p3*q_p3);
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo4, q_p4, valor_p4, p4, valor_p4*q_p4);
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo5, q_p5, valor_p5, p5, valor_p5*q_p5);
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo6, q_p6, valor_p6, p6, valor_p6*q_p6);
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo7, q_p7, valor_p7, p7, valor_p7*q_p7);
  printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f\n", codigo8, q_p8, valor_p8, p8, valor_p8*q_p8);
   printf("|%-8s |%-8s |%-15s |%-10s|%8.2f|\n", "", "", "Total", total);
  
  return 0;
}