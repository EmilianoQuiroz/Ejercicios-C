/*Convertir grados celsius a grados fahrenheit*/

#include<stdio.h>

int main()
{
    /*1.Creamos las variables a utilizar*/
    float temperatura, gradosFahrenheit, gradosCelsius;

    /*2.Pedimos al usuario que ingrese una temperatura en celsius y la guardamos dentro de la variable correspondiente*/
    printf("Ingrese una temperatura en grados celsius: \n");
    scanf("%f", &gradosCelsius);

    /*3.Hacemos la formula y calculamos*/
    gradosFahrenheit = 32 + (gradosCelsius * 1.8);

    /*4.Mostramos el resultado de la formula por pantalla*/
    printf("La temperatura ingrsada equivale a %.2f °F", gradosFahrenheit);

    return 0;
}