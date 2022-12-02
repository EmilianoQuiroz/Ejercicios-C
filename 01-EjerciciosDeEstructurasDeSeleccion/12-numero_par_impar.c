//Numero par o impar
/*Pedirle un numero a un usuario y determinar si es par o impar*/

#include<stdio.h>

int main()
{
    /*1.Declaramos las variables que vamos a utlizar*/
    int numero;

    /*2.Pedimos al usuario que nos digite un numero por pantalla*/
    printf("Digite un numero: \n");

    /*3.Guardamos el numero en la variable que hemos creado*/
    scanf("%i", &numero);

    /*4.Ejecutamos el condicional if else*/
    if (numero%2 == 0)
    {/*Si el residuo de numero es igual a cero quiere decir que el numero es par, en ese caso ejecutamos el siguiente printf*/
        printf("El numero es par");
    }
    else/*En caso de no cumplirse la condicion anterior anterior quiere decir que el numero es impar, en ese caso ejecutamos el siguiente printf*/
    {
        printf("El numero es impar");
    }
    


    return 0; 
}