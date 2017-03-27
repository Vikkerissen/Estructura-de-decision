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
