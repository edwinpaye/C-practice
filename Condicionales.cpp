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

main(){
    
}