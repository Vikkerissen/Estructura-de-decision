//5-) Decir si un nro. N es divisible por M.
#include <stdio.h>
#include <stdlib.h>

int main(){

int N, M, res;

printf("\nIngrese el valor de N: ");
scanf("%d", &N);

printf("Ingrese el valor de M: ");
scanf("%d", &M);

res = N%M;

if(res==0){
    printf("\nN es divisible por M\tResto: %d", res);
}
else{
    printf("\nN no es divisible por M\t  Resto: %d", res);
}

getch();

}
