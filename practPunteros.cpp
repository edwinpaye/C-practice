#include <stdio.h>
#include <string.h>

void changeInt(int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

struct persona{
	int id;
	char nombre[20];
	char apellido[20];
};

void punteroUno(){
	int x = 7;
	int y = 9;
	printf("x = %d and y = %d\n", x, y);
	changeInt(&x, &y);
	printf("x = %d and y = %d\n", x, y);
}

void printStruct(struct persona *p){
	printf(" Id: %d\n Nombre: %s\n Apellido: %s\n",
		p->id, p->nombre, p->apellido);	
}

void punteroDos(){
	struct persona pUno;
	pUno.id = 123;
	strcpy(pUno.nombre, "pedro");
	strcpy(pUno.apellido, "perez");
	printf(" Nombre: %s\n Apellido: %s\n", pUno.nombre, pUno.apellido);
	printStruct(&pUno);
}

main()
{
	punteroDos();
}