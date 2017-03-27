#include <stdio.h>
#include <stdlib.h>

int main(){

int vhora, horastrab, sueldo1, sueldo2;

printf("\n*El empleado recibe un premio de $500 si trabajo mas de 50 horas*");
printf("\n*El empleado recibe $1000 adicionales si trabajo mas de 150 horas\n");

printf("\nIngresar el valor de la hora: $");
scanf("%d", &vhora);

printf("\nIngresar la cantidad de horas trabajadas: ");
scanf("%d", &horastrab);

sueldo1 = (vhora*horastrab)+500;
sueldo2 = (vhora*horastrab)+1000;

if(horastrab>=50&&horastrab<150){
    printf("\nEl sueldo del empleado es de: $%d", sueldo1);
}
else if(horastrab>=150){
    printf("\nEl sueldo del empleado es de: $%d", sueldo2);
}
else{
    printf("\nNo existe premio por debajo de 50 horas");
}

getch();

}
