#include <iostream>
#include "Arreglo.h"
#include <string>

/*
    Code @ github.com/valenfv/aydalgor
*/

using namespace std;

int main()
{
    Arreglo<int> ar(20);
    Arreglo<float> af(10);
    ar.agregar(20, 0);
    af.agregar(12.4, 0);

    return 0;
}
