#include <stdio.h>
//Escribir un programa en C que cuente la cantidad de caracteres ingresados por entrada est ́andar.

int main(void) {
  int c;
  int char_count = 0;
  while ((c = getchar()) != EOF) {
    char_count++;
  }
  //printf("Espacio %c: %d\n", );
  printf("Cantidad de chars: %d\n", char_count);
  return 0;
}
