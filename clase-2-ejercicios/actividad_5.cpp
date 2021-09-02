#include <stdio.h>

int numero;

int main(){

  printf("Ingrese un numero para hallar los divisores de este:\n");
  scanf("%d", &numero);

  printf("Los numeros capaces de dividir al %d son:\nEl 1,", numero);
  for(int i = 2; i < numero; i++){
    if(numero % i == 0){
      printf(" el %d,", i);
    }
  }
  printf(" y el propio %d.\n", numero);

  return 0;
}