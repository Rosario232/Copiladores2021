//CharacterSet.h
#include <iostream>
#include <string.h>
#include <stdio.h>

#ifndef _CaracterSet_H
#define _CaracterSet_H

class CaracterSet
	{

private:
	char *ingresarSimbolos;
	int numSimbolos;

public:
	CaracterSet();
		
	CaracterSet(char *caracteres);
	
	void setIngresarSimbolos(char *caracteres);
		
	char getSimbolo(int i);
	
	int getNumSimbolos();
		
	};

#endif 