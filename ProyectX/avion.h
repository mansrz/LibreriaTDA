#ifndef _AVION_H
#define _AVION_H
#include "../LibreriaTDA/include/list.h"
#include "Pasajero.h"
typedef struct Avion{
	int capacidad;
	int modelo;
	List asientos;
}Avion;


Avion* AvionNew(int modelo);
void AvionSetModelo(Avion *avion,int modelo);
void AvionSetAsientos(Avion *avion);

#endif