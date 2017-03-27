/*8-) Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo ingresado
corresponde a una vocal, con el mensaje 'VOCAL'.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

char carac;

printf("\nIngrese una letra: ");
scanf("%c", &carac);

if(carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u'){
    printf("\nVOCAL");
}
else{
    printf("\nNO ES VOCAL");
}

getch();

}
