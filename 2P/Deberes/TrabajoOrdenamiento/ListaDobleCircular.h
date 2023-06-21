#pragma once

#include <iostream>
#include "Nodo.h"

template <typename T>
class ListaDobleCircular{
    private:
        Nodo<T>* primero;
        Nodo<T>* ultimo;
    public:

        ListaDobleCircular();
        ~ListaDobleCircular();

        void insertarInicio(T);
        void insertarFinal(T);
        //void insertarPos(T, int);

        void eliminarInicio();
        void eliminarFinal();
        //void eliminarPos(int);

        void imprimir();
        void imprimirReversa();

        Nodo<T>* buscar(std::string);
        // int getSize();
        // bool isEmpty();
};