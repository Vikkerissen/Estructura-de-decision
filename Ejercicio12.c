#include <stdio.h>
#include <stdlib.h>

int main(){

int cant, sueltos, caja10, caja50, precio, desc, total;

printf("\nIngrese una cantidad de CD a comprar: ");
scanf("%d", &cant);

caja10 = 8;
caja50 = 35;

if(cant>=1&&cant<=9){
        sueltos = 1;
        total = cant*sueltos;

        printf("\nEl importe a pagar es de: $%d", total);
}

if(cant>=10&&cant<=40){
    total = (cant/10)*caja10;
    printf("\nEl importe a pagar es de: $%d", total);
}
else if(cant==50){
    printf("\nEl importe a pagar es de: $%d", caja50);
}

if(cant>=100&&cant<=500){ //Para hacer el descuento, tomar valores de 50 en 50.
    precio = (cant/50)*caja50;
    desc = precio*0.1;
    total = precio-desc;

    printf("\nEl importe a pagar es de: $%d", total);
}

if(cant>=500){
    printf("\nNo se aceptan compras mayores a 500 CD");
}

getch();

}
