//Los pounteros es para acceder a la direccion de memoria de por ejemplo una variable

/*Esto es igual que PHP solo que cuando llevamos la variable x a una función estamos llevando directamente ese variable, no
una copia y estamos haciendo referencia directamente a esa variable
que decalre enb la inea 17, y hacemos referencia a esa vaeriable con lops asteriscos*/

#include <stdio.h>

void funcion(int* x){
    int y = *x;
    y = *x+2;

    printf("La suma es de: %d", y); //12
    *x = y;
}

void main(){
   int x = 10;

   printf("The value of the x is %d.", x);
   printf("\n");
   printf("The position in memory of the x is %d.", &x);//6356732.
   printf("\n");

   funcion(&x);
   printf("\n");

   printf("Este es el numero recuperado de la operacion %d", x);//12

}
