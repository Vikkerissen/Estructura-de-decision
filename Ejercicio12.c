/*12-) Un negocio de artículos de computación vende CD según la siguiente escala de precios :
- sueltos, entre 1 y 9 a 1 $ c/u  
- la caja de 10 cuesta 8 $  
- la caja de 50 cuesta 35 $  
- si la compra excede las 100 unidades se efectúa un descuento del 10%  
NOTA : se aceptan compras entre 1 y 500 CD.  
Se pide que se ingrese una cantidad de CD que se quiere comprar y calcule e informe el importe a pagar.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int cant, sueltos, caja10, caja50, precio, desc, total;

printf("\nIngrese una cantidad de CD a comprar: ");
scanf("%d", &cant);

caja10 = 8;
caja50 = 35;

if(cant>=1&&cant<=9){
        sueltos = 1;
        total = cant*sueltos;

        printf("\nEl importe a pagar es de: $%d", total);
}

if(cant>=10&&cant<=40){
    total = (cant/10)*caja10;
    printf("\nEl importe a pagar es de: $%d", total);
}
else if(cant==50){
    printf("\nEl importe a pagar es de: $%d", caja50);
}

if(cant>=100&&cant<=500){ /*Para hacer el descuento, tomar valores de 50 en 50. 100, 150, 200, 250 unidades, 
                         por ejemplo para dividir en cajas de 50. Mas que nada es para redondear la compra*/
    precio = (cant/50)*caja50;
    desc = precio*0.1;
    total = precio-desc;

    printf("\nEl importe a pagar es de: $%d", total);
}

if(cant>=500){
    printf("\nNo se aceptan compras mayores a 500 CD");
}

getch();

}
