
#include <iostream>
#include <conio.h>
using namespace std;

int money[100], quincena[100][6], cont, cont2;
void dinero();
void gastos();

int main(){
	int A=1, opcion;
	
	while(A==1){		
		cout<<"Bievenido a finanzas"<<endl;
		cout<<endl;
		cout<<"Opciones a realizar: "<<endl;
		cout<<"1- Agregar su nueva quincena"<<endl;
		cout<<"2- Gastos y deducciones"<<endl;
		cout<<"3- Historial de gastos"<<endl;
		cout<<"A continuación digite la opcion que desea a realizar: ";
		cin>>opcion;
		
		if (opcion>3){
			system("cls");
			cout<<"Ha ingresado un digito incorrecto"<<endl;
			cout<<"Favor de ingresar el digito correcto"<<endl;
		}else{
			system("cls");
			switch(opcion){
				case 1:
					dinero();
				break;
				case 2:
					
				break;
			}
		}
	}
	
	return 0;
}

void dinero(){
	cout<<"ingrese la cantidad ganada en la quincena: ";
	cin>>money[cont];
	cont++;
}

void gastos(){
	int gasto, sector;
	cout<<"Gastos y deducciones"<<endl;
	cout<<"\n---------------------------\n";
	cout<<"1- Gastos del hogar"<<endl;
	cout<<"2- Gasolina y transporte"<<endl;
	cout<<"3- Gastos en restaurantes"<<endl;
	cout<<"4- Entretenimiento"<<endl;
	cout<<"5- Otros"<<endl;
	cout<<"6- Salir"<<endl;
	cin>>sector;
	
	if(sector<6){
		cout<<endl<<"Ingrese la cantidad de dinero: ";
		cin>>gasto;
		
		while(gasto>money[cont]){
			system("cls");
			cout<<"Ha ingresado un monto mayor al que cuenta actualmente"<<endl;
			cout<<"Vuelva a ingresar el monto"<<endl;
			getch();
			cout<<endl<<"Ingrese la cantidad de dinero: ";
			cin>>gasto;
		}
		quincena[cont][sector]=quincena[cont][sector]+gastos;
		quincena[cont][0]=quincena[cont][0]+gasto;
		money[cont]=money[cont]-gasto;
	}
	
}
