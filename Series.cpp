#include <stdio.h>
#include <math.h>

void ejemUno(){
	int num, cont=0;
	printf("Ingrese un numero entero positivo: ");
	scanf("%d", &num);
	while(num!=0){
		if ((num%10)%2==0){
			cont++;
		}
		num = num/10;
	}
	printf("Cantidad de numeros par: %d\n", cont);
}

void ejemDos(){
	int num, contPares=0, contImpares=0;
	printf("Ingrese un numero entero positivo: ");
	scanf("%d", &num);
	while(num!=0){
		if ((num%10)%2==0){
			contPares++;
		}else{
			contImpares++;
		}
		num = num/10;
	}
	printf("Cantidad de numeros pares: %d y numeros impares: %d\n", contPares, contImpares);
}

main(){
	menu();
}