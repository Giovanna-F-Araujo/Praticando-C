#include <stdio.h>


//Elabore um programa que pergunte o salário do usuário e calcule quanto deve pagar de imposto de renda, mensalmente, exibindo na tela o valor a ser pago.
float sal; 

int main() {
  printf("Insira o valor do seu salário: ");
  scanf("%f", &sal);
if (sal <= 1903.98)
  printf("Isento do imposto de renda");

if (sal < 2826.65 &&  sal > 1903.99)
  printf("Seu imposto é de %.2f", sal * 0.075);

if (sal < 3751.05 && sal > 2826.66)
  printf("Seu imposto é de %.2f", sal * 0.15);

if (sal < 4664.68 && sal > 3751.06)
  printf("Seu imposto é de %.2f", sal * 0.225);

if (sal >= 4664.68)
  printf("Seu imposto é de %.2f", sal * 0.275);

  else return (0);



}