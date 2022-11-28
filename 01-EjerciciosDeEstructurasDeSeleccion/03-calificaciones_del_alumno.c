/*
Darle un mensaje al alumno en base a sus calificaciones
9-10 Excelente
7-8 Muy  bien 
5-6 Satisfactorio
0-4 Desaprobado
*/
#include<stdio.h>

int main()
{
    int calificacion;

    printf("Digite su nota\n");
    scanf("%i", &calificacion);

    switch (calificacion)
    {
    case 1:
        printf("Tu nota es %i desaprobado\n",calificacion);
        break;
    case 2:
        printf("Tu nota es %i desaprobado\n",calificacion);
        break;
    case 3:
        printf("Tu nota es %i desaprobado\n",calificacion);
        break;
    case 4:
        printf("Tu nota es %i desaprobado\n",calificacion);
        break;        
    case 5:
        printf("Tu nota es %i satisfactorio\n",calificacion);
        break;
    case 6:
        printf("Tu nota es %i satisfactorio\n",calificacion);
        break;   
    case 7:
        printf("Tu nota es %i muy bien\n",calificacion);
        break; 
    case 8:
        printf("Tu nota es %i muy bien\n",calificacion);
        break;
    case 9:
        printf("Tu nota es %i excelente\n",calificacion);
        break;   
    case 10:
        printf("Tu nota es %i excelente\n",calificacion);
        break;
    default:
        printf("No es una opcion correcta");
        break;                                 
    }


    return 0; 
}
