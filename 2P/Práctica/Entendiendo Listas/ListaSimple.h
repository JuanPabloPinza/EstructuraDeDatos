#pragma once
#include "Nodo.h"

template <typename T>
class ListaSimple{
    private:
    Nodo<T>* cabeza;

    public:
    ListaSimple();
    ~ListaSimple();
    void insertarCabeza(T);
    void insertarCola(T);
    void mostrar();
    void eliminar(T);
    void setCabeza(Nodo<T>*);
    Nodo<T>* getCabeza(void);

};