#pragma once

class Matriz
{
public:
	void generarMatriz(int);
	void encerarMatriz();
	void imprimirMatriz(int **,int);
	Matriz();
	~Matriz();
private:
	int dimension;
};

