//Calcular nota del alumno
/*Un alumno desea saber cual es su calificacion final en la materia de algoritmos. Dicha calificacion se compone de los siguientes porcentajes:
55% es el promedio de la nota de los tres parciales
30% es la calificacion del examen final
15% es la calificacion del tp final

Calcular la nota final del alumno y mostrarla en pantalla*/

#include<stdio.h>

int main()
{
    /*1.Primero iniciamos las variables que vamos a utilizar en nuestro programa*/
    float notaParcial1,notaParcial2,notaParcial3,promedioParciales,notaExamenFinal,notaTrabajoPractico,notaFinal,porcentajeParciales,porcentajeNotaExamenFinal,porcentajeTrabajoPractico;

    /*2.Pedimos al usuario que nos digite las notas de los primeros tres parciales y luego guardanos esas notas en las respectivas variables*/
    printf("Ingrese la nota del primer parcial\n");
    scanf("%f", &notaParcial1);
    printf("Ingrese la nota del segundo parcial\n");
    scanf("%f", &notaParcial2);
    printf("Ingrese la nota del tercer parcial\n");
    scanf("%f", &notaParcial3);

    /*3.Pedimos al usuario que nos digite la nota del examen final y la guardamos en la variable correspondiente*/
    printf("Ingrese la nota del examen final\n");
    scanf("%f", &notaExamenFinal);

    /*4.Pedimos al usuario que ingrese la nota del trabajo practico y la guardamos en su respectiva variable*/
    printf("Ingrese la nota del trabajo practico\n");
    scanf("%f", &notaTrabajoPractico);

    /*5.Calculamos el promedio final de los primeros tres parciales*/
    promedioParciales = (notaParcial1 + notaParcial2 + notaParcial3) / 3;

    /*6.Calculamos los porcentajes de cada nota*/
    porcentajeParciales =  promedioParciales * .55;
    porcentajeNotaExamenFinal = notaExamenFinal * .30;
    porcentajeTrabajoPractico = notaTrabajoPractico * .15;

    /*7.Hacemos la sumatoria de todos los porcentajes, lo cual nos dara como resultado la nota final de la materia*/

    notaFinal = porcentajeNotaExamenFinal + porcentajeParciales + porcentajeTrabajoPractico;
    
    /*8.imprimimos el resultado por pantalla*/
    printf("Su nota final es de: %.2f", notaFinal);

    return 0;
}