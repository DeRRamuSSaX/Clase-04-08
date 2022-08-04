#include <stdio.h>
//Escribir un programa en C que imprima un men ́u con cinco opciones y una sexta para salir del programa. El programa imprime el men ́u y espera la entrada del usuario para elegir una de las seis opciones, imprime algo distinto seg ́un la opci ́on y repite el men ́u.

int main(int argc, char const *argv[]) {
  int a;
  while (1) {
    printf("Hola, elegí una opción:\n");
    printf("1. Matarte\n");
    printf("2. Matarte de nuevo\n");
    printf("3. Matarte por tercera vez\n");
    printf("4. Matarte una vez más\n");
    printf("5. Matarte por última vez\n");
    printf("6. No matarte\n\n");
    printf("Elegiste: ");
    scanf("%d", &a);
    // printf("\n");
    switch (a) {
      case 1:
      printf("Tirate de un puente\n");
      break;
      case 2:
      printf("Tirate de un décimo piso\n");
      break;
      case 3:
      printf("Pegate un tiro\n");
      break;
      case 4:
      printf("Escuchá Abel Pintos\n");
      break;
      case 5:
      printf("Volvé a tirarte de un décimo piso\n");
      break;
      case 6:
      printf("Elegiste la vida\n");
      return 0;
      default:
      printf("No seas boludo y elegí una opción\n");
    }
    printf("\n ------------\n\n");
  }

  return 0;
}
