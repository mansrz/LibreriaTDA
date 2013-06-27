#ifndef _VUELO_H
#define _VUELO_H
#include "../LibreriaTDA/include/list.h"
typedef enum tipoPasajero{Ejecutivo,Turista};
typedef struct Pasajero{
	tipoPasajero tipo;
	int Nacional;
	int Conexion;
	int NumeroDeAsiento;
}Pasajero;

Pasajero* PasajeroNew();



#endif