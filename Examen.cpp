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

void ejerDos(){
    int capital, resto;
    printf("Ingrese la capital actual: ");
    scanf("%d", &capital);
    if(capital>20000){
        printf("No se necesita prestamo del banco\n");
        resto = capital - 7000;
    }else{
        if(capital>-1){
            printf("Se pedira un prestamo de %d $us para el nuevo saldo de 20000 $us\n", 20000-capital);
            resto =  13000;
        }else{
            printf("Se pedira un prestamo de %d $us para el nuevo saldo de 10000 $us\n", 10000+(capital*(-1)));
            resto = 3000;
        }
    }
    printf("-Se invertira 5000 $us para equipo de computacion.\n-Se invertira 2000 $us para mobiliario.\n");
    printf("-Se invertira %d $us para insumos.\n-Se invertira %d $us para incentivo al personal.\n", resto/2, resto/2);
}

main(){
    menu();
}