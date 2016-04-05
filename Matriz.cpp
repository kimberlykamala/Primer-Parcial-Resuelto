#include "StdAfx.h"
#include "Matriz.h"
#include "conio.h"
#include <string>
#include <iostream>



Matriz::Matriz(void)
{
	for (int i = 0; i<fila; i++)
	{
		for (int j = 0; j< columna; j++)
		{
			mat[i][j] = " ";
		}
	}
	setFila(0);
	columna = 0;
}


Matriz::~Matriz(void)
{
}
void Matriz::setFila(int fil)
{
	fila=fil;
}
int Matriz::getFila()
{
	return fila;
}

void Matriz::setColumna(int col)
{
	columna=col;
}
int Matriz::getColumna()
{
	return columna;
}
void Matriz::cargar(string mat[N][N], int fila,int columna)
{
	cout<<"Ingrese la palabra: ";
	cout<<endl;
	int i=0;
	while(i<fila)
	{
		int j=0;
		while(j<columna)
		{
			cin>>mat[i][j];
			j++;
		}
	i++;
	}
}
void Matriz::mostrar(string mat[N][N], int fila,int columna)
{
	cout<<"la matriz es: ";
	cout<<endl;
	int i=0;
	while(i<fila)
	{
		int j=0;
		while(j<columna)
		{
			cout<<mat[i][j]<<endl;
			j++;
		}
	i++;
	}
}
int Matriz::contador(string mat[N][N],string palabra ,int fila, int columna)
{
	int i=0,j,c=0;
	while(i<fila)
	{
		j=0;
		while(j<columna)
		{
			if(mat[i][j].compare(palabra)==0)
				c++;
				j++;

		}
		i++;
	}
	return c;
	
}
void Matriz::repetidos(string mat[N][N],int fila, int columna)
{
	int i=0,j,c=0,Contador;
	string rep=" ";
	bool k=false;
	while(i<fila)
	{
		j=0;
		while(j<columna)
		{
			Contador=contador(mat,mat[i][j],fila,columna);
			if(Contador>1 && rep.find(mat[i][j])==-1 )
			{	cout<<"la palabra "<<mat[i][j]<<" se repite: "<<Contador<<"veces"<<endl;
				rep=rep+","+mat[i][j];
				k=true;
			}

			j++;

		}
		i++;
	}
	
	if(k==false)
		cout<<"No tiene repetidos";

}
