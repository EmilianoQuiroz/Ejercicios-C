//Areas de figuras geometricas en C
/*Pedir al usuario dos datos (base y altura) y en base a eso calcular el area de un reactangulo y un triangulo*/

#include<stdio.h>

int main()
{
    /*1.Primero inicializamos las variables que itulizaremos, en este caso son de tipo float*/
    float base, altura, areaDeUnRectangulo, areaDeUnTriangulo;

    /*2.Luego le pedimos al usuario que ingrese los datos necesarios, base y altura*/
    printf("Ingrese el valor de la base y la altura de su figura\n");

    /*3.Ingresamos los valores a las variables correspondientes*/
    scanf("%f %f", &base, &altura);

    /*4.Hacemos los calculos correspondientes a cada figura*/
    areaDeUnRectangulo = (base * altura) + (base * altura);
    areaDeUnTriangulo = (base * altura) / 2;

    /*5.Mostramos los resultados por pantalla*/
    printf("\nEl area del rectangulo es %.2f", areaDeUnRectangulo);
    printf("\nEl area del triangulo es %.2f", areaDeUnTriangulo);

    return 0;
}
