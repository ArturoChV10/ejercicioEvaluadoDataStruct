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
            int num = rand();
            if(num < 0) {
                num = num * -1;
            }
            this->setId(num);
        }

        string getNombre() {
            return this->nombre;
        }

        void setNombre(string pNombre) {
            this->nombre = pNombre;
        }
};

#endif