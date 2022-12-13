//Raiz cuadrada
/*Pedirle al usuario por pantalla que digite un numero y con el calcular su raiz cuadrada*/

#include<stdio.h>
#include<math.h>

int main()
{
    float numero,raizcuadrada;

    printf("Digite un numero:\n");
    scanf("%f", &numero);

    raizcuadrada = sqrt(numero);

    printf("La raiz cuadrada es %.2f \n", raizcuadrada);



    return 0;
}