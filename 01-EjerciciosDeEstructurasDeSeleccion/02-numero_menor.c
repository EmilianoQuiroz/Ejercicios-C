//Calcular el menor de dos numeros

#include<stdio.h>

int main()
{
    /*1.Definimos las variables a utilizar*/
    int numero1, numero2;

    /*2.Le pedimos al usuario que digite dos numeros y luego los guardamos en sus respectivas variables*/
    printf("Digite dos numeros: \n");
    scanf("%i", &numero1, &numero2);

    /*3.Ejecutamos el condicional*/
    if (numero1 > numero2)
    {   /*Si el numero 1 es menor al numero 2 ejecutamos el siguiente printf*/
        printf("El numero es menor es %i", numero1);
    }
    else
    {   /*Si no se cumple la condicion anterior ejecutamos el siguiente printf*/
        printf("El numero menor es %i", numero2);
    }


    return 0;
}