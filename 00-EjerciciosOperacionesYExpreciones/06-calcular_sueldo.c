//Calcular sueldo
/*Dadas las horas trabajadas de una persoma y el valor por hora calcular el salario total e imprimirlo en pantalla*/

#include<stdio.h>

int main()
{
    /*1.Primeros iniciamos las variables que vamos a utilizar*/
    float horasTrabajadas,valorPorHora,sueldoTotal;

    /*2.Le pedimos al usuario que digite la cantidad de horas trabajadas*/
    printf("Digite la cantidad de horas trabajadas este mes: \n");
    
    /*3.Guardamos el dato en la variable correspondiente*/
    scanf("%f", &horasTrabajadas);

    /*4.Pedimos al usuario que digite el sueldo por hora*/
    printf("\nDigite su sueldo por hora: \n");

    /*5.Guardamos el dato en la variable correspondiente*/
    scanf("%f", &valorPorHora);

    /*6.Hacemos el calculo para saber cual es el sueldo del empleado segun las horas trabajas*/
    sueldoTotal = horasTrabajadas * valorPorHora;

    /*7.Mostramos en pantalla el valor del calculo*/
    printf("\nSu sueldo es de %.2f usd", sueldoTotal);

    return 0;
}