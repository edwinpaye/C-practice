#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int auxUno(int x, int y){
    if(x<=y)
        return y;
    else
        return x;
}

int auxDos(int x, int y){
    if(x>=y)
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

void ejerTres(){
    int diaSemana;
    int diaMes;
    int mes;
    int gestion;
    printf("Ingrese el numero del dia de la semana (1 a 7): ");
    scanf("%d", &diaSemana);
    printf("Ingrese el numero del dia del mes: ");
    scanf("%d", &diaMes);
    printf("Ingrese el numero correspondiente al mes: ");
    scanf("%d", &mes);
    printf("Ingrese las ultimas dos cifras de la gestion: ");
    scanf("%d", &gestion);
    switch(diaSemana){
        case 1: printf("Lunes-"); break;
        case 2: printf("Martes-"); break;
        case 3: printf("Miercoles-"); break;
        case 4: printf("Jueves-"); break;
        case 5: printf("Viernes-"); break;
        case 6: printf("Sabado-"); break;
        case 7: printf("Domingo-"); break;
        default: printf("Numero de dia incorrecto-"); break;
    }
    printf("%d-", diaMes);
    switch(mes){
        case 1: printf("Enero-"); break;
        case 2: printf("Febrero-"); break;
        case 3: printf("Marzo-"); break;
        case 4: printf("Abril-"); break;
        case 5: printf("Mayo-"); break;
        case 6: printf("Junio-"); break;
        case 7: printf("Julio-"); break;
        case 8: printf("Agosto-"); break;
        case 9: printf("Septiembre-"); break;
        case 10: printf("Octubre-"); break;
        case 11: printf("Noviembre-"); break;
        case 12: printf("Diciembre-"); break;
        default: printf("Numero de mes incorrecto-"); break;
    }
    printf("%d\n", gestion);
}

int aleatorio(int limite_inferior, int limite_superior){
    return limite_inferior + rand() % (limite_superior +1 - limite_inferior);
}

void ejerCuatro(){
    int candUno=0, candDos=0, candTres=0, auxiliar;
    srand(time(NULL));
    for(int i=0; i<250; ++i){
        auxiliar = aleatorio(1, 3);
        if(auxiliar==1)
            candUno++;
        else{
            if(auxiliar==2)
                candDos++;
            else
                candTres++;
        }
    }
        candUno = candUno*100/250;
        candDos = candDos*100/250;
        candTres = candTres*100/250;
    if(candUno>candDos&&candUno>candTres){
        printf("Gana el candidato Uno con %d porciento\n", candUno);
        printf("Candidato Dos %d porciento y candidato Tres %d porciento\n", candDos, candTres);
    }else{
        if(candDos>candUno&&candDos>candTres){
            printf("Gana el candidato Dos con %d porciento\n", candDos);
            printf("Candidato Uno %d porciento y candidato Tres %d porciento\n", candUno, candTres);
        }else{
            if(candTres>candUno&&candTres>candDos){
                printf("Gana el candidato Tres con %d porciento\n", candTres);
                printf("Candidato Uno %d porciento y candidato Dos %d porciento\n", candUno, candDos);
            }else{
                printf("Empate entre candidatos con porcentaje igual\n");
                printf("Uno %d porciento Dos %d porciento Tres %d porciento\n", candUno, candDos, candTres);
            }
        }
    }
}

void ejerCinco(){
    int contPar=0;
    srand(time(NULL));
    for(int i=0; i<50; ++i)
        if(aleatorio(1, 6)==aleatorio(1,6))
            contPar++;
    printf("La cantidad de iguales fue del %d porciento de 50 lanzamientos\n", contPar*100/50);
}

void ejerSeis(){
    printf("%d\n", rand());
}

void incisoA(){
    int n, pagoHora, horas, conceptoHoras=0;
    printf("Ingrese la cantidad de trabajadores: ");
    scanf("%d", &n);
    printf("Ingrese el pago por hora: ");
    scanf("%d", &pagoHora);
    for(int i=0; i<n; ++i){
        printf("Ingrese las horas trabajadas del trabajador %d: ", i+1);
        scanf("%d", &horas);
        if(horas>48){
            printf("El pago es de: %d", (40*pagoHora+(8*2*pagoHora)+((horas-48)*3*pagoHora)));
            conceptoHoras += (8*2*pagoHora+(horas-48)*3*pagoHora);
        }else{
            if(horas>40){
                printf("El pago es de: %d", (40*pagoHora+(horas-40)*2*pagoHora));
                conceptoHoras += (horas-40)*2*pagoHora;
            }else
                printf("El pago es de: %d", pagoHora*horas);
        }
    }
    if(conceptoHoras>0)
        printf("Por concepto de horas extra, la empresa pagara a %d empleado(s) la cantidad de %d: ", n, conceptoHoras);
    else
        printf("No hay horas extra que pagar");
}

void incisoB(){
    int xa, ya, xb, yb;
    printf("Ingrese la coordenada x1: ");
    scanf("%d", &xa);
    printf("Ingrese la coordenada y1: ");
    scanf("%d", &ya);
    printf("Ingrese la coordenada x2: ");
    scanf("%d", &xb);
    printf("Ingrese la coordenada y2: ");
    scanf("%d", &yb);
    printf("Coordenada polar: r= %d y alfa= %f\n", (xb+yb)/2, (atan(ya/xa)*180/PI));
}

void ejerSiete(){
    int opcion;
    do{
        printf("\n---Menu---\n1.Inciso A\n2.Inciso B\n3.Salir\nElejir opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
            case 1: incisoA(); break;
            case 2: incisoB(); break;
            case 3: break;
            default: printf("Opcion no valida.\n"); break;
        }
    }while(opcion!=3);
}

void ejerOcho(){
    int x=0, cont=0, total=0, minutos;
    printf("\nPrueva de atletismo 5Km\n");
    for (int i = 1; i < 11; ++i){
        printf("Ingrese el tiempo del dia %d en minutos: ", i);
        scanf("%d", &minutos);
        total += minutos;
        if (minutos<17)
            cont++;
        else
            x++;
    }
    if (cont==10||x==1||(total/10<=15)){
        printf("\n-El atleta es apto para la prueva de 5Km\n");
        if (cont==10)
            printf("-El atleta hizo un tiempo menor de 16 min en todas las pruevas.\n");
        else
            if (x==1)
                printf("-En solo una de las pruevas realizo un tiempo mayor a 16 min.\n");
    }else
        printf("\nEl atleta no es apto para la prueva de 5Km\n");
    printf("El promedio de tiempo de los 10 dias es de: %f\n", (float)total/10);
}

main(){
    menu();
}