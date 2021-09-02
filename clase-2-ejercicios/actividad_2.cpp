#include <stdio.h>

int numero;

int main(){

  printf("Ingresar un numero para comprobar si es par o no:\n");
  scanf("%d", &numero);

  if(numero%2 == 0){
    printf("El numero ingresado (%d) es PAR!!", numero);
  } else{
    printf("El numero ingresado (%d) es IMPAR!!", numero);
  }

  return 0;
}