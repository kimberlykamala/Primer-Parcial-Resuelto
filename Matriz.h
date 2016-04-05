#pragma once
#include "conio.h"
#include <string>
#include <iostream>
const int N = 50;
using namespace std;
class Matriz
{
	string mat[N][N];
	int fila;
	int columna;
public:
	
	Matriz(void);
	~Matriz(void);
	string setMat(int fila, int columna);
	int getFila();
	void setFila(int fil);
	int getColumna();
	void setColumna(int col);
	void cargar(string mat[N][N], int fila,int columna);
	void mostrar(string mat[N][N], int fila,int columna);
	int contador(string mat[N][N],string palabra ,int fila, int columna);
	void repetidos(string mat[N][N],int fila, int columna);
	
};

