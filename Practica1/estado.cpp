#include "estado.h"
ESTADO::ESTADO()
	{
	estado=INTERMEDIO;
	}
void ESTADO::setTipoEstado(TipoEstado type)
	{
	estado=type;
	}
void ESTADO::setCaracterSet(CaracterSet &caracteres)
	{
	sigma=&(caracteres);
	}
void ESTADO::setTransiciones(Transiciones &tuple)
	{
	delta=&(tuple);
	}
TipoEstado ESTADO::getTipoEstados()
	{
	return estado;
	}
