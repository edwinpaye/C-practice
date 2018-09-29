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

main(){
	menu();
}