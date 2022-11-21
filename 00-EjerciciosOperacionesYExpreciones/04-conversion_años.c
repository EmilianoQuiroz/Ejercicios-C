//Conversion de años en C
/*Transformar años a meses, semanas a dias y dias a horas
1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias 
1 dia = 24 horas

Pedirle al ausuario que digite la cantidad de años y realizar la conversion*/

#include<stdio.h>

int main()
{
    /*1.Primero iniciamos las variables que utilizaresmos*/
    float years,meses,semanas,dias,horas;

    /*2.Luego le pedimos al usuario que ingrese la cantidad de años a convertir*/
    printf("Ingrese la cantidad de años a convertir: \n");
    
    /*3.Guardamos el dato ingresado en la variable correspondiente*/
    scanf("%f", &years);

    /*4.Hacemos las conversiones*/
    meses = years * 12;
    semanas = meses * 4;
    dias = semanas * 7;
    horas = dias * 24;

    /*5.Mostramos el resultado por pantalla*/
    printf("La cantidad de años %.0f es igual a %.0f meses, %.0f semanas, %.0f dias y %.0f horas",years, meses, semanas, dias, horas);


    return 0;
}