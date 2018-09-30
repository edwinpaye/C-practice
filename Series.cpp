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

void ejemCuatro(){
	int num, cont = 1;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	while(cont<=num){
		printf("%d,", 5*cont);
		cont++;
	}
	printf("\n");
}

void ejemCinco(){
	int num, cont = 0, cantidad=1;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	while(cont<=num){
		if (cont>0)
		{
			cantidad = cantidad*2;
			printf(",%d", cantidad);
		}else{
			printf("%d", cantidad);
		}
		cont++;
	}
	printf("\n");
}

void ejemSeis(){
	int num, cont = 0, cantidad=1;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	while(cont<num){
		printf("%d,", 100-cont);
		cont++;
	}
}

void ejemSiete(){
	int num, cont = 0, cantidad=1;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	while(cont<num){
		if (cont>0)
		{
			cantidad = cantidad*2;
			printf(",%d,hola", cantidad);
		}else{
			printf("%d,hola", cantidad);
		}
		cont++;
	}
	printf("\n");
}

void ejemOcho(){
	int num, cont = 1, cantidad=1;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	if (num>0){
		while(cont<=num){
			cantidad = cantidad*2;
			printf("%d,%d,", cont*2, 101-cont);
			cont++;
		}
	}
	printf("\n");	
}

void ejemNueve(){
	int num, cont = 1;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	if (num>0){
		while(cont<=num){
			printf("%d,%s,%f,", cont, "A", 100000/(pow(10,cont)));
			cont++;
		}
	}
	printf("\n");
}

void ejemDiez(){
	int num, cont = 1, contDos = 2;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	if (num>0){
		while(cont<=num){
			printf("%d,%d,%d,%s,", (55-5*cont), contDos, cont, "A");
			cont++;
			contDos+=2;
		}
	}
	printf("\n");
}

void ejemOnce(){
	
}

void ejemXVII(){
	int num, cont = 0, suma=0;
	do{
		printf("Ingrese un numero entero positivo para la serie: ");
		scanf("%d", &num);

		 
	}while(num%5==0);
}

void ejemXVIII(){
	int num, cont = 5, suma=0;
	printf("Ingrese un numero entero positivo para la serie: ");
	scanf("%d", &num);
	for (int i = 0; i <= num; ++i){
		if (cont%2==0){
			printf("-%d", cont);
			suma += cont*(-1);
		}else{
			printf("+%d", cont);
			suma += cont;
		}
		cont += 5;
	}
	printf("\nLa suma de de la serie es de: %d\n", suma);
}

main(){
	menu();
}