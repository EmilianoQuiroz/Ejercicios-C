//Ver si un alumno pasa de año o no
/*
Un alumno solo puede tener 3 materias desaprobadas para poder pasar de año, si desaprueba cuatro materias el alumno no puede pasar de año y recursa
*/
#include<stdio.h>

int main()
{
    /*1.Deaclaramos la variable que vamos a necesitar*/
    int materiasReprobadas;

    /*2.Le pedimos al usuario que nos digite cuantas materias reprobo*/
    printf("Cuantas materias desaprobaste?\n");

    /*3.Guardamos el dato en una variable*/
    scanf("%i", &materiasReprobadas);

    /*4.Ejecutamos el condicional IF*/
    if(materiasReprobadas>3){
        /*Si el numero de materias reprobadas es mayor a tres ejecutaremos el printf con el siguiente mensaje*/
        printf("No podra pasar de curso");
    }
    else{
        /*Si la condicion anterior no se cumple ejecutaremos el siguiente printf*/
        printf("Felicidades, esta aprobado y puede pasar al siguiente cuso");
    }

    return 0; 
}