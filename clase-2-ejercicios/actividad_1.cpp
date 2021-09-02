#include <stdio.h>

int numero1;
int numero2;

int main(){

  printf("Ingresar 2 numeros de la forma x,y:\n");
  scanf("%d,%d", &numero1, &numero2);

  if(numero1 < numero2){
    printf("El numero %d es mayor que %d\n", numero2, numero1);
  } 
  
  if(numero1 > numero2){
    printf("El numero %d es mayor que %d\n", numero1, numero2);
  }

  if(numero1 == numero2){
    printf("Los dos numeros ingresados son iguales");
  }

  return 0;
}