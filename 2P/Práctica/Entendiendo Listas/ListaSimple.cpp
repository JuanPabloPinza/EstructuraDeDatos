#include "ListaSimple.h"
#include <iostream>
#include "Nodo.h"


template <typename T>
ListaSimple<T>::ListaSimple(){
    this->cabeza = nullptr;
}

template <typename T>
ListaSimple<T>::~ListaSimple(){

}

template <typename T>
void ListaSimple<T>::insertarCabeza(T dato){
    //1. Crear un nuevo nodo
    Nodo<T>* nuevo = new Nodo<T>(dato);
    //2. El nuevo nodo apunta a la cabeza (Antiguo nuevo nodo).
    nuevo->setSiguiente(cabeza);
    //3. Nuestra nueva cabeza es el nuevo nodo
    cabeza = nuevo;
}

template <typename T>
void ListaSimple<T>::insertarCola(T){}

template <typename T>
void ListaSimple<T>::mostrar(){
    if(cabeza==nullptr){
        std::cout<<"La lista está vacía"; 
    }else{
        while(cabeza!=nullptr){
            std::cout<<cabeza->dato;

        }
    }
}

template <typename T>
void ListaSimple<T>::eliminar(T){}

template <typename T>
void ListaSimple<T>::setCabeza(Nodo<T>*){}

template <typename T>
Nodo<T>* ListaSimple<T>::getCabeza(void){}