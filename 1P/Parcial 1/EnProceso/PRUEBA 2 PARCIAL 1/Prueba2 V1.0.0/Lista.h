/*******************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 30/05/23 9:10
 Fecha de modificacion: 31/05/23 10:10
 Enunciado General: Prueba 2 Parcial 1
 ********************************/
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
    void insertar(T valor);
    void imprimirLista();
    void ordenNuevoMatriz();
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

template <typename T>
void Lista<T>::ordenNuevoMatriz() {
	//Si la lista está vacía entonces no ordenamos nada:
    if (listaVaciaCheck() || primero->getPtrSiguiente() == nullptr) {
        return;
    }
	
    Nodo<T>* actual = primero;
    Nodo<T>* siguiente = actual->getPtrSiguiente();
    Nodo<T>* temp = nullptr;

    // Intercambiar los valores de los nodos en pares
    while (siguiente != nullptr) {
        // Intercambiar los valores de los nodos actual y siguiente
        T tempValor = actual->getValor();
        actual->setValor(siguiente->getValor());
        siguiente->setValor(tempValor);

        // Avanzar al siguiente par de nodos
        temp = siguiente->getPtrSiguiente();
        if (temp != nullptr) {
            actual = temp;
            siguiente = actual->getPtrSiguiente();
        } else {
            siguiente = nullptr;
        }
    }
}
