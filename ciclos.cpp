#include <stdio.h>

void ejemUno(){
	int alumnos, auxiliar=0, nota, promedio, cont=0;
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &alumnos);
	printf("Ingrese el promedio minimo: ");
	scanf("%d", &promedio);
	for (int i = 1; i <= alumnos; ++i)
	{
		for (int j = 1; j <= 5; ++j)
		{
			printf("Ingrese la nota del alumno %d de la unidad %d: ", i, j);
			scanf("%d", &nota);
			auxiliar += nota;
		}
		if (auxiliar/5<promedio)
		{
			cont++;
		}

	}
	printf("La cantidad de alumnos que no tendran derecho al examen: %d\n", cont);
}

void ejemDos(){
	int candidatoUno=0,candidatoDos=0,candidatoTres=0,votos,auxiliar;
	printf("Ingrese la cantidad de votos: ");
	scanf("%d", &votos);
	for (int i = 1; i <= votos; ++i)
	{
		printf("Ingrese el numero del candidato para votar: ");
		scanf("%d", &auxiliar);
		if (auxiliar==1)
		{
			candidatoUno++;
		}else{
			if (auxiliar==2)
			{
				candidatoDos++;
			}else{
				candidatoTres++;
			}
		}
	}
	if (candidatoUno==candidatoDos && candidatoUno==candidatoTres){
		printf("Empate entre los tres candidatos con %d votos\n", candidatoUno);
	}else{
		if (candidatoUno>candidatoDos && candidatoUno>candidatoTres){
			printf("El ganador es el candidato Uno\n");
		}else{
			if (candidatoDos>candidatoUno && candidatoDos>candidatoTres)
			{
				printf("El ganador es el candidato Dos\n");
			}else{
				if (candidatoTres>candidatoUno && candidatoTres>candidatoDos)
				{
					printf("El ganador es el candidato Tres\n");
				}else{
					if (candidatoUno==candidatoDos)
					{
						printf("Empate entre el candidato Uno y Dos\n");
					}else{
						if (candidatoUno==candidatoTres)
						{
							printf("Empate entre el candidato Uno y Tres\n");
						}else{
							printf("Empate entre el candidato Dos y Tres\n");
						}
					}
				}
			}
		}
	}
}

void ejemTres(){
	int cont=0, total=0, opcion=1, auxiliar;
	do
	{
		printf("---MENU---\n1.Registrar venta.\n2.Total de ventas.\n3.Salir.\nElejir opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: {
				printf("Ingrese el total de la venta: ");
				scanf("%d", &auxiliar);
				total += auxiliar;
				cont++;
			} break;
			case 2: printf("El total de ventas es %d y el total de clientes %d\n", total, cont); break;
			case 3: break;
			default: printf("Opcion no valida."); break;
		}
	} while (opcion!=3);
}

void ejemCuatro(){
	printf("%f\n", 50/0.25);
}

main(){
	ejemCuatro();
}