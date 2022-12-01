//Simulador de cajero con entrada y salida de capital
/*Simular un cajero automatico en el cual el usuario podra depositar, extraer y consultar saldo integrando un bucle do while para que el codigo se ejecute hasta que el usuario indique la opcion salir*/

#include<stdio.h>

int main()
{
    /*1.Declaramos las variables necesarias*/
    int opcion;
    float deposotarDinero, extraerDinero, saldoActual=1000;

    printf("\t******************************\n");
    printf("\tSimulador de cajero automatico\n");
    printf("\t******************************\n\n");

    do{/*Este ciclo nos garantiza que el fragmento codigo se ejecutara al menos una vez*/
    
    /*2.Mostramos en pantalla las opciones que el usuario tiene*/
    printf("\tSeleccione una opcion\n");
    printf("\n1)Depositar Dinero");
    printf("\n2)Retirar Dinero");
    printf("\n3)Consultar saldo");
    printf("\n4)Salir");
    printf("\nElija una opcion\n");

    /*3.Guardamos la opcion elegida en la variable opcion*/
    scanf("%i", &opcion);

    /*4.Creamos el condicional switch*/
    switch (opcion)/*Segun la opcion que elijamos podemos ejecutar alguno de los siguintes casos*/
    {
    case 1:
        /*1.En este case le preguntamos al usuario cuanto dinero quiere depositar*/
        printf("\nCuanto dinero quieres depositar?\n");
        /*2.Depositamos el monto en la variable deposotarDinero*/
        scanf("%f", &deposotarDinero);
        /*3.sumamos el monto inicial con el monto depositado*/
        saldoActual+= deposotarDinero;
        /*4.Mostramos en pantalla el monto inicial mas el monto depositado*/
        printf("\nTu saldo actual es de $%.2f", saldoActual);/*Mostramos solo dos decimales*/
        break;
    case 2:
        /*1.Le preguntamos al usuario cuanto quiere extraer*/
        printf("\nCuanto dinero desea extraer?\n");
        /*2.Guardamos el monto en la variable extraerDinero*/
        scanf("%f", &extraerDinero);
        /*3.Hacemos un condicional if para el caso en el que el usuario quiera extraer mas dinero del que tiene en la cuenta*/
        if(extraerDinero > saldoActual){
            /*Si el monto a extraer es mayor al saldo en la cuenta ejecutamos el siguiente printf*/
            printf("\nUstede no cuenta con el dinero suficiente\n");
        }
        else{
            /*En caso de que el monto a extraer sea menor que el saldo actual efectuamos la resta de los valores y mostramos en pantalla el ersultado*/
            saldoActual -= extraerDinero;
            printf("\nSu saldo actual es $%.2f", saldoActual);
        }
        break;
    case 3:
        /*En el caso de que el usuario digite la opcion 3, este podra consultar el saldo actual*/
        printf("\nSu saldo actual es de $%.2f",saldoActual);
    case 4:/*Con este case podremos salir del programa mediante el breack*/
        break;
    default: 
        /*Si el usuario ingresa un valor distinto a los requeridos ejecutaremos el siguinte printf*/
        printf("\nNo ha digitado una opcion correcta");
        break;
    }
    }while(opcion != 4);/*El bucle se ejecuta mientras la opcion sea distinta a 4*/
    
    



    return 0;
}