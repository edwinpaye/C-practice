#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int aleatorio(int limite_inferior, int limite_superior){
    return limite_inferior + rand() % (limite_superior +1 - limite_inferior);
}

void ejercicio(){
    int dado, n;
    printf("Ingrese cantidad de lanzamientos: ");
    scanf("%d", &n);
    srand(time(NULL));
    for(int c=1;c<=n;c++){
        dado = aleatorio(1, 6);
        printf("%d\t", dado);
    }
}

/*realizar un algoritmo para realizar un juego de
lanzamiento de un dado. El juego termina cuando
el valor del dado obtenido es un numero par, mostrar
por pantalla el valor del dado y el numero de intentos
en el que obtuvo el resultado.*/

void ejercicioUno(){
    srand(time(NULL));
    int dado=1, contador=0;
    while(dado%2!=0){
        dado = aleatorio(1, 6);
        contador++;
        if(dado%2!=0)
            printf("%d\n", dado);
    }
    printf("%d\n", dado);
    printf("El dado es: %d, con%d intento(s).\n", dado, contador);
}

void ejercicioDos(){
    srand(time(NULL));
    int dadoA=1, dadoB=0, dadoC=0, contador=0;
    bool validador = true;
    while(dadoA!=dadoB||dadoA!=dadoC){
        dadoA = aleatorio(1, 6);
        dadoB = aleatorio(1, 6);
        dadoC = aleatorio(1, 6);
        contador++;
        printf("%d - %d - %d\n", dadoA, dadoB, dadoC);
    }
    printf("Trica en el turno: %d\n", contador);
}

/*lanzar tres cartas, el primero y segundo de 1 al 14 el tercero de 0 a 14
el juego termina cuando se forma una trica, considerar a la tercera carta como
comodin cuando obtenga el valor de 0*/

void ejercicioTres(){
    srand(time(NULL));
    int cartA, cartB, cartC, contador=0;
    bool validador = true;
    while(validador){
        cartA = aleatorio(1, 6);
        cartB = aleatorio(1, 6);
        cartC = aleatorio(0, 6);
        contador++;
        if(cartA==cartB&&(cartC==0||cartA==cartC)){
            cout<<cartA<<" - "<<cartB<<" - "<<cartC<<endl;
            validador = false;
        }else
            cout<<cartA<<" - "<<cartB<<" - "<<cartC<<endl;
    }
    if(cartC==0)
        cout<<"Par y comodin en el turno: "<<contador<<endl;
    else
        cout<<"Trica en el turno: "<<contador<<endl;
}

bool auxiliar(int intento, string jugador){
    int cartA, cartB, cartC;
        cartA = aleatorio(1, 6);
        cartB = aleatorio(1, 6);
        cartC = aleatorio(0, 6);
        cout<<intento<<". "<<jugador<<": "<<cartA<<" - "<<cartB<<" - "<<cartC<<endl;
        if(cartA==cartB&&(cartC==0||cartA==cartC))
            return false;
    return true;
}

void ejercicioCuatro(){
    srand(time(NULL));
    int contadorA=0, contadorB=0;
    bool jugadorA = true, jugadorB = true;
    while(jugadorA||jugadorB){
        if(jugadorA){
            contadorA++;
            jugadorA = auxiliar(contadorA, "Jugador Uno");
        }
        if(jugadorB){
            contadorB++;
            jugadorB = auxiliar(contadorB, "Jugador Dos");
        }
    }
    if(contadorA==contadorB)
        cout<<"Empate en el turno "<<contadorA<<endl;
    else{
        if(contadorA<contadorB){
            cout<<"Gana el jugador Uno con "<<contadorA<<" intentos."<<endl;
            cout<<"El jugador Dos con "<<contadorB<<" intentos."<<endl;
        }else{
            cout<<"Gana el jugador Dos con "<<contadorB<<" intentos."<<endl;
            cout<<"El jugador Uno con "<<contadorA<<" intentos."<<endl;
        }
    }
}

void ejmSwitch(){
    int x;
    cout<<"Elegir opcion: ";
    cin>>x;
    switch(x){
        case 1: printf("Lunes\n"); break;
        case 2: printf("Martes\n"); break;
        case 3: printf("Miercoles\n"); break;
        case 4: printf("Jueves\n"); break;
        case 5: printf("Viernes\n"); break;
        case 6: printf("Sabado\n"); break;
        case 7: printf("Domingo\n"); break;
        default: printf("Opcion fuera de rango\n"); break;
    }
}

//Menu de juegos
void menuJuegos(){
    int x;
    do{
        printf("\n---* MENU JUEGOS *---\n1. Juego Uno.\n2. Juego Dos.\n3. Salir.\nElejir opcion: ");
        scanf("%d", &x);
        switch(x){
            case 1: ejercicioDos(); break;
            case 2: ejercicioCuatro(); break;
            case 3: printf("Hasta luego...\n"); break;
            default: printf("Opcion fuera de rango\n"); break;
        }
    }while(x!=3);
}

main(){
    menuJuegos();
}
