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

main(){
    menu();
}