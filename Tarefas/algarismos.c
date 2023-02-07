#include <stdio.h>


 //Elabore um programa que mostre na tela todos os múltiplos de 3, de 1 a 100. 
int cont(int num)
{
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}
int main()
{
    int num;
  printf("\nDigite um número positivo: ");
        scanf("%i", &num);
    printf("Número de digitos: %d = %d\n",
 num, cont(num));
    return 0;
}