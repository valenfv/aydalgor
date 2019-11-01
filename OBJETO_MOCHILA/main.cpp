#include <iostream>
#include <string>
using namespace std;

class objeto_mochila{
private:
    string nombre;
    int peso, beneficio;
    float ganancia_unidad;
public:
    objeto_mochila(string nombre, int peso, int beneficio){
        this->peso = peso;
        this->beneficio = beneficio;
        this->ganancia_unidad = (float) beneficio / (float) peso;
        this->nombre = nombre;
    }
    float get_ganancia_unidad(){
        return this->ganancia_unidad;
    }
    bool operator < (objeto_mochila otro){
        return this->ganancia_unidad < otro.get_ganancia_unidad();
    }

};


int main()
{

    objeto_mochila om1("Objeto 1", 15, 40);
    objeto_mochila om2("Objeto 2", 100, 9);
    cout<<(om2 < om1);
    return 0;
}


/*
bool operator < (valentin v){
        return 3 < 2;
    }
*/
