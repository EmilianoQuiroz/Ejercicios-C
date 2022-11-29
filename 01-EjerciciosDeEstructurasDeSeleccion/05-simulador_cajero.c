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
    printf("\nElija una opcion\n");

    /*3.Guardamos la opcion elegida en la variable opcion*/
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
    case 2:
        /*1.Le preguntamos al usuario cuanto quiere extraer*/
        printf("Cuanto dinero desea extraer?\n");
        /*2.Guardamos el monto en la variable extraerDinero*/
        scanf("%f", &extraerDinero);
        /*3.Hacemos un condicional if para el caso en el que el usuario quiera extraer mas dinero del que tiene en la cuenta*/
        if(extraerDinero > saldoActual){
            /*Si el monto a extraer es mayor al saldo en la cuenta ejecutamos el siguiente printf*/
            printf("Ustede no cuenta con el dinero suficiente\n");
        }
        else{
            /*En caso de que el monto a extraer sea menor que el saldo actual efectuamos la resta de los valores y mostramos en pantalla el ersultado*/
            saldoActual -= extraerDinero;
            printf("Su saldo actual es $%.2f", saldoActual);
        }
        break;
    case 3:
        /*En caso de que el ususario digite la opcion 3 ejecutamos el siguiente printf*/
        printf("Usuario deslogueado\n");
        break;
    default: 
        /*Si el usuario ingresa un valor distinto a los requeridos ejecutaremos el siguinte printf*/
        printf("No ha digitado una opcion correcta");
        break;
    }



    return 0;
}