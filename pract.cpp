#include <iostream>
#include <stdlib.h>

using namespace std;

void ejercicioUno(){
	int x;
	cout<<"Ingrese un numero entero: ";
	cin>>x;
	cout<<"El primer numero es: "<<(x%10)<<endl;
}

void ejercicioDos(){
	int x;
	cout<<"Ingrese un numero entero mayo o igual que diez: ";
	cin>>x;
	cout<<"El penultimo numero es: "<<((x%100)-(x%10))/10<<endl;
}

void ejercicioTres(){
	int x;
	cout<<"Ingrese un numero entero de cuatro digitos: ";
	cin>>x;
	cout<<(x-(x%100))/100<<", "<<x%100<<endl;
}

void ejercicioCuatro(){
	int x,y,z;
	cout<<"Ingrese tres numeros enteros de un digito: "<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
	cout<<x<<y<<z<<endl;
}

void ejercicioCinco(){
	int x;
	cout<<"Ingrese un numero entero de cuatro digitos: ";
	cin>>x;
	cout<<x%10<<((x%100)-(x%10))/10<<((x%1000)-(x%100))/100<<(x-(x%1000))/1000<<endl;
}

void ejercicioSeis(){
	int x;
	cout<<"Ingrese un numero entero de tres digitos: ";
	cin>>x;
	cout<<(x-(x%100))/100<<(x-(x%100))/100<<((x%100)-(x%10))/10<<((x%100)-(x%10))/10<<x%10<<x%10<<endl;
}

void ejercicioSiete(){
	int x,y;
	cout<<"Ingrese dos numeros enteros de tres digitos: "<<endl;
	cin>>x;
	cin>>y;
	cout<<x<<y<<endl;
}

void ejercicioOcho(){
	int x,y,z;
	cout<<"Ingrese tres numeros enteros: "<<endl;
	cin>>x;
	cin>>y;
	cin>>z;
	if (x>y&&x>z)
	{
		if (y>z)
		{
			/* code */
		}else{

		}
	}
}

void ejercicioDies(){
	int x;
}
int opcion(){
	int x;
	do{
		cout<<"1. Ejercicio Uno"<<endl;
		cout<<"2. Ejercicio Dos"<<endl;
		cout<<"3. Ejercicio Tres"<<endl;
		cout<<"4. Ejercicio Cuatro"<<endl;
		cout<<"5. Ejercicio Cinco"<<endl;
		cout<<"6. Ejercicio Seis"<<endl;
		cout<<"7. Ejercicio Siete"<<endl;
		cout<<"8. Ejercicio Ocho"<<endl;
		cout<<"9. Ejercicio Nueve"<<endl;
		cout<<"10. Ejercicio Dies"<<endl;
		cout<<"11. Salir"<<endl;
		cout<<"Elejir opcion: ";
		cin>>x;
		if (x<1 || x >11)
		{
			cout<<"----Opcion fuera de rango intente denuevo----"<<endl;
		}
	}while(x<1 || x>11);
	return x;
}

int main(){
	int x = 1;
	bool y = true;
	//cin.get();
	//ejercicioSiete();
	while(y){
		x = opcion();
		if (x==11)
		{
			y=false;
		}else{
			switch(x){
				case 1: ejercicioUno();break;
				case 2: ejercicioDos();break;
				case 3: ejercicioTres();break;
				case 4: ejercicioCuatro();break;
				case 5: ejercicioCinco();break;
				case 6: ejercicioSeis();break;
				case 7: ejercicioSiete();break;
				case 8: ejercicioOcho();break;
				case 11: x=11;break;
			}	
		}
	}

	return 0;
}