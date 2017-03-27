//1-) Se ingresan 3 nros. distintos. Determinar el mayor. 
#include <stdio.h>
#include <stdlib.h>

int main(){

int A, B, C;
printf("*Ingrese tres numeros diferentes para determinar el mayor*\n\n");
printf("Ingrese el valor de A: ");
scanf("%d", &A);

printf("Ingrese el valor de B: ");
scanf("%d", &B);

printf("Ingrese el valor de C: ");
scanf("%d", &C);

if(A>B&&A>C){
    printf("\nA es el mayor", A);
}
else if(B>A&&B>C){
    printf("\nB es el mayor", B);
}
else{
    printf("\nC es el mayor", C);
}

getch();

}
