#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int aleatorio(int limite_inferior, int limite_superior){
    return limite_inferior + rand() % (limite_superior +1 - limite_inferior);
}

void ejercicio(){
    int dado, n;
    cout << "Ingrese cantidad de lanzamientos: ";
    cin>>n;
    srand(time(NULL));
    for(int c=1;c<=n;c++){
        dado = aleatorio(1, 6);
        cout<<dado<<'\t';
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
            cout<<dado<<endl;
    }
    cout<<dado<<endl;
    cout<<"El dado es: "<<dado<<", con "<<contador<<" intento(s)."<<endl;
}

void ejercicioDos(){
    srand(time(NULL));
    int dadoA, dadoB, dadoC, contador=0;
    bool validador = true;
    while(validador){
        dadoA = aleatorio(1, 6);
        dadoB = aleatorio(1, 6);
        dadoC = aleatorio(1, 6);
        contador++;
        if(dadoA==dadoB&&dadoA==dadoC){
            cout<<dadoA<<" - "<<dadoB<<" - "<<dadoC<<endl;
            validador = false;
        }else
            cout<<dadoA<<" - "<<dadoB<<" - "<<dadoC<<endl;
    }
    cout<<"Trica en el turno: "<<contador<<endl;
}

main(){
    menuJuegos();
}
