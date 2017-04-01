#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b, c, d;

printf("\nIngrese el valor A: ");
scanf("%d", &a);

printf("\nIngrese el valor B: ");
scanf("%d", &b);

printf("\nIngrese el valor C: ");
scanf("%d", &c);

printf("\nIngrese el valor D: ");
scanf("%d", &d);
//El enunciado decía que "determine el menor valor y su número de orden." No entendí bien la forma de expresarlo, asi que lo puse así.
if(a<b&&a<c&&a<d){ 
    printf("\nEl menor es: %d", a);
    printf("\n\nSe encuentra en primera posicion");
}
else if(b<a&&b<c&&b<d){
    printf("\nEl menor es: %d", b);
    printf("\n\nSe encuentra en segunda posicion");
}
else if(c<a&&c<b&&c<d){
    printf("\nEl menor es: %d", c);
    printf("\n\nSe encuentra en tercera posicion");
}
else if(d<a&&d<b&&d<c){
    printf("\nEl menor es: %d ", d);
    printf("\n\nSe encuentra en cuarta posicion");
}

printf("\n\nLos valores ingresados han sido: A: %d, B: %d, C: %d, D: %d", a, b, c, d);

getch();

}
