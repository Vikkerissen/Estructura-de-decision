#include <stdio.h>
#include <stdlib.h>

int main(){

int cat;

printf("\nIngrese un numero de catalogo: ");
scanf("%d", &cat);

if(cat<1000||cat>90000){
    printf("\El articulo no corresponde al catalogo");
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
