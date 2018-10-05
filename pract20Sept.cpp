#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int aleatorio(int limite_inferior, int limite_superior){
    return limite_inferior + rand() % (limite_superior +1 - limite_inferior);
}

main(){
    menuJuegos();
}
