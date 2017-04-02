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
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: %d", num, cod, import);

}
else if(cod=='D'){
    import = 40;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: %d", num, cod, import);
}
else if(cod=='F'){
    import = 60;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: %d", num, cod, import);
}
else if(cod=='M'){
    import = 150;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: %d", num, cod, import);
}
else if(cod=='T'){
    import = 150;
    printf("\nNUMERO DE HISTORIA: %d, CODIGO: %c, IMPORTE A PAGAR: %d", num, cod, import);
}

getch();

}
