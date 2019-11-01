#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <assert.h>

using namespace std;
class Archivo
{
    public:
        Archivo(const string & path);
        vector<string> getData() const;
        ~Archivo();
    private:
        // use vector to store the data in the file
        vector<string> data;
};

#endif // ARCHIVO_H
