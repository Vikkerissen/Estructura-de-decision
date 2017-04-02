/*14-) Confeccionar un programa que pueda determinar el importe a pagar por una prestación médica según su código.
Los importes se cobran según la siguiente tabla:
Código  Importe   
A       $ 20   
D       $ 40  
F       $ 60  
M       $150 
T       $150   
Por cada prestación se debe ingresar el número de historia del paciente y el código de la prestación.
Se debe emitir un ticket para cada uno, con el número de la historia, el código y el importe a pagar.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

int num, import;
char cod;

printf("\nCodigo:\t\tImporte:\n\nA\t\t$20\nD\t\t$40\nF\t\t$60\nM\t\t$150\nT\t\t$150\n");

printf("\nIngrese el codigo de prestacion: ");
scanf("%c", &cod);

fflush(stdin);

printf("\nIngrese el numero de historia: ");
scanf("%d", &num);


if(cod=='A'){
    import = 20;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: $%d", num, cod, import);

}
else if(cod=='D'){
    import = 40;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: $%d", num, cod, import);
}
else if(cod=='F'){
    import = 60;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: $%d", num, cod, import);
}
else if(cod=='M'){
    import = 150;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: $%d", num, cod, import);
}
else if(cod=='T'){
    import = 150;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: $%d", num, cod, import);
}

getch();

}
