//Meses del año
/*Pedirle al usuario que digite un numero del 1 al 12, dependiendo del numero que elija mostrar un mes del año*/

#include<stdio.h>

int main()
{
    /*1.Declaramos las variables que vamos a utilizar*/
    int numero;

    /*2.Pedimos al usuario que digite un numero del año*/
    printf("Digite un numero del 1 al 12:  \n");

    /*3.Guardamos el numero en la variable correspondiente*/
    scanf("%i", &numero);

    /*4.Ejecutamos el condicional while*/
    switch(numero)
    {
    case 1:
        printf("Enero");
        break;
    case 2:
        printf("Febrero");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Abril");
        break;    
    case 5:
        printf("Mayo");
        break;
    case 6:
        printf("Junio");
        break;
    case 7:
        printf("Julio");
        break;    
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Septiembre");
        break;
    case 10:
        printf("Octubre");
        break;
    case 11:
        printf("Noviembre");
        break;
    case 12:
        printf("Diciembre");
        break;
    default: 
        printf("No ingreso un numero valido");
        break;
    }
    

    return 0;
}