/*11-) Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y :  
a) calcule e informe el promedio de los 3 valores ingresados.  
b) determine e informe si forman o no triángulo. ( suma de c/ 2 de sus lados > al tercero )*/

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
