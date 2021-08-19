//dfa.h
#include "CaracterSet.h"
#include "estado.h"
#include "transiciones.h"

class AFD
	{
	/*

    Esta clase almacena los estados posibles y cada
    estado, es responsable de mostrar el estado siguiente.

	*/
private:
	ESTADO *Q;	//Matriz de estados 
    ESTADO *estadoActual;	
    //Estado actual de DFA
	int numEstados;
public:
	AFD();
	void setDFA(ESTADO *setEstados,int numeroDeEstados,ESTADO &EStadoInicial);
	int processString(char *inputString);
	};