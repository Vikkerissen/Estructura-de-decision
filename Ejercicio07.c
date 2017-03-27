/*7-) Un fabricante de repuestos para tractores ha descubierto que ciertos artículos identificados por los
números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos.
Desea que se confeccione un programa que informándole el número de catálogo indique si el artículo es o no defectuoso.
Los artículos del catálogo van desde el 1200 al 90000.-*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int cat;

printf("\nIngrese un numero de catalogo: ");
scanf("%d", &cat);

if(cat<1000||cat>90000){
    printf("\nEl articulo no corresponde al catalogo");
}

if(cat>=1000&&cat<=90000){
    if(cat>=12121&&cat<=18081){
        printf("\nEl articulo es defectuoso");
    }
else if(cat>=30012&&cat<=45565){
    printf("\nEl articulo es defectuoso");
}
else if(cat>=67000&&cat<=68000){
    printf("\nEl articulo es defectuoso");
}
else{
    printf("\nEl articulo no es defectuoso");
}
}

getch();

}
