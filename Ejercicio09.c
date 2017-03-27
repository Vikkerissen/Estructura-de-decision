/*9-) La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente escala:
a) menor de 55 $ el descuento es del 4,5 %
b) entre 55 y 100 $ “ 8,0 %
c) más de 100 $ el descuento es del 10,5%
Confeccionar un programa que reciba un importe e informe : el precio ingresado, el descuento y el precio neto a cobrar,
con mensajes aclaratorios. */

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
