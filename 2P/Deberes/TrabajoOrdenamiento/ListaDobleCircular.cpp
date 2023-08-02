#include "ListaDobleCircular.h"

template <typename T>
ListaDobleCircular<T>::ListaDobleCircular(){
    this->primero = nullptr;
    this->ultimo = nullptr;
}

template <typename T>
ListaDobleCircular<T>::~ListaDobleCircular(){
    Nodo<T>* aux = this->primero;
    while(aux != this->ultimo){
        aux = aux->getSiguiente();
        delete this->primero;
        this->primero = aux;
    }
    delete this->ultimo;
}

template <typename T>
void ListaDobleCircular<T>::insertarInicio(T dato){
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if(this->primero == nullptr){
        this->primero = nuevo;
        this->ultimo = nuevo;
        this->primero->setSiguiente(this->ultimo);
        this->primero->setAnterior(this->ultimo);
        this->ultimo->setSiguiente(this->primero);
        this->ultimo->setAnterior(this->primero);
    }else{
        nuevo->setSiguiente(this->primero);
        nuevo->setAnterior(this->ultimo);
        this->primero->setAnterior(nuevo);
        this->ultimo->setSiguiente(nuevo);
        this->primero = nuevo;
    }
}

template <typename T>
void ListaDobleCircular<T>::insertarFinal(T dato){
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if(this->primero == nullptr){
        this->primero = nuevo;
        this->ultimo = nuevo;
        this->primero->setSiguiente(this->ultimo);
        this->primero->setAnterior(this->ultimo);
        this->ultimo->setSiguiente(this->primero);
        this->ultimo->setAnterior(this->primero);
    }else{
        nuevo->setSiguiente(this->primero);
        nuevo->setAnterior(this->ultimo);
        this->primero->setAnterior(nuevo);
        this->ultimo->setSiguiente(nuevo);
        this->ultimo = nuevo;
    }
}

template <typename T>
void ListaDobleCircular<T>::eliminarInicio(){
    if(this->primero == nullptr){
        std::cout << "Lista vacia" << std::endl;
    }else if(this->primero == this->ultimo){
        delete this->primero;
        this->primero = nullptr;
        this->ultimo = nullptr;
    }else{
        Nodo<T>* aux = this->primero;
        this->primero = this->primero->getSiguiente();
        this->primero->setAnterior(this->ultimo);
        this->ultimo->setSiguiente(this->primero);
        delete aux;
    }
}

template <typename T>
void ListaDobleCircular<T>::eliminarFinal(){
    if(this->primero == nullptr){
        std::cout << "Lista vacia" << std::endl;
    }else if(this->primero == this->ultimo){
        delete this->primero;
        this->primero = nullptr;
        this->ultimo = nullptr;
    }else{
        Nodo<T>* aux = this->ultimo;
        this->ultimo = this->ultimo->getAnterior();
        this->ultimo->setSiguiente(this->primero);
        this->primero->setAnterior(this->ultimo);
        delete aux;
    }
}

template <typename T>
void ListaDobleCircular<T>::imprimir(){
	Nodo<T>* actual = primero;
	
    while (actual != NULL) {
        std::cout << actual->getDato() << std::endl;
        actual = actual->getSiguiente();
    }
    std::cout << std::endl;
}

template <typename T>
void ListaDobleCircular<T>::imprimirReversa(){
    if(this->primero == nullptr){
        std::cout << "Lista vacia" << std::endl;
    }else{
        Nodo<T>* aux = this->ultimo;
        while(aux != this->primero){
            std::cout << aux->getDato() << " ";
            aux = aux->getAnterior();
        }
        std::cout << aux->getDato() << std::endl;
    }
}

template<typename T>
Nodo<T>* ListaDobleCircular<T>::buscar(std::string cedula) {
    Nodo<T>* actual = primero;
    
    while (actual != nullptr) {
        if (actual->getDato().getCedula() == cedula) {
            return actual;
        }
        actual = actual->getSiguiente();
    }
    
    return nullptr;
}
