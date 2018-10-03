#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void ejerUno(){
	int precio, cantidad, personas, obsequio=0;
	float total=0;
	printf("\nIngrese la cantidad de personas: ");
	scanf("%d", &personas);
	printf("Ingrese el valor del producto en unidad: ");
	scanf("%d", &precio);
	for (int i = 0; i < personas; ++i){
		printf("Ingrese el total de unidades de la persona %d: ", i+1);
		scanf("%d", &cantidad);
		total = precio*cantidad;
		if (((cantidad - cantidad%12)/12)>3){
			total = total - (total*15)/100;
			for (int i = 0; i < (((cantidad - cantidad%12)/12)-3); ++i)
				obsequio++;
			if (obsequio>0)
				printf("El precio de la compra con descuento del 15 porciento es de %f y con obsequio de %d mas\n", total, obsequio);
			else
				printf("El precio de la compra con descuento del 15 porciento es de %f\n", total);
		}else{
			total = total - total/10;
			printf("El precio de la compra con descuento del 10 porciento es de %f\n", total);
		}
	}
}

void incisoUno(){
	int trabajadores, horas, pagoHora;
	float total=0, conceptoHEx=0;
	printf("Ingrese la cantidad de trabajadores: ");
	scanf("%d", &trabajadores);
	printf("Ingrese el pago por hora: ");
	scanf("%d", &pagoHora);
	for (int i = 1; i <= trabajadores; ++i){
		printf("Ingrese las horas del trabajador %d: ", i);
		scanf("%d", &horas);
		if (horas>48){
			total = pagoHora*40 + pagoHora*2*8 + pagoHora*3*(horas-48);
			conceptoHEx += (pagoHora*2*8 + pagoHora*3*(horas-48));
		}else{
			if (horas>40){
				total = pagoHora*40 + pagoHora*2*(horas-40);
				conceptoHEx += pagoHora*2*(horas-40);
			}else
				total = pagoHora*horas;
		}
		printf("El total a pagar al trabajador %d es: %f\n", i, total);
	}
	printf("El dinero para %d trabajador(es) por concepto de las horas extra es de: %f\n", trabajadores, conceptoHEx);
}

void incisoDos(){
	int xa, xb, ya, yb;
	printf("Ingrese la coordenada de x1: ");
	scanf("%d", &xa);
	printf("Ingrese la coordenada de y1: ");
	scanf("%d", &ya);
	printf("Ingrese la coordenada de x2: ");
	scanf("%d", &xb);
	printf("Ingrese la coordenada de y2: ");
	scanf("%d", &yb);
	printf("Coordenadas polares r = %d y alfa = %f\n", (xb+yb)/2, (atan(ya/xa)*180/PI));
}

void incisoTres(){
	int n;
	float l = 0;
	printf("Ingrese la cantidad de tanques de gasolina: ");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		l += (float)1/(2*(i+1)-1);
	printf("La distancia que viajara el jeep es de: %f\n", 500*l);
}

void ejerDos(){
	int opcion;
	do{
		printf("\n---Segundo Menu---\n1.Determinar el dinero de n trabajadores\n2.Coordenadas polares\n3.Distancia con n gasolina\n4.Salir\nElejir opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: incisoUno(); break;
			case 2: incisoDos(); break;
			case 3: incisoTres(); break;
			case 4: break;
			default: printf("Opcion fuera de rango\n");
		}
	} while (opcion!=4);
}

void ejerTres(){
	int n, caja = 4300, egreso, totalEgreso=0;
	printf("\nIngrese la cantidad de egresos: ");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		printf("Ingrese la cantidad del egreso %d: ", i+1);
		scanf("%d", &egreso);
		if (egreso>-1){
			if (egreso<caja){
				caja = caja - egreso;
				totalEgreso += egreso;
			}else
				printf("El egreso supera a la cantidad restante de la caja %d\n", caja);
		}else
			i=n;
	}
	printf("Total de egresos registrados = %d y el restante de caja = %d\n", totalEgreso, caja);
}

void ejerCuatro(){
	int capital, resto;
	printf("Ingrese la cantidad de capital actual: ");
	scanf("%d", &capital);
	if (capital>20000)
		resto = capital-7000;
	else{
		if (capital>-1){
			printf("Se pedira un prestamo de %d para el nuevo saldo de 20000 $us.\n", 20000-capital);
			resto = 13000;
		}else{
			printf("Se pedira un prestamo de %d para el nuevo saldo de 10000 $us. \n", (capital*(-1)+10000));
			resto = 3000;
		}
	}
	printf("-Se destinaran 5000 $us para equipos de computacion.\n-Se destinaran 2000 $us para mobiliario\n");
	printf("-Se destinara %d $us para comprar insumos y %d $us para incentivos al personal.\n", resto/2, resto/2);
}

void menu(){
	int opcion;
	do{
		printf("\n---Menu---\n1.Ejercicio Uno\n2.Ejercicio Dos\n3.Ejercicio Tres\n4.Ejercicio Cuatro\n5.Salir\nElejir opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: ejerUno(); break;
			case 2: ejerDos(); break;
			case 3: ejerTres(); break;
			case 4: ejerCuatro(); break;
			case 5: break;
			default: printf("Opcion fuera de rango\n");
		}
	} while (opcion!=5);
}

main(){
	menu();
}