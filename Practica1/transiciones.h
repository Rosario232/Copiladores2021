//transitions.h
#include <stdarg.h>
#include "CaracterSet.h"

#ifndef _TRANSICIONES_H
#define _TRANSICIONES_H

class Transitions;

#ifndef _ESTADO_H
#include "estado.h"
#endif


class Transiciones
	{
/*
    Esta clase almacena la transicion de un solo
    estado de cada simbolo posible
*/
public:
	ESTADO *q; //Estado de la transicion
	CaracterSet *sigma; //Caracteres validos
	ESTADO **punterosTrans;

	Transiciones();
	Transiciones(ESTADO *stateX,CaracterSet &caracteres);
	void setInicial(ESTADO &stateX,CaracterSet &caracteres);
	void setTransiciones(int count,...);		
	int getTransicion(char input,ESTADO **siguiente);	
    //regresa 1 si es correcta la asignacion o 0 de lo contrario 
	};

#endif