#ifndef PILA_H
#define PILA_H

template<class T>
class Pila
{
    public:
        Pila(int tam);
        void agregar_a_tope(const T & elem);
        bool es_vacia() const;
        T tope() const;
        void eliminar_tope();
        int tamanio() const;

        ~Pila();
    private:
        T * arreglo;
        int tam;
        int cant_elementos_agregados;

};

#endif // PILA_H
