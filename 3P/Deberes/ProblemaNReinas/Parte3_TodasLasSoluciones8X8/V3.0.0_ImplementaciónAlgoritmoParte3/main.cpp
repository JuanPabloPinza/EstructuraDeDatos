#include <iostream>
#include "GenerarTablero.h"
#include "SolucionNReinas.h"

int main() {

	std::cout<<"PROGRAMA DE TABLERO DE REINAS, PARTE 3 \n";
	//El tablero es 8x8 fijo, por ende necesitamos el número de Reinas, y no generar tablero
	SolucionNReinas::solucionarNReinas();

	//Vamos a graficar las soluciones en la consola, ya no necesitamos imprimir
	SolucionNReinas::graficarSolucionesEnConsola();


	//PRIMERO VAMOS A EXTRAER LA SOLUCIÓN DEL ARCHIVO DE TEXTO
	int numeroSolucionExtraer = 5;
//	std::cout<<"Ingrese el numero de solucion que desea extraer: ";
//	std::cin>>numeroSolucionExtraer;
	SolucionNReinas::extraerSolucion("soluciones.txt", numeroSolucionExtraer);
	
	//Por último vamos a graficar la primera solución poniendo una reina
	//Inicializamos ciertas variables para poder cargarlas
	int** tablero = nullptr;
	int n = 0;
	GenerarTablero::cargarTablero("extraerSolucion.txt", tablero, n);
	GenerarTablero::dibujarSolucion(tablero, n, 1); // Dibuja la primera solución
	GenerarTablero::liberarTablero(tablero, n);

	return 0;
}
