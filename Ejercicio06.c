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
