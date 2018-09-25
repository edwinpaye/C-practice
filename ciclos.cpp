#include <stdio.h>

void ejemUno(){
	int alumnos, auxiliar=0, nota=0;
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &alumnos);
	for (int i = 1; i <= alumnos; ++i)
	{
		for (int j = 1; j <= 5; ++j)
		{
			printf("Ingrese la nota del alumno %d\n de la unidad %d\n ", i, j);
			scanf("%d", &nota);
			auxiliar += nota;
		}

	}
	printf("%d\n", alumnos);
}

void ejemDos(){

}

main(){
	ejemUno();
}