#include <stdio.h>
#define dolar 36.45
int main(int argc, char const *argv[])
{
    int tipo;
    float pasaje;
    printf ("ingrese el tipo de transporte: \n");
    printf ("1-bus \n");
    printf ("2-taxi \n");
    printf ("3-triciclo \n");
    scanf ("%d", &tipo);
    switch (tipo)
    {
    case 1:
      pasaje = 6;
      printf ("el precio del bus es: %.2f cordobas \n", pasaje);
      printf ("el precio del bus es: %.2f dolares", pasaje/dolar);
        break;
    case 2:
        pasaje = 60;
        printf ("el precio del bus es: %.2f cordobas \n", pasaje);
     printf ("el precio del bus es: %.2f dolares", pasaje/dolar);
      break;
      case 3:
        pasaje = 20;
        printf ("el precio del bus es: %.2f cordobas \n", pasaje);
        printf ("el precio del bus es: %.2f dolares", pasaje/dolar);
        break;
    default:
     printf ("Vehiculo no encontrado");
        break;
    }
    return 0;
}
