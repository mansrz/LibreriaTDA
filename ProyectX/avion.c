#include "avion.h"
/*aviones Airbus A330 (335 pasajeros),
Airbus A380 (583 pasajeros),
Boeing 747 (524 pasajeros),
Boeing 767 (375 pasajeros) y 
Boeing 777(300 pasajeros).
*/
Avion* AvionNew(int modelo)
{	
	Avion *avion;
	AvionSetModelo(avion,modelo);

	return avion;
}
void AvionSetModelo(Avion *avion,int modelo){
	switch(modelo){
	case 1:
		avion->capacidad=335;
		break;
	case 2:
		avion->capacidad=583;
		break;
	case 3:
		avion->capacidad=524;
		break;
	case 4:
		avion->capacidad=375;
		break;
	case 5:
		avion->capacidad=300;
		break;

	}
}
void AvionSet
