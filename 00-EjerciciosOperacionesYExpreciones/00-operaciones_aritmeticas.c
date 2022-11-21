//Ejercicio operaciones aritmeticas
/*Pedir al usuario que digite dos numeros y tenemos que sumarlos, restarlos, multiplicarlos y dividirlos*/

#include<stdio.h>

int main()
{
    //1.primro iniciamos los variables que utilizaremos
    float numero1, numero2, suma, resta, multiplicacion, division;
    /*2.En numero1 y numero2 ingresaremos los datos, y con el resto de las variables haremos las operaciones*/

    /*3.Pedimos al usuario que digite dos numeros y los guardamos dentro de las variables corespondientes*/
    printf("digite los valores a operar: ");
    scanf("%f %f", &numero1, &numero2);

    /*Hacemos las operaciones dentro de la varible correspondiente*/
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    /*Mostramos en pantalla el resultado de cada operacion*/
    printf("El valor de la suma es %.0f \n", suma);
    printf("El valor de la resta es %.2f \n", resta);
    printf("El valor de la multiplicacion es %.2f \n", multiplicacion); 
    printf("El valor de la division es %.2f \n", division); 


    return 0;
}