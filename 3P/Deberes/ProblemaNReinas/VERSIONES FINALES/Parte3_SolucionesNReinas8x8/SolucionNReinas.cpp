/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
Materia: Estructura de Datos
NRC: 9686
Nombre:    Juan Pablo Pinza

Fecha de inicio: 02/08/2023 - 11:37
Fecha de modificación: 04/08/2023 - 03:37

Deber Parte 2: Reina en posición aleatoria del tablero de ajedrez
*/
#include "SolucionNReinas.h"
#include <fstream>
#include <string>
#include <windows.h>
#include <vector>// Para extraer la solución
#include <limits>//Para validar con el buffer y eliminar memoria del teclado

using namespace std;

const int N = 8;
int soluciones = 0;
int reinas;
ofstream archivo;

//Encabezados de funciones propias
bool esSeguro(int tablero[N][N], int fila, int col);
void imprimirSolucion(int tablero[N][N]);
bool resolverNReinas(int tablero[N][N], int col, int n);
void resolverNReinas();

void setColor(int color);

int contarSoluciones(std::string nombreArchivo);


void SolucionNReinas::solucionarNReinas() {
	cout << "Ingrese el numero de reinas (2-8): ";
	cin >> reinas;

	while (std::cin.fail() || reinas < 2 || reinas > 8) {
		std::cin.clear(); // Limpia el error de la mmeoria del teclado
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada incorrecta
		std::cout << "\nValor ingresado no valido!!. Vuelva a ingresar un valor entre 2 y 8: ";
		std::cin >> reinas;
	}

	string nombreArchivo = "soluciones.txt";
	archivo.open(nombreArchivo);
	resolverNReinas();
	archivo.close();
}


void SolucionNReinas::graficarSolucionesEnConsola() {
	string line;
	ifstream file("soluciones.txt");
	if(file.is_open()) {
		while(getline(file, line)) {
			if(line.find("Solucion") != string::npos) {
				setColor(14);
				cout << line << endl;
				setColor(7);
			} else {
				for(char c : line) {
					if(c == 'R') {
						setColor(12);
						cout << c;
						setColor(7);
					} else if(c == '1') {
						setColor(15);
						cout << c;
						setColor(7);
					} else {
						cout << c;
					}
				}
				cout << endl;
			}
		}
		file.close();
	} else {
		cout << "No se pudo abrir el archivo" << endl;
	}
}

/*
// Función para extraer una solución específica en el formato solicitado
void SolucionNReinas::extraerSolucion(std::string nombreArchivo, int numeroSolucion) {
	std::ifstream archivo(nombreArchivo);
	if (!archivo.is_open()) {
		std::cout << "No se pudo abrir el archivo." << std::endl;
		return;
	}

	std::string linea;
	bool esSolucionActual = false;
	int numSolucionActual = 0;
	std::string solucionExtraida;

	while (std::getline(archivo, linea)) {
		if (linea.find("Solucion") != std::string::npos) {
			numSolucionActual = std::stoi(linea.substr(linea.find(" ") + 1));
			esSolucionActual = (numSolucionActual == numeroSolucion);
			continue;
		}

		if (esSolucionActual) {
			std::string solucionFila;
			for (char c : linea) {
				if (c == 'R') {
					solucionFila += "R";
				} else if (c == '0' || c == '1') {
					solucionFila += c;
				}
			}
			solucionExtraida += solucionFila;
			solucionExtraida += '\n'; // Agregar un salto de línea al final de cada fila
		}
	}

	archivo.close();

	// Eliminar el último salto de línea si existe
	if (!solucionExtraida.empty() && solucionExtraida.back() == '\n') {
		solucionExtraida.pop_back();
	}

	std::ofstream archivoExtraer("extraerSolucion.txt");
	if (archivoExtraer.is_open()) {
		archivoExtraer << solucionExtraida;
		archivoExtraer.close();
		std::cout << "Se ha extraído la Solucion " << numeroSolucion << " en el archivo 'extraerSolucion.txt'." << std::endl;
	} else {
		std::cout << "No se pudo crear el archivo para extraer la solucion." << std::endl;
	}
}
*/

