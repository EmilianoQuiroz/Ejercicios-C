//Media aritmetica
/*Calcular la media aritmetica de 3 numeros que un usuario digite por pantalla*/

#include<stdio.h>

int main()
{
    /*1.Iniciamos las variables que vamos a usar*/
    float numero1,numero2,numero3,mediaAritmetica;

    /*2.Pedimos al usuario que digite los tres numeros a calcular*/
    printf("Digite 3 numeros\n");

    /*3.Guardamos en las variables correspondientes los tres numeros ingresados*/
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    /*4.Calculamos la media aritmetica*/
    mediaAritmetica = (numero1 + numero2 + numero3) / 3;

    /*5.Mostramos en pantalla el resultado*/
    printf("La media aritmetica es %.2f", mediaAritmetica);

    return 0;
}