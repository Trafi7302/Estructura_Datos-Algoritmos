#include <stdio.h>

int numero1;
int numero2;
int numero3;

int main(){

  printf("Ingrese un primer numero:\n");
  scanf("%d", &numero1);
  printf("Ingrese el segundo numero:\n");
  scanf("%d", &numero2);
  printf("Ingrese el tercer numero:\n");
  scanf("%d", &numero3);

  if((numero1 > numero2) && (numero1 > numero3)){
    printf("El primer numero ingresado (%d) es el mayor.\n", numero1);
  }

  if((numero2 > numero1) && (numero2 > numero3)){
    printf("El segundo numero ingresado (%d) es el mayor.\n", numero2);
  }

  if((numero3 > numero1) && (numero3 > numero2)){
    printf("El tercer numero ingresado (%d) es el mayor.\n", numero3);
  }

  if((numero3 == numero1) && (numero3 == numero2)){
    printf("Los tres numeros ingresados son iguales\n");
  }



  return 0;
}