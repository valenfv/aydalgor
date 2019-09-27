#include "Pila.h"

template<class T>
Pila<T>::Pila(int tam)
{
    this->arreglo = new T[tam];
    this->tam = tam;
    this->cant_elementos_agregados = 0;
}

template<class T>
void Pila<T>::agregar_a_tope(const T & elem){
    this->arreglo[cant_elementos_agregados] = elem;
    this->cant_elementos_agregados++;
}

template<class T>
T Pila<T>::tope() const{
    return this->arreglo[cant_elementos_agregados - 1];
}
template<class T>
Pila<T>::~Pila(){
     delete [] this->arreglo;
}

template class Pila<int>;
template class Pila<float>;
template class Pila<long>;
