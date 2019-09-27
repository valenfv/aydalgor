#include <iostream>
#include "Arreglo.h"
using namespace std;

int main()
{
    Arreglo<int> ar(20);
    ar.agregar(20, 0);

    cout << ar.devolver(0) << endl;
    return 0;
}
