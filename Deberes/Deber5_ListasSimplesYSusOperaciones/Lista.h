/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 27/05/23 21:39
 Fecha de modificacion: 01/06/23 03:09
 Enunciado General: Deber 5 Listas y Operaciones Relacionadas
 *******************************************************************************/ 
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
    void insertarPorCabeza(T valor);
    void insertar(T valor);
    void imprimirLista();
    void eliminarInstancia(T valor);
    void eliminarNodo();
    void eliminarPorCola();
    void eliminarPorCabeza();
    bool elementoABuscar(T valor);
    T sumaDeElementosDeLista();
    
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
void Lista<T>::insertarPorCabeza(T valor) {
    Nodo<T>* nuevoNodo = new Nodo<T>(valor, nullptr);

    if (listaVaciaCheck()) {
        this->primero = nuevoNodo;
    } else {
        nuevoNodo->setPtrSiguiente(this->primero);
        this->primero = nuevoNodo;
    }
}

template <typename T>
void Lista<T>::insertar(T valor) {
    Nodo<T>* nuevoNodo = new Nodo<T>(valor, nullptr);

    if (listaVaciaCheck()) {
        this->primero = nuevoNodo;
    } else {
        Nodo<T>* temp = this->primero;
        while (temp->getPtrSiguiente() != nullptr) {
            temp = temp->getPtrSiguiente();
        }
        temp->setPtrSiguiente(nuevoNodo);
    }
}

template <typename T>
void Lista<T>::eliminarInstancia(T valor) {
    if (listaVaciaCheck()) {
        std::cout << "La lista está vacía. No se puede eliminar." << std::endl;
        return;
    }

    Nodo<T>* nodoActual = this->primero;
    Nodo<T>* nodoAnterior = nullptr;

    while (nodoActual != nullptr && nodoActual->getValor() != valor) {
        nodoAnterior = nodoActual;
        nodoActual = nodoActual->getPtrSiguiente();
    }

    if (nodoActual == nullptr) {
        std::cout << "El valor " << valor << " no se encuentra en la lista." << std::endl;
        return;
    }

    if (nodoAnterior == nullptr) {
        this->primero = nodoActual->getPtrSiguiente();
    } else {
        nodoAnterior->setPtrSiguiente(nodoActual->getPtrSiguiente());
    }

    delete nodoActual;
}

template <typename T>
void Lista<T>::eliminarPorCabeza() {
    if (listaVaciaCheck()) {
        std::cout << "La lista está vacía. No se puede eliminar." << std::endl;
        return;
    }

    Nodo<T>* nodoAEliminar = this->primero;
    this->primero = nodoAEliminar->getPtrSiguiente();
    delete nodoAEliminar;
}

template <typename T>
bool Lista<T>::elementoABuscar(T valor) {
    Nodo<T>* nodoActual = this->primero;

    while (nodoActual != nullptr) {
        if (nodoActual->getValor() == valor) {
            return true;  // El valor se encuentra en la lista
        }
        nodoActual = nodoActual->getPtrSiguiente();
    }

    return false;  // El valor no se encuentra en la lista
}

template <typename T>
T Lista<T>::sumaDeElementosDeLista() {
    if (listaVaciaCheck()) {
        std::cout << "La lista está vacía. No se puede realizar la suma." << std::endl;
        return 0;
    }

    T suma = 0;
    Nodo<T>* nodoActual = this->primero;

    while (nodoActual != nullptr) {
        suma += nodoActual->getValor();
        nodoActual = nodoActual->getPtrSiguiente();
    }

    return suma;
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
