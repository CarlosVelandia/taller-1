#ifndef TABLERO_H
#define TABLERO_H

#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Tablero
{
	public:
		
		Tablero();
		
		int getDimension();
		void imprimirTablero();
		void crearTablero();
		
		void Preguntar();
		void validar();
		int getColumna();
		int getFila();
		
	private:
		
		int** tablero; // Se  declara el Tablero 
		int n,p;
		int valores;
		int tamano;
		int dimension;
		int numeroAleatorio;
		 // son los numeros de las casillas a validar
		
		void setDimension(int tama);
		void setColumna(int col);
		void setFila(int fil);
			
};

#endif
