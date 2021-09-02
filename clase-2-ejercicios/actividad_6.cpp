#include <stdio.h>

int numero;
int divisor = 2;

int main(){

  printf("Ingrese un numero:\n");
  scanf("%d", &numero);

  while( divisor <= numero){
  
    if(divisor == numero){
      printf("El numero %d es PRIMO!!\n", numero);
      break;
    }

    if((numero % divisor) == 0){
      printf("El numero ingresado no es primo.\n");
      break;
    }
    divisor++;
  }

  return 0;
}