#include <stdio.h>
#include <string.h>

struct cuenta_cliente
{
    char nombre[30];
    char apellido[30];
    int saldo;
};

void verClientes(struct cuenta_cliente *p)
/*y esta es al sintaxis apropiada cuando pasamos las estructuras por punteros
pero con la sintaxis del p.nombre no funciona hay que poner las flechas como en PHP para acceder a las propiedas del objeto*/
{
    printf("El nombre del cliente es: %s \n", p->nombre);
    printf("El apellido del cliente es: %s \n", p->apellido);
    printf("El saldo del cliente %s es de %d", p->nombre, p->saldo);

    /*El nombre del cliente es: alvaro
    El apellido del cliente es: garrido
    El saldo del cliente alvaro es de 4200*/

}

void main()
{
    //Las estructuras son como los objetos pero con solo las propiedades del objeto.
    //Aqui simplemete estamos asignando datos a las propiedades
    struct cuenta_cliente p;
    strcpy(p.nombre, "alvaro");
    strcpy(p.apellido, "garrido");
    p.saldo = 4200;
    printf("\nAhora veremos los clientes \n");
    //Aqui lo que hacemos le pasamos directamente la estrucutra al metodo no le pasamos una copia
    verClientes(&p);

}
