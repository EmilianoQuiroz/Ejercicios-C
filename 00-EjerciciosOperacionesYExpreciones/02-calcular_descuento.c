//Calcular descuento
/*Un supermercado quiere otorgar un descuento del 15%, para esto hay que crear un programa que le pida al cliente el monto de lo que tiene que pagar y le aplique el descuento, con lo cual la salida sera del precio total con el descuento aplicado y el descuento sobre el monto
Ejemplo de resultado esperado:
su total a pagar es de XXX y su descuento es de XXX*/

#include<stdio.h>
/*1.Creamos una macro que contendra el procentaje de descuento ya que este no cambiara a lo largo del programa*/
#define DESCUENTO 15

int main()
{
    /*2.Inicializamos las variables a utilizar*/
    float montoInicial, montoConDescuento, descuentoOtorgado; 

    /*3.Pedimos al usuario que ingrese el monto total a pagar*/
    printf("Ingrese el monto total a pagar: \n");
    
    /*4.Guardamos el monto en la variable montoInicial*/
    scanf("%f", &montoInicial);
    
    /*5.Hacemos el calculo para determinar de cuanto va a ser el descuento*/
    descuentoOtorgado = (montoInicial * DESCUENTO) / 100;

    /*6.Ahora calculamos cuanto seria el monto final si al monto inicial le restamos el descuento*/
    montoConDescuento = montoInicial - descuentoOtorgado;

    /*Mostramos en pantalla el resultado del descuento otorgado y del montofinal con el descuento aplicado*/
    printf("\nEl descuento otorgado es de %.2f sobre el monto inical", descuentoOtorgado);
    printf("\nEl monto final conel descuento aplicado es de %.2f", montoConDescuento);

    return 0;
}
