#include <stdio.h>

void auxiliarUno(int *a, int *b, int *c, int *d){
    int auxiliar;
    printf("Ingrese los votos del partido Uno: ");
    scanf("%d", &auxiliar);
    *a = auxiliar + *a;
    printf("Ingrese los votos del partido Dos: ");
    scanf("%d", &auxiliar);
    *b = auxiliar + *b;
    printf("Ingrese los votos del partido Tres: ");
    scanf("%d", &auxiliar);
    *c = auxiliar + *c;
    printf("Ingrese los votos del partido Cuatro: ");
    scanf("%d", &auxiliar);
    *d = auxiliar + *d;
}

void ejerUno(){
    int partidoUno=0, partidoDos=0, partidoTres=0, partidoCuatro=0;
    auxiliarUno(&partidoUno, &partidoDos, &partidoTres, &partidoCuatro);
    auxiliarUno(&partidoUno, &partidoDos, &partidoTres, &partidoCuatro);
    auxiliarUno(&partidoUno, &partidoDos, &partidoTres, &partidoCuatro);
    auxiliarUno(&partidoUno, &partidoDos, &partidoTres, &partidoCuatro);
    auxiliarUno(&partidoUno, &partidoDos, &partidoTres, &partidoCuatro);
    auxiliarUno(&partidoUno, &partidoDos, &partidoTres, &partidoCuatro);
    auxiliarUno(&partidoUno, &partidoDos, &partidoTres, &partidoCuatro);
    if(partidoUno==partidoDos&&partidoDos==partidoTres&&partidoTres==partidoCuatro){
        printf("Los cuatro partidos empataron las elecciones con %d votos.\n", partidoUno);
    }else{
        if(partidoUno>partidoDos&&partidoUno>partidoTres&&partidoUno>partidoCuatro){
            printf("El ganador es el Partido Uno con %d votos\n", partidoUno);
        }else{
            if(partidoDos>partidoUno&&partidoDos>partidoTres&&partidoDos>partidoCuatro){
                printf("El ganador es el Partido Dos con %d votos\n", partidoDos);
            }else{
                if(partidoTres>partidoDos&&partidoTres>partidoUno&&partidoTres>partidoCuatro){
                    printf("El ganador es el Partido Tres con %d votos\n", partidoTres);
                }else{
                    printf("El ganador es el Partido Cuatro con %d votos\n", partidoCuatro);
                }
            }
        }
    }
}


void ejerDos(int total){
    int opcion, venta, totl=total;
    printf("\n--Menu Supermercado--\n1.Adicionar venta.\n2.Recaudado total.\n3.Salir\nElejir opcion: ");
    scanf("%d", &opcion);
    if(opcion!=3){
        if(opcion==1){
            printf("Ingrese el monto de la venta: ");
            scanf("%d", &venta);
            printf("Elija el departamento\n1.Ropa.\n2.Comestibles.\n3.Perfumeria.\nElejir opcion: ");
            scanf("%d", &opcion);
            if(venta>100){
                if(opcion==1){
                    venta = venta - (venta*5/100);
                }else{
                    if(opcion==1){
                        venta = venta - (venta*3.5/100);
                    }else{
                        venta = venta - (venta*8/100);
                    }
                }
            }
            totl = totl + venta;
            printf("El monto a pagar es de $ %d.\n", venta);

        }else{
            if(opcion==2){
                printf("Recaudo total del dia es: $ %d .\n", totl);
            }else{
                printf("Opcion fuera de rango.");
            }
        }
        ejerDos(totl);
    }
}

void auxiliarDos(int *contador, int *personas, float *a, float *b, float *c){
    float montoHora, horas, hExDiurno, hExNocturno;
    float total=0;
    if (*contador<*personas){
        printf("Datos de el empleado %d\n", *contador+1);
        printf("Ingrese el pago por hora: ");
        scanf("%f", &montoHora);
        printf("Ingrese las horas normales trabajadas: ");
        scanf("%f", &horas);
        printf("Ingrese las horas extra diurna(desde 0): ");
        scanf("%f", &hExDiurno);
        printf("Ingrese las horas extra nocturna(desde 0): ");
        scanf("%f", &hExNocturno);
        a[*contador] = montoHora*horas;
        b[*contador] = (montoHora*hExDiurno*2);
        c[*contador] = (montoHora*hExNocturno*2) + ((montoHora/100)*hExNocturno*2*25);
        *contador = *contador +1;
        printf("contador funcionando %d\n", *contador);
        auxiliarDos(contador, personas, a, b, c);
    }
}

