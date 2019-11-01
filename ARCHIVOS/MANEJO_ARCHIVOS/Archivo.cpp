#include "Archivo.h"

using namespace std;

Archivo::Archivo(const string & path){
    // open file
    ifstream arch(path.c_str());
    // check everything is fine
    assert(arch.is_open());
    // store formatted output
    string fo;
    // fill the data vector
    while(arch >> fo){
        this->data.push_back(fo);
    }
    arch.close();
}

vector<string> Archivo::getData() const{
    return vector<string>(this->data);
}
Archivo::~Archivo()
{
    // nothing to do here
}
