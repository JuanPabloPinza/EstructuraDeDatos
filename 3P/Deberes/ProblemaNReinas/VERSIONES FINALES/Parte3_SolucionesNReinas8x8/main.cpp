/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
Materia: Estructura de Datos
NRC: 9686
Nombre:    Juan Pablo Pinza

Fecha de inicio: 02/08/2023 - 11:37
Fecha de modificación: 04/08/2023 - 03:37

Deber Parte 2: Reina en posición aleatoria del tablero de ajedrez
*/
#include <iostream>
#include "GenerarTablero.h"
#include "SolucionNReinas.h"
#include <limits>//Para validar con el buffer y eliminar memoria del teclado


int main() {
	int opc;
	do {
		std::system("cls");
		std::cout<<"***** PROGRAMA DE TABLERO DE REINAS, PARTE 3 *****\n";
		std::cout<<"Seleccione una opcion:"<<std::endl;
		std::cout<<"1. Generar Soluciones y Graficar Una Solucion"<<std::endl;
		std::cout<<"2. Salir"<<std::endl;
		std::cin>>opc;
		while (std::cin.fail() || opc < 1 || opc > 2) {
			std::cin.clear(); // Limpia el error de la mmeoria del teclado
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada incorrecta
			std::cout << "\nValor ingresado no valido!!. Vuelva a ingresar un valor entre 1 y 2: ";
			std::cin >> opc;
		}

		switch(opc) {
			case 2:
				std::cout<<"SALIENDO DEL PROGRAMA..."<<std::endl;
				exit(0);
				break;
			case 1:
				//El tablero es 8x8 fijo, por ende necesitamos el número de Reinas, y no generar tablero
				SolucionNReinas::solucionarNReinas();
				//Vamos a graficar todas las posibles soluciones en consola
				SolucionNReinas::graficarSolucionesEnConsola();
				//PRIMERO VAMOS A EXTRAER LA SOLUCIÓN DEL ARCHIVO DE TEXTO
				SolucionNReinas::extraerSolucion("soluciones.txt");
				//Por último vamos a graficar una de las soluciones existentes
				//Inicializamos ciertas variables para poder cargarlas
				int** tablero = nullptr;
				int n = 0;
				GenerarTablero::cargarTablero("extraerSolucion.txt", tablero, n);
				GenerarTablero::dibujarSolucion(tablero, n, 1);//Ya que está extraida la solucion, da lo mismo cuál grafiquemos porque ya tenemos la que queremos en el txt
				GenerarTablero::liberarTablero(tablero, n);
				break;
		}
	} while(opc!=2);

	return 0;
}
