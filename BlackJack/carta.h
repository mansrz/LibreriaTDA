#ifndef _CARTA_H
#define _CARTA_H

#include "../LibreriaTDA/include/stack.h"
#include "../LibreriaTDA/include/list.h"
 typedef enum tipoCarta {
	CORAZON_R=1,
	TREBOL=2,
	PICAS=3,
	CORAZON_N=4}tipoCarta;


typedef struct Carta{

	int numero;
 tipoCarta tipo;

}Carta;


Carta* CartaCrear(tipoCarta c, int numero);
void CartaSetPalo(Carta *c,tipoCarta a);
List* CrearBaraja();
Stack* CartasBarajar(List *lista);
tipoCarta CartaGetPalo(Carta *c);
int CartaGetNumero(Carta *c);
int CartaCompararNumero(Carta *c1,Carta *c2);




#endif