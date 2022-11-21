//Aumentar el salario de una empresa un 10 %

#include<stdio.h>

int main()
{
    /*1.Primero inicializamos las variables que utlizaremos*/
    float salarioInicial, aumento, salarioFinal;

    /*2.Le pedimos al usuario que ingrese su salario actual*/
    printf("Ingrese su salario actual: \n");

    /*3.Guardamos el salario del empleado en la variable correspondiente*/
    scanf("%f", &salarioInicial);

    /*4.Hacer el calculo del aumento*/
    aumento = salarioInicial * .10;

    /*5.Sumarle el aumento al sualdo inicial*/
    salarioFinal = salarioInicial + aumento;

    /*6.Mostrar el resultado del aumento y del sueldo final*/
    printf("\nEl aumento recibido sera de %.2f usd llegando a un sueldo total de %.2f usd\n", aumento, salarioFinal);


    return 0; 
}