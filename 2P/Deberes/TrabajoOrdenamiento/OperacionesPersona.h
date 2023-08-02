#pragma once

#include "Persona.h"
#include "ListaDobleCircular.h"

class OperacionesPersona
{
    public:
    static Persona pedirDatosPersona();
    static void guardarPersonaEnArchivo(Persona persona);

    template <typename T>
    static ListaDobleCircular<T>* cargarDatosDeArchivoEnLista(ListaDobleCircular<T>*);

};