//Simulador de cajero con entrada y salida de capital
/*Simular un cajero automatico en el cual el usuario podra depositar, extraer y consultar saldo*/

#include<stdio.h>

int main()
{
    /*1.Declaramos las variables necesarias*/
    int opcion;
    float deposotarDinero, extraerDinero, saldoActual=3000;

    printf("\t******************************\n");
    printf("\tSimulador de cajero automatico\n");
    printf("\t******************************\n\n");

    /*2.Mostramos en pantalla las opciones que el usuario tiene*/
    printf("\tSeleccione una opcion\n");
    printf("\n1)Depositar Dinero");
    printf("\n2)Retirar Dinero");
    printf("\n3)Salir");
    printf("\nElija una opcion");

    /*3.Guardamos la opcion elejida en la variable opcion*/
    scanf("%i", &opcion);

    /*4.Creamos el condicional switch*/
    switch (opcion)/*Segun la opcion que elijamos podemos ejecutar alguno de los siguintes casos*/
    {
    case 1:
        /*1.En este case le preguntamos al usuario cuanto dinero quiere depositar*/
        printf("Cuanto dinero quieres depositar?\n");
        /*2.Depositamos el monto en la variable deposotarDinero*/
        scanf("%f", &deposotarDinero);
        /*3.sumamos el monto inicial con el monto depositado*/
        saldoActual+= deposotarDinero;
        /*4.Mostramos en pantalla el monto inicial mas el monto depositado*/
        printf("Tu saldo actual es de $%.2f", saldoActual);/*Mostramos solo dos decimales*/
        break;
    }
    return 0;
}