#include "ListaCircularDoble.h"

int main() {
	ListaCircularDoble<int> lista;

	lista.insertar(3);
	lista.insertar(7);
	lista.insertar(5);

	lista.mostrar(); // Resultado: 3 7 5

	lista.eliminar(7);

	lista.mostrar(); // Resultado: 3 5

	return 0;
}