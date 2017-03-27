#include <stdio.h>
#include <stdlib.h>

int main(){

float precio, desc, pcobrar;

printf("\nIngrese el importe de la compra: ");
scanf("%f", &precio);

if(precio<55){
    desc = precio*0.045;
    pcobrar = precio-desc;

    printf("\nPrecio ingresado: %.2f", precio);
    printf("\nDescuento: %.2f", desc);
    printf("\nPrecio neto a cobrar: %.2f", pcobrar);
}
else if(precio>55&&precio<100){
    desc = precio*0.08;
    pcobrar = precio-desc;

    printf("\nPrecio ingresado: %.2f", precio);
    printf("\nDescuento: %.2f", desc);
    printf("\nPrecio neto a cobrar: %.2f", pcobrar);
}
else if(precio>100){
    desc = precio*0.105;
    pcobrar = precio-desc;

    printf("\nPrecio ingresado: %.2f", precio);
    printf("\nDescuento: %.2f", desc);
    printf("\nPrecio neto a cobrar: %.2f", pcobrar);
}

getch();

}
