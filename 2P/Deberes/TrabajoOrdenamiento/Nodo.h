#pragma once


template <typename T>
class Nodo{
    private:
        T dato;
        Nodo<T>* siguiente;
        Nodo <T>* anterior;
    public:
        Nodo(T);
        ~Nodo();

        void setDato(T);
        T getDato();

        void setSiguiente(Nodo<T>*);
        Nodo<T>* getSiguiente();

        void setAnterior(Nodo<T>*);
        Nodo<T>* getAnterior();
};