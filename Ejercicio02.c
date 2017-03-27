#include <stdio.h>
#include <stdlib.h>

int main(){

int A, B, C;

printf("\n*Determinar si el valor ingresado es menor que los otros dos*\n");

printf("\nIngrese el valor de A: ");
scanf("%d", &A);

printf("Ingrese el valor de B: ");
scanf("%d", &B);

printf("Ingrese el valor de C: ");
scanf("%d", &C);

if(A<B&&A<C){
    printf("\nEl valor ingresado es menor que B y C");
}
else{
    printf("\nEl valor ingresado es mayor que B o C");
}
getch();

}
