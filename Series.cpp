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

void ejemTres(){
	int num, contPares=0, contImpares=0;
	printf("Ingrese un numero entero positivo de un digito: ");
	scanf("%d", &num);
	if (num<10&&num>-1){
		switch(num){
			case 0: printf("cero\n"); break;
			case 1: printf("uno\n"); break;
			case 2: printf("dos\n"); break;
			case 3: printf("tres\n"); break;
			case 4: printf("cuatro\n"); break;
			case 5: printf("cinco\n"); break;
			case 6: printf("seis\n"); break;
			case 7: printf("siete\n"); break;
			case 8: printf("ocho\n"); break;
			case 9: printf("nueve\n"); break;
		}
	}else{
		printf("Error de ingreso\n");
	}
}

main(){
	menu();
}