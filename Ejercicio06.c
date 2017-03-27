/*6-) Ingresar 3 valores reales y:  
a] Si los dos primeros son mayores al tercero informar “ MAYORES AL TERCERO “.  
b] Si los tres son iguales informar “TRES IGUALES”  
c] si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR” */

#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b, c;

printf("\nIngrese el valor de A: ");
scanf("%d", &a);

printf("\nIngrese el valor de B: ");
scanf("%d", &b);

printf("\nIngrese el valor de C: ");
scanf("%d", &c);

if(a&&b>c){
    printf("\nMAYORES AL TERCERO");
}
else if(a==b&&a==c){
    printf("\nTRES IGUALES");
}
else{
    printf("\nALGUNO ES MENOR");
}

getch();

}
