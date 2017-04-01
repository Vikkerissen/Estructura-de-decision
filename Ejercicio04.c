#include <stdio.h>
#include <stdlib.h>

int main(){

int num1, num2, num3, aux;

printf("\nIngrese el primer numero: ");
scanf("%d", &num1);

printf("\nIngrese el segundo numero: ");
scanf("%d", &num2);

printf("\nIngrese el tercer numero: ");
scanf("%d", &num3);

if(num1>num2){
    aux = num2;
    num2 = num1;
    num1 = aux;
}

if(num2>num3){
    aux = num2;
    num2 = num3;
    num3 = aux;
}

if(num1>num2){
    aux = num1;
    num1 = num2;
    num2 = aux;
}

printf("\nLos numeros ordenados crecientemente son: %d, %d, %d", num1, num2, num3);

getch();

}



