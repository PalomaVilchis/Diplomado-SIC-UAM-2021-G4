#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){

    //Declaracion de variables
    int n_primos,i,numero,token;
    double i_sqr;
    //Asignacion de variables
    printf("Asigne cantidad de numeros primos:  ");
    scanf("%d",&n_primos);
    clock_t start = clock();
    i=1;
    //Ciclo Do While para que repita
    //el ciclo interno n veces
    do{
        //Incremento de i
        i+=1;
        //Asignacion de variables
        numero=2;
        token=0;
        /* Sacar la raiz cuadrada, y
        la parte entera de la misma para
        optimizar el programa*/
        i_sqr = sqrt(i);
        int i_opt = (int) i_sqr;
        /*Ciclo que va desde un numero
        cualquiera hasta la parte entera de la
        raiz cuadrada de un posible numero primo*/
        while(numero<=i_opt){
            /*Evaluacion de si el numero NO es primo*/
            if ((i%numero)==0){
                /*Asignacion de un token para identificar
                a un numero que NO es primo*/
                token+=1;
                //a = True
            }
            numero+=1;
        }
        /*Si el token es igual a 0, es porque ES PRIMO*/
        if (token==0){
            printf("%d  Es un número primo\n",i);
            /*Como se encontro un numero primo entonces
            decrementamos el numero de primos a encontrar
            para tener un bucle finito*/
            n_primos--;
        }
    }
    //ciclo while para que acabe cuando hallar
    //n cantidad de primos
    while(n_primos>0);
    printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);

    return 0;
}


