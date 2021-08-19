//state.h
#ifndef _ESTADO_H
#define _ESTADO_H

class ESTADO;

#ifndef __TRANSICIONES_H
#include "transiciones.h"
#endif

enum TipoEstado {INICIAL,INTERMEDIO,FINAL};
class ESTADO
	{
public:
	TipoEstado estado; 
    /*define el tipo de estado
        0= estado inicial
        1= estado intermedio
        2= estado final

    */
	Transitions *delta;
	CaracterSet *sigma;

	ESTADO();
	void setTipoEstado(TipoEstado tipo);
	void setCaracterSet(CaracterSet &caracteres);
	void setTransiciones(Transiciones &tuple);
	TipoEstado getTipoEstados();
	
	};
	
#endif 
