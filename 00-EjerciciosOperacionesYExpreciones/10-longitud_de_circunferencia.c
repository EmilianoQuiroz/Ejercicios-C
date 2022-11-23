//Calcular la longitud de una circunferencia
//Formula = 2*PI * radio

#include<stdio.h>
//1.Declaramos una macro para guardar el valor de PI
#define PI 3.14

int main()
{
    /*2.Declaramos las variables que vamos a utilizar*/
    float longitud, radio;

    /*3.Pedimos al usuario que ingrese el radio*/
    printf("Ingrese el radio de su circunferencia\n");

    /*4.Guardamos el valor en la variable correspondiente*/
    scanf("%f", &radio);

    /*5.Hacemos la formula*/
    longitud = (2 * PI) * radio;

    /*6.Mostramos el valor por pantalla*/
    printf("La longitud de la circunferencia es %.2f \n", longitud);

    return 0;
}

