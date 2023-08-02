#include "GenerarTxtTableroNxN.h"
#include <iostream>
//FALTA VALIDAR
//0 Negro, 1 Blanco
void GenerarTxtTableroNxN::generarTxtTableroNxn() {

	std::cout<<"Ingrese la dimension del tablero de ajedrez: (Min 2, Max 8)";
	int dim,cuadros;
	std::cin>>dim;
	cuadros = dim*dim;
	for(int i = 1; i<=cuadros; i++) {
		//Para Tablas impares
		if(dim%2!=0) {
			if(i%2==0) {
				std::cout<<"1";
			} else if(i%2!=0) {
				std::cout<<"0";
			}
			//PARA LOS SALTOS DE LÍNEA:
			if(i%dim==0) {
				std::cout<<"\n";
			} else {
				std::cout<<" ";
			}
		}
	}
	//Para tablas pares
	//Ejm: 4 filas, debería ser el máximo del valor de fila 4,
	//Cuando sea 1 va a empezar con negro, si cambia a 2 va a empezar con blanco
	if(dim%2==0) {

		bool validador = false;
		for(int i = 0; i<=dim-1; i++) {
			if(validador == false) {
				for(int j = 0 ; j <=dim-1; j++) {
					if(j%2==0) {
						std::cout<<"0";
					} else if(j%2!=0) {
						std::cout<<"1";
					}
					std::cout<<" ";
					validador = true;
				}
			} else if(validador == true) {
				for(int j = 0 ; j <=dim-1; j++) {
					if(j%2==0) {
						std::cout<<"1";
					} else if(j%2!=0) {
						std::cout<<"0";
					}
					std::cout<<" ";
					validador = false;
				}
			}
			std::cout<<"\n";
		}
	}
}