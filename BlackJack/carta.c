#include "carta.h"
#include <stdlib.h>
#include <time.h>



Carta* CartaCrear(tipoCarta c, int numero){
	Carta *carta;
	carta=(Carta*) malloc(sizeof(Carta));
	carta->numero=numero;
	carta->tipo=c;
	return carta;
}

void CartaSetpalo(Carta *c,tipoCarta a){
	c->tipo=a;
}

tipoCarta CartaGetPalo(Carta *c){
	return c->tipo;
}
int CartaGetNumero(Carta *c){
	return c->numero;
}
int CartaCompararNumero(Carta *c1,Carta *c2){
	if(c1->numero==c2->numero){
		return 1;
	}else{
		return 0;
	}
}

List* CrearBaraja(){
	int i,n=0;

	List *lista;
	lista=listNew();
	for(i=1;i<=40;i++){
		if(n==0){
			listAddNode(lista,nodeListNew(CartaCrear(CORAZON_R,i )));
		}else if(n==1){
			listAddNode(lista,nodeListNew(CartaCrear(CORAZON_N,i )));
		}else if(n==2){
			listAddNode(lista,nodeListNew(CartaCrear(PICAS,i )));
		}else if(n==3){
			listAddNode(lista,nodeListNew(CartaCrear(TREBOL,i )));
		}else if(n>3){
			n=-1;
		}
		n++;
	}
	return lista;
}
Stack* CartasBarajar(List *lista){
	int i,num_rand;
	NodeList *d;
	d=listGetHeader(lista);
	Stack *barajada;
	barajada=stackNew();
	srand(time(NULL));
	for(i=1;i<=40;i++)
	{
		num_rand=2+rand()%4;
		if(num_rand%2==0){
			lista
		}else{
		}
	}

}
