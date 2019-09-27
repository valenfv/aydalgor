#ifndef ARREGLO_H
#define ARREGLO_H

template<class T>
class Arreglo
{
    public:
        Arreglo(int tam);
        ~Arreglo();
        void agregar(T elem, int pos);
        T devolver(int pos) const;
    private:
        int * ar;
};

#endif // ARREGLO_H
