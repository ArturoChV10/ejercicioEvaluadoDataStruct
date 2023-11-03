#ifndef _WEBAPP_
#define _WEBAPP_ 1

#include <iostream>
#include "INodo.h"

using namespace std;

class WebApp : public INodo {
    public:
        WebApp(string pNombre) {
            int num = rand()*99999999999;
            this->setId(num);
            this->setNombre(pNombre);
        }

        string getNombre() {
            return this->nombre;
        }

        void setNombre(string pNombre) {
            this->nombre = pNombre;
        }

    private:
        string nombre;
};

#endif