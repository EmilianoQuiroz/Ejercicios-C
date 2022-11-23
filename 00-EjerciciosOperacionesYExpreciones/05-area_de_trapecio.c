//Area de un trapecio
/*Pedirle al usuario las medidas necesarias para hacer el calculo del area del trapecio y mostrar el resultado en pantalla*/
#include<stdio.h>

int main()
{
    /*1.Iniciamos la variables que necesitaremos para hacer el calculo*/
    float baseMenor,baseMayor,altura,areaDelTrapecio;

    /*2.Pedimos al usuario que ingrese los datos necesarios*/
    printf("Ingrese la medida de la base menor \n");
    /*3.Ingresamos los datos en las variables correspondientes*/
    scanf("%f", &baseMenor);
    //Repetimos este proceso para cada dato que necesitemos  
    printf("Ingrese la medida de la base mayor \n");
    scanf("%f", &baseMayor);

    printf("Ingrese la medida de la altura \n");
    scanf("%f", &altura);

    /*4.Hacemos el calculo del area del trapecio*/
    areaDelTrapecio = ((baseMayor + baseMenor) * altura) / 2;

    /*5.Mostramos en pantalla el resultado*/
    printf("El area del trapecio es: %.2f",areaDelTrapecio);

    return 0; 
}