#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b, c, prom;

printf("\nIngrese el valor de A: ");
scanf("%d", &a);

printf("\nIngrese el valor de B: ");
scanf("%d", &b);

printf("\nIngrese el valor de C: ");
scanf("%d", &c);

prom = (a+b+c)/3; //No tengo en claro si se los divide o a los numeros en caso de promedio. He visto un ejercicio en donde no era así.

printf("\nEl promedio de los 3 valores ingresados es: %d", prom);

if(a+b>c){
    printf("\n\nLos valores ingresados forman un triangulo");
}
else{
    printf("\n\nLos valores ingresados no forman un triangulo");
}

getch();

}