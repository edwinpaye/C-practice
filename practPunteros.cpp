#include <stdio.h>

void changeInt(int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

void punteroUno(){
	int x = 7;
	int y = 9;
	printf("x = %d and y = %d\n", x, y);
	changeInt(&x, &y);
	printf("x = %d and y = %d\n", x, y);
}

main()
{
	punteroUno();
	// printf("%d\n", 4);
    // return 0;
}