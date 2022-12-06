/*
Pedirle al usuario que digite su edad y sexo
En caso de que el sexo sea femenino y la edad sea mayor 18 imprimir el siguiente mensaje
"Usuario aprobado"
En caso de que el sexo sea masculino, no importa la edad, imprimir el siguiente mensaje
"Usuario denegado"
*/
#include <stdio.h>
#include <string.h>


int main()
{
    char sexo[20];
    int edad;

    printf("Digite su sexo: \n");
    fgets(sexo, 20, stdin);
    strtok(sexo, "\n");

    printf("Digite su edad: \n");
    scanf("%d", &edad);

    if((strcmp(sexo, "femenino")==0) && edad >= 18){
        printf("Usuario aprobado");
    }else{
        printf("Usuario denegado");
    }


    return 0;
}