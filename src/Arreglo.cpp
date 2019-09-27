#include "Arreglo.h"

template<class T>
Arreglo<T>::Arreglo(int tam)
{
    this->ar = new T[tam];

}
template<class T>
void Arreglo<T>::agregar(T elem, int pos)
{
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
