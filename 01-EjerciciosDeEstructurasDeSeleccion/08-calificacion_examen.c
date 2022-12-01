/*Indicar si un alumno aprobo su examen segun una nota numerica
A    Excelente
B    Notable
C    Aprobado
D, F Desaprobado*/

#include<stdio.h>

int main()
{
    /*1.Declaramos la variable nota*/
    char nota;

    /*2.Le pedimos al usuario que digite su nota*/
    printf("Digite su nota: \n");

    /*3.Ingresamos el valor digitado por el usuario a la variable nota*/
    scanf("%c", &nota);

    /*4.Ejecutamos el switch*/
    switch (nota)
    {
    case 'A':
        printf("Excelente");
        break;
    case 'B':
        printf("Notable");
        break;
    case 'C':
        printf("Aprobado");
        break;
    case 'D': case 'F':
        printf("Desaprobado");
        break;   
    default:
        printf("Escriba un valor valido");
        break;
    }
    return 0;
}