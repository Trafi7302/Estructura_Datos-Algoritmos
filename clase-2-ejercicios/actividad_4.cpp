#include <stdio.h>

int valorInicial = 0;
int numeroIngresado;
int totalSuma;

int main(){

  do{
    printf("Ingrese un numero:\n");
    scanf("%d",&numeroIngresado);

   valorInicial = numeroIngresado;
   totalSuma += valorInicial;

  } while(numeroIngresado != 0);

  printf("La suma total es: %d", totalSuma);

  return 0;
}

/*
      FIBONACCI

      for(int i = 0 ; i < numero0 ; i++){
        printf("%d,", numanterior);
        numaux = numanterior;
        numanterior += num;
        num = numaux;
      }
    */