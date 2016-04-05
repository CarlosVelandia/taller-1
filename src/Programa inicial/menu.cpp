#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main() 
{
	int x=0,y=0; // n es el tamaño del tablero.
	cout << "Ingrese el tamaño del tablero cuadrado en el que desea jugar"<< endl;
	cin >> x;
	y=x;
	
	int dimentablero= x*y; // Dimension del tablero.
	
	srand(time(NULL)); // Genera el numero aleatorio.
	int numeroaleatorio = 1+rand() % (dimentablero); // El numero generado aleatoreamente esta dentro del rango de la dimension del tablero.
	cout << numeroaleatorio << endl;

	int tablero[x][y]; // se crea el tablero
	int valores=1; 
	
	for (int i=.0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			tablero[i][j]=valores;
			cout <<"   "<< tablero[i][j];
			valores++;
		}
		cout<< endl;
	}
	
	int k=0,l=0; 
	cout << "Ingrese un valor de fila, entre 0 y "<<x-1<< endl;
	cin>> k;
	cout << "Ingrese un valor de columna, entre 0 y "<<y-1<< endl;
	cin>> l;
	
	int operapuntaje=100/dimentablero;
	int puntaje=100;
	int puntajebucle=puntaje;
	
	while(tablero[k][l]!=numeroaleatorio)
	{	
		cout << "Fallaste!!, intentelo de nuevo"<<x-1<< endl;
		cout << "Ingrese un valor de fila, entre 0 y "<<x-1<< endl;
		cin>> k;
		cout << "Ingrese un valor de columna, entre 0 y "<<y-1<< endl;
		cin>> l;
		puntajebucle= puntajebucle-operapuntaje;
		cout <<"Su puntaje es: "<< puntajebucle<< endl;
		
	}
		cout << "La casilla que selecciono es la correcta!!!"<< endl;
		cout <<"Su puntaje es: "<< puntajebucle<< endl;
	
	
	return 0;
}
