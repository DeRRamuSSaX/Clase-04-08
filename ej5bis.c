#include <stdio.h>
//Escribir un programa en C que cuente la cantidad de lineas del programa.

int main(int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");
  int c;
  int char_count = 0;
  int line_count = 0;
  int word_count = 0;
  int in_word = 0;
  // char descartar[100];
  while ((c = fgetc(fp)) != EOF) {
    if (c != '\n' && c != '\t' && c != ' ') {
      in_word = 1;
    } else {
      if (in_word != 0) {
        word_count++;
      }
      in_word = 0;
    }
    char_count++;
    if (c == '\n') {
      line_count++;
    }
  }
  fclose(fp);
  printf("Cantidad de chars: %d\n", char_count);
  printf("Cantidad de líneas: %d\n", line_count);
  printf("Cantidad de palabras: %d\n", word_count);
  return 0;
}
