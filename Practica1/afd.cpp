#include "afd.h"
AFD::AFD()
	{
	Q=NULL;
	estadoActual=NULL;
	}
void AFD::setAFD(ESTADO *setEstados,int numeroDeEstados,ESTADO &estadoInicial)
	{
	Q=setEstados;
	numEstados=numeroDeEstados;
	estadoInicial.setTipoEstado(INICIAL);
	estadoActual=&estadoInicial;
	}
int AFD::processString(char *cadenaEntrada)
	{

	for(int i=0;cadenaEntrada[i]!='\0';i++)
		{
		if(!estadoActual->delta->getTransicion(cadenaEntrada[i],&estadoActual))
			return 2;
		}
	if(estadoActual->getTipoEstado()==FINAL){
		return 0;
    }
	else{ 
		return 1;
	}
    }