// Función para extraer una solución específica en el formato solicitado
void SolucionNReinas::extraerSolucion(std::string nombreArchivo) {
	int totalSoluciones = contarSoluciones(nombreArchivo);
	if (totalSoluciones == 0) {
		std::cout << "El archivo no contiene ninguna solucion." << std::endl;
		return;
	}

	int numeroSolucionExtraer;
	std::cout << "Ingrese el numero de la solucion que desea extraer (1-" << totalSoluciones << "): ";
	std::cin >> numeroSolucionExtraer;
	while (std::cin.fail() || numeroSolucionExtraer < 1 || numeroSolucionExtraer > totalSoluciones) {
		std::cin.clear(); // Limpia el error de la mmeoria del teclado
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada incorrecta
		std::cout << "\nError!! Ingrese una solucion existente entre (1-" << totalSoluciones << "): ";
		std::cin >> numeroSolucionExtraer;
	}

	std::ifstream archivo(nombreArchivo);
	if (!archivo.is_open()) {
		std::cout << "No se pudo abrir el archivo." << std::endl;
		return;
	}

	std::string linea;
	bool esSolucionActual = false;
	int numSolucionActual = 0;
	std::string solucionExtraida;

	while (std::getline(archivo, linea)) {
		if (linea.find("Solucion") != std::string::npos) {
			numSolucionActual = std::stoi(linea.substr(linea.find(" ") + 1));
			esSolucionActual = (numSolucionActual == numeroSolucionExtraer);
			continue;
		}

		if (esSolucionActual) {
			std::string solucionFila;
			for (char c : linea) {
				if (c == 'R') {
					solucionFila += "R";
				} else if (c == '0' || c == '1') {
					solucionFila += c;
				}
			}
			solucionExtraida += solucionFila;
			solucionExtraida += '\n'; // Agregar un salto de línea al final de cada fila
		}
	}

	archivo.close();

	// Eliminar el último salto de línea si existe
	if (!solucionExtraida.empty() && solucionExtraida.back() == '\n') {
		solucionExtraida.pop_back();
	}

	std::ofstream archivoExtraer("extraerSolucion.txt");
	if (archivoExtraer.is_open()) {
		archivoExtraer << solucionExtraida;
		archivoExtraer.close();
		std::cout << "Se ha extraido la Solucion " << numeroSolucionExtraer << " en el archivo 'extraerSolucion.txt'." << std::endl;
	} else {
		std::cout << "No se pudo crear el archivo para extraer la solucion." << std::endl;
	}
}

//FUNCIONES QUE NO VAMOS A USAR FUERA DE LA CLASE:

//Se aplica backtracking, si es false, regresa a lo anterior y sigue probando
bool esSeguro(int tablero[N][N], int fila, int col) {
	for (int i = 0; i < col; i++)
		if (tablero[fila][i])
			return false;

	for (int i = fila, j = col; i >= 0 && j >= 0; i--, j--)
		if (tablero[i][j])
			return false;

	for (int i = fila, j = col; j >= 0 && i < N; i++, j--)
		if (tablero[i][j])
			return false;

	return true;
}

void imprimirSolucion(int tablero[N][N]) {
	soluciones++;
	archivo << "Solucion " << soluciones << ":\n";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			if (tablero[i][j] == 1)
				archivo << "R ";
			else if ((i + j) % 2 == 0)
				archivo << "1 ";
			else
				archivo << "0 ";
		archivo << "\n";
	}
	archivo << "\n";
}

bool resolverNReinas(int tablero[N][N], int col, int n) {
	if (col == n) {
		imprimirSolucion(tablero);
		return true;
	}

	bool res = false;
	for (int i = 0; i < N; i++) {
		if (esSeguro(tablero, i, col)) {
			tablero[i][col] = 1;
			res = resolverNReinas(tablero, col + 1, n) || res;
			tablero[i][col] = 0;
		}
	}

	return res;
}

void resolverNReinas() {
	int tablero[N][N];
	memset(tablero, 0, sizeof(tablero));

	if (!resolverNReinas(tablero, 0, reinas))
		cout << "No hay solucion\n";
}

void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int contarSoluciones(std::string nombreArchivo) {
	std::ifstream archivo(nombreArchivo);
	if (!archivo.is_open()) {
		std::cout << "No se pudo abrir el archivo." << std::endl;
		return 0;
	}

	int cantidadSoluciones = 0;
	std::string linea;

	while (std::getline(archivo, linea)) {
		if (linea.find("Solucion") != std::string::npos) {
			cantidadSoluciones++;
		}
	}

	archivo.close();
	return cantidadSoluciones;
}
