#ifndef _SINTOMA_
#define _SINTOMA_ 1

#include <iostream>
#include "INodo.h"


using namespace std;

class Sintoma : public INodo {
    private:

        string nombre;
        int ID;

    public:
        Sintoma(string pNombre) {
            this->setNombre(pNombre);
            this->setId(rand()*99999999999);
        }

        string getNombre() {
            return this->nombre;
        }

        void setNombre(string pNombre) {
            this->nombre = pNombre;
        }
};

#endif