//Calcular tarifa telefonica
/*Segun el monto que el usuario este dispuesto a pagar debemos calcular su estado de tarifa telefonica, estas pueden ser premiun, intermedia o basica (Usar if anidados)*/

#include<stdio.h>

/*1.Definimos las macros para los tipos de tarifa*/
#define Tarifa1 "Premiun"
#define Tarifa2 "Intermedia"
#define Tarifa3 "Basica"

int main()
{
    /*2.Definimos las variables que utilizaremos*/
    int precioAPagar; 
 

    /*3.Le pedimos al usuario que nos digite cuanto esta dispuesto a pagar por su plan*/
    printf("Cuanto esta dispuesto a pagar por el servicio?\n");

    /*4.Introducimos el valor ingresado en la variable*/
    scanf("%i", &precioAPagar);

    /*5.Ejecutamos el condicional IF*/
    if(precioAPagar >= 0 && precioAPagar <=200){
        printf("Su tipo de tarifa es %s \n", Tarifa3);
    }
    if(precioAPagar >= 201 && precioAPagar <= 500){
        printf("Su tipo de tarifa es %s \n", Tarifa2);        
    }
    if(precioAPagar >= 501 && precioAPagar <= 1000){
        printf("Su tipo de tarifa es %s \n", Tarifa1);
    }

    return 0;
}