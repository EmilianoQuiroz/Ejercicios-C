/*Una distribuidora de motos tiene una promocion de fin de año, segun la marca de motocibleta el cliente recibira un descuento puntual
Honda 5%
Yamaha 8%
Suzuki 19%
Otras narcas 2%
Mostrarle al usuario por pantalla cual va a ser su descueto*/

#include<stdio.h>
#include<string.h>

int main()
{
    /*1.Declaramos las variables que vamos a utilizar*/
    char marca[20];
    int valor = 0;
    float precio,descuento,precioFinal;

    /*2.Pedimos al usuario que digite la marca de la moto*/
    printf("Escribe la marca de la moto: \n");
   
    /*3.Guardamos el valor ingresado a la variable con un fgets, esta funcion nos permite guardar varios caracteres para formar strings, nos pide dos parametros, el primero es el nombre de la variable y el segundo la cantidad de caracteres que tendra*/
    fgets(marca, 20, stdin);
    strtok(marca, "\n");/*La función strtok devuelve un apuntador al primer carácter de un componente léxico, o a un apuntador nulo si tal componente no existe*/

    /*4.Ahora le pedimos al usuario que digite el valor de la motocicleta*/
    printf("Digite el valor de la motocicleta: \n");

    /*5.Guardamos el valor en la variable correspondiente*/
    scanf("%f", &precio);

    /*Igualamos los valores de tipo char a tipo int con la funcion strcmp para ponerlos en los cases*/
    if(strcmp(marca,"Honda")==0){
        valor = 1;
    }else if(strcmp(marca,"Yamaha")==0){
        valor = 2;
    }else if(strcmp(marca,"Suzuki")==0){
        valor = 3;
    }/*STRCP/String compare = La función strcpy copia la cadena a la cual señala s2 (incluyendo el carácter nulo de terminación) al arreglo al cual señala s1. Si la copia se lleva a cabo entre objetos que se superponen, el comportamiento queda indefinido. La función strcpy devuelve el valor de s1*/

    /*6.Ejecutamos el condicional switch*/
    switch(valor)
    {
    case 1:
        descuento = precio * .5;
        precioFinal = precio - descuento;
        printf("El precio final es de %.2f \n", precioFinal);
    break;
    case 2:
        descuento = precio * .8;
        precioFinal = precio + descuento;
        printf("El precio final es de %.2f \n", precioFinal);
    break;   
    case 3:
        descuento = precio * .19;
        precioFinal = precio - descuento;
        printf("El precio final es de %.2f \n", precioFinal);
    break; 
    default:
        descuento = precio * .2;
        precioFinal = precio - descuento;
        printf("El precio final es de %.2f \n", precioFinal);
        break;
    }

    return 0;
}