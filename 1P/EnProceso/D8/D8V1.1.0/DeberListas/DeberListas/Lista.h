#pragma once

#include <iostream>
#include "Nodo.h"

template <typename T>
class Lista {
private:
    Nodo<T>* primero;
    Nodo<T>* actual;

public:
    Lista();
    bool listaVaciaCheck();
    void insertarAlInicio(T valor);
    void imprimirLista();
};

template <typename T>
Lista<T>::Lista() {
    this->actual = nullptr;
    this->primero = nullptr;
}

template <typename T>
bool Lista<T>::listaVaciaCheck() {
    return (this->primero == nullptr);
}

template <typename T>
void Lista<T>::insertarAlInicio(T valor) {
    Nodo<T>* nuevoNodo = new Nodo<T>(valor, nullptr);

    if (listaVaciaCheck()) {
        this->primero = nuevoNodo;
    }
    else {
        nuevoNodo->setPtrSiguiente(this->primero);
        this->primero = nuevoNodo;
    }
}

template <typename T>
void Lista<T>::imprimirLista() {
    if (listaVaciaCheck()) {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    Nodo<T>* actual = this->primero;
    std::cout << "Valores de la lista: ";

    while (actual != nullptr) {
        std::cout << actual->getValor() << " ";
        actual = actual->getPtrSiguiente();
    }
    std::cout << std::endl;
}
