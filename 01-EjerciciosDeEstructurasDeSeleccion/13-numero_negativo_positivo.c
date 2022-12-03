//Numero negativo y positivo
/*Pedirle al usuario que digite un numero, en base a ese numero determinar si es negativo o positivo e imprimirle un mensaje en pantalla con el resultado obtenido*/

#include<stdio.h>

int main()
{   
    int numero;

    printf("Digite un numero de tipo entero: \n");
    scanf("%i", &numero);

    if (numero > 0 )/*Si el numero es mayor a cero entonces es positivo*/
    {
        printf("\n El numero ingresado es positivo");
    }    
    else
    {/*Si la condicion anterior no se cumple entonces es porque el numero es menor a cero y por ende negativo*/
        printf("\nEl numero es negativo");
    }

    return 0;
}