#include <stdio.h>
#include <stdlib.h>

int main(){

int art, cant, desc, imp;
float precio, total;

printf("\nIngrese el codigo de articulo: ");
scanf("%d", &art);

printf("\nIngrese la cantidad a comprar: ");
scanf("%d", &cant);

if(art==10||art==100){ //código 1
    precio = 10;
    total = cant*precio;

    printf("\nARTICULO: %d, CANTIDAD: %d, IMPORTE A PAGAR: $%.2f", art, cant, total);
}
else if(art==22||art==222){ //código 2
     if(cant==10){
        precio = 65;
        total = cant*precio;
        printf("\nARTICULO: %d, CANTIDAD: %d, IMPORTE A PAGAR: $%.2f", art, cant, total);
     }
     else{
        precio = 7;
        total = cant*precio;
        printf("\nARTICULO: %d, CANTIDAD: %d, IMPORTE A PAGAR: $%.2f", art, cant, total);
     }
}
else if(art==33){ //código 3 -Incluye el descuento del 10%
    if(cant>10){
        precio = 3;
        imp = cant*precio;
        desc = imp*0.1;
        total = imp-desc;

        printf("\nARTICULO: %d, CANTIDAD: %d, IMPORTE A PAGAR: $%.2f", art, cant, total);
    }
    else{
        precio = 3;
        total = cant*precio;
        printf("\nARTICULO: %d, CANTIDAD: %d, IMPORTE A PAGAR: $%.2f", art, cant, total);
    }
}
else if(art==44){ //código 4
    precio = 1;
    total = cant*precio;
    printf("\nARTICULO: %d, CANTIDAD: %d, IMPORTE A PAGAR: $%.2f", art, cant, total);
}

getch();

}








