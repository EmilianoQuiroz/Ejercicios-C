//Calcular segundos sobre horas
/*Calcular la cantidad de segundos incluidos en la cantidad de horas, minutos y segundos ingrsados por el usuario*/

#include<stab.h>

int main()
{   
    /*1.Iniciamos las variables que vamos a utilizar en el programa*/
    int horas, minutos, segundos,horasASegundos,minutosASegundos, totalSegundos;

    /*2.Le pedimos al usuario que ingrese la cantidad de horas minutos y segudos, luego guardaremos esos datos en las variables correspondientes*/
    printf("Ingrese la cantidad de horas\n");
    scanf("%i", &horas);
    printf("Ingrese la cantidad de minutos\n");
    scanf("%i", &minutos);
    printf("Ingrese la cantidad de segundos\n");
    scanf("%i", &segundos);

    /*3.Pasamos las horas y los minutos a segundos*/
    horasASegundos = horas * 3600;
    minutosASegundos = minutos * 60;

    /*4.Sumamos todos los segundos*/
    totalSegundos = segundos + horasASegundos + minutosASegundos;

    /*5.Mostramos el resultado por pantalla*/
    printf("La carga horaria ingresada equivale a %i segundos", totalSegundos);


    return 0;
}