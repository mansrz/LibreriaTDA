#include "carta.h"
#include <stdlib.h>

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
