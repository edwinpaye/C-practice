#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int auxUno(int x, int y){
    if(x<y)
        return y;
    else
        return x;
}

int auxDos(int x, int y){
    if(x>y)
        return y;
    else
        return x;
}

void ejerUno(){
    int x, y, z, result;
    printf("\nIngrese tres numeros diferentes\n");
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &x);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &y);
    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &z);
    if(auxUno(auxUno(x,y),z)==x){
        if(auxDos(auxDos(x,y),z)==y)
            result = z;
        else
            result = y;
    }else{
        if(auxUno(auxUno(x,y),z)==y){
            if(auxDos(auxDos(x,y),z)==x)
                result = z;
            else
                result = x;
        }else{
            if(auxDos(auxDos(x,y),z)==x)
                result = y;
            else
                result = x;
        }
    }
    printf("El numero medio es: %d\n", result);
}

main(){
    menu();
}