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
			for (int i = 0; i < (((cantidad - cantidad%12)/12)-3); ++i){
				obsequio++;
			}
			if (obsequio>0){
				printf("El precio de la compra con descuento del 15 porciento es de %f y con obsequio de %d mas\n", total, obsequio);
			}else{
				printf("El precio de la compra con descuento del 15 porciento es de %f\n", total);
			}
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
			}else{
				total = pagoHora*horas;
			}
		}
		printf("El total a pagar al trabajador %d es: %f\n", i, total);
	}
	printf("El dinero para %d trabajador(es) por concepto de las horas extra es de: %f\n", trabajadores, conceptoHEx);
}

main(){
	menu();
}