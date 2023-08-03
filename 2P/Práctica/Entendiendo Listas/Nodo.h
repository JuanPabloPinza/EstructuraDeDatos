#pragma once

template <typename T>
class Nodo{
    private:
    T dato;
    Nodo<T>* siguiente;

    public:
    Nodo(T);
    ~Nodo();
    void setDato(T);
    T getDato(void);
    void setSiguiente(Nodo<T>*);
    Nodo<T>* getSiguiente(void);
};