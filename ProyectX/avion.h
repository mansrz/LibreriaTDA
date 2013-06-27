#ifndef _AVION_H
#define _AVION_H
#include "../LibreriaTDA/include/list.h"
typedef struct Avion{
	int capacidad;
	int modelo;
	List asientos;
}Avion;


Avion* AvionNew(int modelo);
void AvionSetModelo(Avion *avion,int modelo);

#endif