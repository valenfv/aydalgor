#include <iostream>
#include "Pila.h"

using namespace std;

int main()
{
    Pila<int> pila1(20);

    pila1.agregar_a_tope(15626);

    cout <<pila1.tope() << endl;
    return 0;
}

