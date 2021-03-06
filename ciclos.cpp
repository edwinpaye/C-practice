#include <stdio.h>

void ejemUno(){
	int alumnos, auxiliar=0, nota, promedio, cont=0;
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &alumnos);
	printf("Ingrese el promedio minimo: ");
	scanf("%d", &promedio);
	for (int i = 1; i <= alumnos; ++i){
		for (int j = 1; j <= 5; ++j){
			printf("Ingrese la nota del alumno %d de la unidad %d: ", i, j);
			scanf("%d", &nota);
			auxiliar += nota;
		}
		if (auxiliar/5<promedio)
			cont++;
	}
	printf("La cantidad de alumnos que no tendran derecho al examen: %d\n", cont);
}

void ejemDos(){
	int candidatoUno=0,candidatoDos=0,candidatoTres=0,votos,auxiliar;
	printf("Ingrese la cantidad de votos: ");
	scanf("%d", &votos);
	for (int i = 1; i <= votos; ++i){
		printf("Ingrese el numero del candidato para votar: ");
		scanf("%d", &auxiliar);
		if (auxiliar==1)
			candidatoUno++;
		else{
			if (auxiliar==2)
				candidatoDos++;
			else
				candidatoTres++;
		}
	}
	if (candidatoUno==candidatoDos && candidatoUno==candidatoTres)
		printf("Empate entre los tres candidatos con %d votos\n", candidatoUno);
	else{
		if (candidatoUno>candidatoDos && candidatoUno>candidatoTres)
			printf("El ganador es el candidato Uno\n");
		else{
			if (candidatoDos>candidatoUno && candidatoDos>candidatoTres)
				printf("El ganador es el candidato Dos\n");
			else{
				if (candidatoTres>candidatoUno && candidatoTres>candidatoDos)
					printf("El ganador es el candidato Tres\n");
				else{
					if (candidatoUno==candidatoDos)
						printf("Empate entre el candidato Uno y Dos\n");
					else{
						if (candidatoUno==candidatoTres)
							printf("Empate entre el candidato Uno y Tres\n");
						else
							printf("Empate entre el candidato Dos y Tres\n");
					}
				}
			}
		}
	}
}

void ejemTres(){
	int cont=0, total=0, opcion=1, auxiliar;
	do{
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
	int venta, deposito, opcion;
	float total=0, iva;
	char moneda[10];
	printf("Ingrese el porcentaje de IVA: ");
	scanf("%f", &iva);
	iva = 100/iva;
	printf("Ingrese el tipo de moneda:");
	scanf("%s", moneda);
	do{
		printf("---MENU---\n1.Registrar venta.\n2.Total de ventas en caja.\n3.Salir.\nElejir opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: {
				printf("Ingrese el monto de la venta: ");
				scanf("%d", &venta);
				printf("El total a pagar con iva es: %f %s.\nIngrese el pago del cliente: ", ((venta/iva)+venta), moneda);
				scanf("%d", &deposito);
				if (deposito>((venta/iva)+venta)){
					printf("Cambio de %f %s.\n", (deposito-((venta/iva)+venta)), moneda);
				}
				printf("Venta concluida con exito!\n");
				total += ((venta/iva)+venta);
			} break;
			case 2: printf("El total de ventas es: %f %s.\n", total, moneda); break;
			case 3: break;
			default: printf("Opcion no valida."); break;
		}
	} while (opcion!=3);
}

void ejemCinco(){
	int venta, deposito, opcion;
	float total=0, iva;
	char moneda[10];
	printf("Ingrese el porcentaje de IVA: ");
	scanf("%f", &iva);
	iva = 100/iva;
	printf("Ingrese el tipo de moneda:");
	scanf("%s", moneda);
	do{
		printf("---MENU---\n1.Registrar venta.\n2.Total de ventas en caja.\n3.Salir.\nElejir opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: {
				printf("Ingrese el monto de la venta: ");
				scanf("%d", &venta);
				printf("El total a pagar con iva es: %f %s.\n", ((venta/iva)+venta), moneda);
				while(deposito<((venta/iva)+venta)){
					printf("Ingrese el pago del cliente: ");
					scanf("%d", &deposito);
					if (deposito<((venta/iva)+venta))
						printf("El pago es insuficiente....\n");
				}
				if (deposito>((venta/iva)+venta))
					printf("Cambio de %f %s.\n", (deposito-((venta/iva)+venta)), moneda);
				printf("Venta concluida con exito!\n");
				total += ((venta/iva)+venta);
			} break;
			case 2: printf("El total de ventas es: %f %s.\n", total, moneda); break;
			case 3: break;
			default: printf("Opcion no valida."); break;
		}
	} while (opcion!=3);
}

void ejemSeis(){
	int tarjetas, edad, auxiliar, estadoCivil, sexo;
	printf("Ingrese la cantidad de tarjetas: ");
	scanf("%d", &tarjetas);
	auxiliar = tarjetas;
	int numCenso[auxiliar];
	bool elejir[auxiliar];
	for (int i = 0; i < auxiliar; ++i){
		printf("Ingrese el numero de censo: ");
		scanf("%d", &numCenso[i]);
		printf("Ingrese el sexo\n1.M\n2.F\nOpcion: ");
		scanf("%d", &sexo);
		printf("Ingrese la edad: ");
		scanf("%d", &edad);
		printf("Estado civil\n1.Soltero\n2.Casado\n3.Viudo\n4.Divorciado\nOpcion: ");
		scanf("%d", &estadoCivil);
		if (estadoCivil==1&&sexo==2&&edad>15&&edad<22)
			elejir[i] = true;
		else
			elejir[i] = false;
	}
	printf("Los censos de las jovenes solteras con edad entre 16 y 21 son:\n");
	for (int j = 0; j < auxiliar; ++j){
		if (elejir[j])
			printf("%d\n", numCenso[j]);
	}
}

void ejemSiete(){
	
}

void menu(){
	int x;
	do{
		printf("---MENU---\nElija un ejercicio seleccionando el numero\nopcion 21 para salir\nElejir ejercicio: ");
		scanf("%d", &x);
		switch(x){
			case 1: ejemUno(); break;
			case 2: ejemDos(); break;
			case 3: ejemTres(); break;
			case 4: ejemCuatro(); break;
			case 5: ejemCinco(); break;
			case 6: ejemSeis(); break;
			case 7: ejemSiete(); break;
			default: break;
		}
	} while (x!=21);
}

main(){
	menu();
}