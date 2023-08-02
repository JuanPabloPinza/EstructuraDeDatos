/*#include <iostream>


//El objetivo de este programa es crear una clase Persona con cédula, nombre y apellido, de ahí una clase Registro nos permitirá guardar por el número de cédula
//los registros de las personas que estén registradas en el sistema
//Por medio del método de ordenamiento Mezcla natural, seremos capaces de ordenar los registros de las personas por medio de su número de cédula
// Nombre o Apellido.

int main(){


}*/

//DESDE AQUÍ EMPIEZO A PROBAR EL CÓDIGO

#include <conio.h> // Para getch()
#include "Validaciones.h"
#include "OperacionesPersona.h"
#include "ListaDobleCircular.cpp"


void mostrarMenu(int opcionSeleccionada) {
    system("cls"); // Limpia la pantalla (para Windows)

    // Imprime el menú con las opciones
    std::cout << "MENU DE OPCIONES:" << std::endl;
    std::cout << (opcionSeleccionada == 1 ? "> " : "  ") << "Registro de Nuevo Empleado" << std::endl;
    std::cout << (opcionSeleccionada == 2 ? "> " : "  ") << "Opcion 2" << std::endl;
    std::cout << (opcionSeleccionada == 3 ? "> " : "  ") << "Opcion 3" << std::endl;
    std::cout << (opcionSeleccionada == 4 ? "> " : "  ") << "Opcion 4" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "Usa las flechas del teclado para navegar. Presiona Enter para seleccionar una opción." << std::endl;
}

int main() {

    //INICIALIZACIÓN DE LISTA DOBLEMENTE CIRCULAR:
      Nodo<Persona>* nodo;
      ListaDobleCircular<Persona>* personasRegistradas = new ListaDobleCircular<Persona>();
      personasRegistradas = OperacionesPersona::cargarDatosDeArchivoEnLista(personasRegistradas);    
      std::string cedula;

    int opcionSeleccionada = 1;

    while (true) {
        mostrarMenu(opcionSeleccionada);

        // Captura la tecla presionada
        char tecla = getch();

        if (tecla == 13) { // Tecla Enter
            // Acción correspondiente a la opción seleccionada
            switch (opcionSeleccionada) {
                // case 1:
                //     std::cout<<"\nIngrese la Cedula a Registrar: ";
                //     cedula = Validaciones::validarCedulaEcuatoriana();
                //     nodo = personasRegistradas->buscar(cedula);
                //     if (nodo == nullptr) {	
                //     Persona persona = OperacionesPersona::pedirDatosPersona();
				// } else {
				// 	std::cout << "Cedula anteriormente registrada" << std::endl;				
				// }
                    break;
                case 2:
                    std::cout << "Seleccionaste la opcion 2." << std::endl;
                    break;
                case 3:
                    std::cout << "Seleccionaste la opcion 3." << std::endl;
                    break;
                case 4:
                    std::cout << "Seleccionaste la opcion 4." << std::endl;
                    break;
            }
            break; // Sale del bucle infinito del menú
        }
        else if (tecla == 72) { // Flecha arriba
            opcionSeleccionada = opcionSeleccionada > 1 ? opcionSeleccionada - 1 : opcionSeleccionada;
        }
        else if (tecla == 80) { // Flecha abajo
            opcionSeleccionada = opcionSeleccionada < 4 ? opcionSeleccionada + 1 : opcionSeleccionada;
        }
    }

system("pause");

    return 0;
}
