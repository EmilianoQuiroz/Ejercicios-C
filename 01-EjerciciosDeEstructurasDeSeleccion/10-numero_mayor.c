//Numero mayor
/*Pedirle al usuario dos numeros, en bases a esos numeros definir cual es el mayor y mostrar el resultado por pantalla*/

#include<stdio.h>

int main()
{
    /*1.Declaramos las variables a utilizar*/
    int numero1, numero2;

    /*2.Pedimos al usuario que digite dos numeros*/
    printf("Digite dos numeros\n");

    /*3.Guardamos los datos ingresados en las variables correspondientes*/
    scanf("%i", &numero1, &numero2);

    /*4.Ejecutamos el condicional*/
    if(numero1 > numero2){/*Si numero1 es mas grande que numero2 ejecutamos el siguiente printf*/
        printf("El numero mayor es %i", numero1);
    }
    else{/*Si la condicion anterior no se cumple ejecutamos el siguiente printf*/
        printf("El numero mayor es %i", numero2);
    }

    return 0;
}