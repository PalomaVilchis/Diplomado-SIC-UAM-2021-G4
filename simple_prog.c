/**
 @author: Luis Angel Sánchez Hernández
 @date: 24-Julio-2021
**/
#include <stdio.h>

int main(){
    int x,y, R;
    printf("Este programa hace una suma\n");
    printf("Escribe una suma. Ej: <2+6>\n");
    scanf("%d+%d", &x, &y);
    R = x + y;
    printf("Operación: %d + %d = %d\n", x, y, R);

    return 0;
}