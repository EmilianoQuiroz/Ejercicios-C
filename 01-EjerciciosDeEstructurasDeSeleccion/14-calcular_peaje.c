/*
Calcular el valor a pagar en el peaje segun el tipo de vehiculo
1-Particular - $500
2-Autobus - $1000
3-Motocicleta - $200
*/

#include<stdio.h>

int main()
{
    /*1.Iniciamos la variable que vamos a utilizar*/
    int tipoDeVehiculo;

    /*2.Hacemos un menu con las opciones que el usuario tiene */
    printf("1)particular: \n");
    printf("2)Autobus: \n");
    printf("3)Motocicleta: \n");
    printf("Elija una opcion: \n");
    
    /*3.Guardamos la opcion elegida por el usuario en la variable correspondiente*/
    scanf("%i", &tipoDeVehiculo);

    /*4.Ejecutamos el condicional switch*/
    switch (tipoDeVehiculo)
    {
    case 1:
        printf("Su tarifa a pagar es de $500");
        break;
    case 2:
        printf("Su tarifa a pagar es de $1000");
        break;
    case 3:
        printf("Su tarifa a pagar es de $200");
        break;
        default:
            printf("Digite un valor correcto");
        break;
    }
    return 0;
}