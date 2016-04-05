#include "Tablero.h"

Tablero::Tablero()
{
	cout << "Ingrese el tamaño del tablero cuadrado en el que desea jugar"<< endl;
	cin >> tamano;
	setDimension(tamano);
}

void Tablero::setDimension(int tama)
{
	dimension=tama*tama;
	srand(time(NULL)); // Genera el numero aleatorio.
	numeroAleatorio = 1+rand() % (dimension); // El numero generado aleatoreamente esta dentro del rango de la dimension del tablero.
	
}

int Tablero::getDimension()
{
	return dimension;
}

void Tablero::crearTablero() // se crea el tablero
{
	tablero[tamano][tamano]; 
	valores=1; 
	
	for (int i=0;i<tamano;i++)
	{
		for(int j=0;j<tamano;j++)
		{
			tablero[i][j]=valores;
		//	cout <<"   "<< tablero[i][j];
			cout <<"  X" ; 
			valores++;
		}
		cout<< endl;
	}	
}

void Tablero::Preguntar()
{
	cout << "ingrese la casilla "<< endl;
	cin>>p;
	cout << "ingrese la fila "<< endl;
	cin>>n;
	//validar(tablero[n][p]);

}

void Tablero::imprimirTablero()
{
	cout << "La dimension del tablero es: "<< getDimension() << endl; //llama a la funcion del tablero 
	cout << "El numero aleatorio es:  "<< numeroAleatorio << endl;
	crearTablero();
	Preguntar();
	cout << "La Columna que selecciono es la N°: "<< p  << endl;
	cout << "La fila que selecciono es la N°: "<< n << endl;
	
} 

/*
void Tablero::validar(tablero[n][p])
{
		
	if(tablero[n][p] != numeroAleatorio)
	{
		if(tablero[n][p] == 0 )
		{
			cout<<"la casilla ya fue seleccionada"<< endl;
		}
		else
		{
			tablero[n][p] = 0; 
			//llamar al metodo para restarle puntos
		}
	}
	else
	{
		cout<<"Ganaste!"<< endl;
	}
}
*/
