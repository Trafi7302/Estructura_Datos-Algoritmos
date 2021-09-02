#include <stdio.h>

#define pi 3.14   // decalaración de dato macro pi con valor 3.14
int edad;
char frase[15]; 

int main(){
  printf("Hola Mundo!!\nIngrese su edad:\n");
  // printf("%f", pi);
  // puts
  scanf("%d", &edad);
  printf("La edad es: %d\n", edad);

  return 0;
}