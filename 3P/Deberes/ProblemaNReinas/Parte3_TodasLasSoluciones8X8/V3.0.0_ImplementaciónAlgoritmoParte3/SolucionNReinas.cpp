#include "SolucionNReinas.h"
#include <fstream>
#include <string>
#include <windows.h>
#include <vector>// Para extraer la solución
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


void SolucionNReinas::solucionarNReinas() {
	cout << "Ingrese el numero de reinas: ";
	cin >> reinas;

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

