/*Hacer un programa que borre la pantalla al pulsar 1*/

#include<stdio.h>
/*La libreria system nos probee de funciones con las cuales podemos interactuar con el sistema*/
#include<stdlib.h>

 int main()
 {
   /*1.Declaramos la variable en la que guardaremos el valor que el usuario digite*/
   int numero;

   /*2.Le pedimos al usuario que digite el numero 1*/
   printf("Borrar pantalla\n");
   printf("Al precionar 1 borrara todos los datos que se muestran en pantalla\n");
   printf("------------------------------------------------------------------\n");

   /*3.Guardamos el valor ingresado por el usuario en la variable correspondiente*/
   scanf("%i", &numero);

   /*4.Efectuamos el condicional*/
   if(numero == 1){/*Si numero es igual a 1 ejecutamos el siguiente codigo*/
      system("clear");/*La siguiente funcion nos permite ejecutar el comando que le pasamos como parametro, como estamos trabajando en linux el comando para limpiar la pantalla es "clear", en caso de estar usando windows el comando que tenemos que usar es "cls"*/
      printf("La informacion fue borrada");
   }
   else{/*Si el usuario ingresa un numero distinto a 1, ejecutaremos el siguiente codigo*/
      printf("El numero ingresado es incorrecto");
   }
   return 0;
 }