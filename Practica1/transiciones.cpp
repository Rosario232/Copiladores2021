#include <stdarg.h>
#include "CaracterSet.h"

#ifndef _TRANSICIONES_H
#define _TRANSICIONES_H

class Transiciones;

#ifndef _ESTADO_H
#include "estado.h"
#endif
class Transiciones
	{
public:
	ESTADO *q; 
	CaracterSet *sigma; 
	ESTADO **punterosTrans;

	Transiciones();
	Transiciones(ESTADO *estadoX,CaracterSet &caracteres);
	void setInicial(ESTADO &estadoX,CaracterSet &caracteres);
	void setTransiciones(int count,...);		
	int getTransicion(char input,ESTADO **siguiente);
	};

#endif
