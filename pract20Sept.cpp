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

main(){
    menuJuegos();
}
