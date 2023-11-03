#ifndef _ENFERMEDAD_
#define _ENFERMEDAD_ 1

#include <iostream>
#include "INodo.h"

using namespace std;

class Enfermedad : public INodo {
    private:

        string nombre;

    public:
        Enfermedad(string pNombre) {
            this->nombre = pNombre;
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