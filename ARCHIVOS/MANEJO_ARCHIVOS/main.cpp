#include <string>
#include <iostream>
#include <vector>
#include "Archivo.h"
using namespace std;

int main()
{
    Archivo ar("arch.txt");
    vector<string> * vect = ar.getData();
    for(auto s : *vect){
        cout<<s<<endl;
    }
    return 0;
}
