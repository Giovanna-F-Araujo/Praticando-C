#include <stdio.h>


//Elabore um programa que peça ao usuário para inserir um número inteiro positivo, e devolva o número de algarismos desse número.
int main() {
  int n;

  for(n = 3; n < 100; n= n+3)
  {
    printf("%d\n", n );
  }
  return(0);
}