float auxiliarTres(int *contador, int *personas, float *a, float *b, float *c){
    float total = 0;
    if (*contador!=*personas)
    {
        total = a[*contador] + b[*contador] + c[*contador];
        printf("El monto a pagar al empleado %d\nhoras normales = %f; horas extra diurna = %f; horas extra nocturna = %f; Total = %f\n", (*contador+1), a[*contador], b[*contador], c[*contador], total);
        total = b[*contador] + c[*contador];
        *contador = *contador +1;
        total = total + auxiliarTres(contador, personas, a, b, c);
    }
    return total;
}

void ejerTres(){
    int personas, contador = 0;
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &personas);
    float total, horas[personas], hExDiurno[personas], hExNocturno[personas];
    auxiliarDos(&contador, &personas, horas, hExDiurno, hExNocturno);
    contador = 0;
    total = auxiliarTres(&contador, &personas, horas, hExDiurno, hExNocturno);
    printf("El total a pagar por concepto de horas extra es de: %f\n", total);
}

void ejerCuatro(){
    int temp, humedad;
    printf("Ingrese la temperatura: ");
    scanf("%d", &temp);
    printf("Ingrese la humedad: ");
    scanf("%d", &humedad);
    if(temp==25 && humedad==90){
        printf("Pantalon largo y camisa.\n");
    }else{
        if(temp==10 && humedad==10 ){
            printf("Pantalon de pana y chaleco.\n");
        }else{
            if(temp==2 && humedad==45 ){
                printf("Pantalon, chaleco y abrigo.\n");
            }else{
                if(temp==30 && humedad==85 ){
                    printf("Pantalon corto y camiseta.\n");
                }else{
                    if(temp==38 && humedad==86 ){
                        printf("Pantalon corto y camiseta.\n");
                    }else{
                        printf("No hay sugerencia en la tabla de valores para esos datos\n");
                    }
                }
            }
        }
    }
}

void ejerCinco(){
    float diasAtraso, deuda;
    printf("Ingrese los dias atrasados: ");
    scanf("%f", &diasAtraso);
    printf("Ingrese el monto de la deuda: ");
    scanf("%f", &deuda);
    if(diasAtraso>130){
        deuda = deuda + (deuda*15)/100;
    }else{
        if(diasAtraso>91){
            deuda = deuda + (deuda*7)/100;
        }else{
            if(diasAtraso>61){
                deuda = deuda + (deuda*5)/100;
            }else{
                if(diasAtraso>30){
                    deuda = deuda + (deuda*2)/100;
                }
            }
        }
    }
    printf("El monto a pagar es de: %f\n", deuda);
}

void ejerSeis(){
    float montoActual, totalMeses, tasaInteres;
    printf("Ingrese el monto actual: ");
    scanf("%f", &montoActual);
    printf("Ingrese el total de meses transcurrido: ");
    scanf("%f", &totalMeses);
    printf("Ingrese la tasa de interes mensual simple: ");
    scanf("%f", &tasaInteres);
    printf("El monto inicial es de: %f\n", (montoActual/(1+(tasaInteres*totalMeses))));
}

void menu(){
    int opcion;
    printf("\n---Menu---\n1.Ejercicio Uno\n2.Ejercicio Dos\n3.Ejercicio Tres\n4.Ejercicio Cuatro\n5.Ejercicio Cinco\n6.Ejercicio Seis\n7.Salir\nElejir opcion: ");
    scanf("%d", &opcion);
    if (opcion!=7){
        switch(opcion){
            case 1: ejerUno(); break;
            case 2: ejerDos(0); break;
            case 3: ejerTres(); break;
            case 4: ejerCuatro(); break;
            case 5: ejerCinco(); break;
            case 6: ejerSeis(); break;
            case 7: break;
            default: printf("Opcion fuera del rango.\n"); break;
        }
        menu();
    }
}

main(){
    menu();
}