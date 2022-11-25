//Hipotenusa de un triangulo rectangulo
/*Calcular la hipotenusa de un triangulo rectangulo pidiendole al usuario el valor de sus dos catetos*/
#include<stdio.h>
#include<math.h>

int main()
{
    /*1.Declaramos las variables a utilizar*/
    float cateto1,cateto2,hipotenusa;

    /*2.Le pedimos al usuario que digite el valor de los dos catetos y los guardamos en sus respectivas variables*/
    printf("Digite el valor de los dos catetos:\n");
    scanf("%f %f", &cateto1, &cateto2);

    /*3.Hacemos el calculo*/
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    /*4.Mostramos el resultado por pantalla*/
    printf("El valor de la hipotenuesa es de %.2f \n", hipotenusa);


    return 0;
}