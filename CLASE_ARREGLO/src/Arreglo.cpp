#include "Arreglo.h"
#include <iostream>
#include <assert.h>
template<class T>
Arreglo<T>::Arreglo(int tam)
{
    this->ar = new T[tam];
    this->tamanio = tam;

}
template<class T>
void Arreglo<T>::agregar(T elem, int pos)
{
    assert(pos >= 0 && pos < tamanio);
    this->ar[pos] = elem;

}

template<class T>
T Arreglo<T>::devolver(int pos) const
{
    return this->ar[pos];

}


template<class T>
Arreglo<T>::~Arreglo()
{
    //dtor
    delete [] ar;
}

template class Arreglo<int>;
template class Arreglo<float>;
