#include <stdio.h>
#include <conio.h>
#include "..\LibreriaTDA\include\list.h"
void serieFibonacci(int n, List *lista);
void menu(int n);
void printFibonacc(Generic c);
void main(){
int opcion1=0, opcion2=0,n_serie=-3;
List *fibonacci=NULL;
menu(1);
while(opcion1!=2){
	menu(2);
	menu(4);
	scanf_s("%d",&opcion1);
	switch(opcion1){
			case 1:
					fibonacci=NULL;
				while(opcion2!=3){
					menu(3);
					menu(4);
					scanf_s("%d",&opcion2);
				
					switch(opcion2){
						case 1:
							while(n_serie<0){
						menu(4);
						scanf_s("%d",&n_serie);
						if(n_serie<0){
							printf("\n\n\n\nerror de valor\n\n");
						}
							}
						//CrearFibonacci
						fibonacci=listNew();
							if(n_serie==0){
								printf("0");
							listAddNode(fibonacci,nodeListNew((void*)(0)));						
							}else if(n_serie==1){
							listAddNode(fibonacci,nodeListNew((void*)(0)));
							listAddNode(fibonacci,nodeListNew((void*)(1)));
							}else {
								listAddNode(fibonacci,nodeListNew((void*)(0)));
								listAddNode(fibonacci,nodeListNew((void*)(1)));
								serieFibonacci(n_serie,fibonacci);
							}
							//listPrint(fibonacci,(printfn) *printFibonacc);

						break;
						case 2:
							//imprimirFibonacci
							//if(fibonacci!=NULL){
							listPrint(fibonacci,(printfn) *printFibonacc);
							//}
						break;
					
					}
				}
				break;
			case 2:
				menu(5);
				break;
		
		}
}
}

void menu(int n){
switch(n)
	{
		case 1:
			printf("Bienvenido al mejor programa para ver las serie de Fibonacci xD\n");
		break;
		case 2:
			printf("\nMenu:\n\t1)Crear Fibonnaci\n\t2)Salir\n");
		break;
		case 3:
			printf("\nOpciones\n\t1)Ingresar el numero N para hacer Fibonacci\n\t2)Ver Serie\n\t3)Salir\n");
		break;
		case 4:
			printf("\nIngrese: ");
		break;
		
		case 5:
			printf("\nPulse una tecla para salir");
			getch();
		break;
	
	}
}
void serieFibonacci(int n, List *lista){
int a = 0,b = 1,sum=0.00,i;
for (i=0;i<=n-2;i++)
{
	sum = a + b;
	//printf("%d,",sum);
	listAddNode(lista,nodeListNew((void*)sum)); 
	a = b;
	b = sum;
}

}
void printFibonacc(Generic c){
	printf("%d,",(int)c);
}
