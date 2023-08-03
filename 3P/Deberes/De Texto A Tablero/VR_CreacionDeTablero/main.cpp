#include <iostream>
#include <fstream>
#include <graphics.h>

// Función para cargar el tablero desde el archivo
void cargarTablero(std::string nombreArchivo, int**& tablero, int& n) {
    std::ifstream archivo(nombreArchivo);

    if (archivo.is_open()) {
        std::string linea;
        n = 0;
        while (std::getline(archivo, linea)) {
            n++;
        }

        archivo.clear();
        archivo.seekg(0, std::ios::beg);

        tablero = new int* [n];
        for (int i = 0; i < n; i++) {
            tablero[i] = new int[n];
            std::getline(archivo, linea);
            for (int j = 0; j < n; j++) {
                tablero[i][j] = linea[j] - '0';
            }
        }

        archivo.close();
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }
}

// Función para dibujar el tablero de ajedrez
void dibujarTablero(int** tablero, int n) {
    const int margen = 20;
    int ventanaSize = std::min(n * 100 + 2 * margen, 800);

    initwindow(ventanaSize, ventanaSize);

    int ladoCasilla = (ventanaSize - 2 * margen) / n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = margen + j * ladoCasilla;
            int y = margen + i * ladoCasilla;

            if (tablero[i][j] == 0) { // 0 representa el color negro
                setfillstyle(SOLID_FILL, BLACK);
            } else { // 1 representa el color blanco
                setfillstyle(SOLID_FILL, WHITE);
            }

            bar(x, y, x + ladoCasilla, y + ladoCasilla);
        }
    }

    getch();
}

// Función para liberar la memoria utilizada por el tablero
void liberarTablero(int** tablero, int n) {
    for (int i = 0; i < n; i++) {
        delete[] tablero[i];
    }
    delete[] tablero;
}

int main() {
    std::string nombreArchivo = "tablero.txt";
    int** tablero;
    int n;

    cargarTablero(nombreArchivo, tablero, n);
    dibujarTablero(tablero, n);
    liberarTablero(tablero, n);

    return 0;
}
