#include <iostream>
#include "Enfermedad.cpp"
#include "Sintoma.cpp"
#include "grafo.h"
#include "Persona.h"
#include "WebApp.h"
#include "NodoGrafo.h"
#include "INodo.h"
#include <vector>

using namespace std;

int main() {

    // Ejercicio #1: 
    Grafo grafo1(true);

    Persona ana;
    ana.setNombre("Ana");

    Persona juan;
    juan.setNombre("Juan");

    grafo1.addNode(&ana);
    grafo1.addNode(&juan);

    grafo1.addArc(&ana, &juan);

    cout << "Ejercio de recorrido en anchura testeando creacion de arcos" << endl;
/*
    WebApp ig = WebApp(5, "IG");
    WebApp twi = WebApp(10, "Twitter");
    WebApp flu = WebApp(4, "Flutter");
    WebApp of = WebApp(7, "Onlyfans");
    WebApp face = WebApp(15, "Facebook");
    WebApp allapps[] = {ig, twi, flu, of, face};
*/
    WebApp headache = WebApp("Dolor de cabeza");
    WebApp fiebre = WebApp("Fiebre");
    WebApp tos = WebApp("Tos");
    WebApp fatiga = WebApp("Fatiga");
    WebApp chestPain = WebApp("Dolor en el pecho");
    WebApp breathingProblems = WebApp("Dificultad para Respirar");
    WebApp vomitos = WebApp("Vómitos");
    WebApp diarrea = WebApp("Diarrea");

    WebApp sintomas[] = {headache, fiebre, tos, fatiga, chestPain, breathingProblems, vomitos, diarrea};

    WebApp migrana = WebApp("Migraña");
    WebApp gripe = WebApp("Gripe ");
    WebApp covid = WebApp("COVID-19");
    WebApp ansiedad = WebApp("Ansiedad");
    WebApp neumonia = WebApp("Neumonía");
    WebApp bronquitis = WebApp("Bronquitis");
    WebApp dengue = WebApp("Dengue");
    WebApp asma = WebApp("Asma");

    WebApp enfermedades[] = {migrana, gripe, covid, ansiedad, neumonia, bronquitis, dengue, asma};

    Grafo grafoEnf(true);

    for(int i=0; i<=8; i++) {
        grafoEnf.addNode(&sintomas[i]);
    }

    for(int i=0; i<=8; i++) {
        grafoEnf.addNode(&enfermedades[i]);
    }

    NodoGrafo* origen = grafoEnf.getNodo(0);
    NodoGrafo* origen1 = grafoEnf.getNodo(1);
    NodoGrafo* origen2 = grafoEnf.getNodo(2);
    NodoGrafo* origen3 = grafoEnf.getNodo(3);
    NodoGrafo* origen4 = grafoEnf.getNodo(4);
    NodoGrafo* origen5 = grafoEnf.getNodo(5);
    NodoGrafo* origen6 = grafoEnf.getNodo(6);
    NodoGrafo* origen7 = grafoEnf.getNodo(7);

    NodoGrafo* destino8 = grafoEnf.getNodo(8);
    NodoGrafo* destino9 = grafoEnf.getNodo(9);
    NodoGrafo* destino10 = grafoEnf.getNodo(10);
    NodoGrafo* destino11 = grafoEnf.getNodo(11);
    NodoGrafo* destino12 = grafoEnf.getNodo(12);
    NodoGrafo* destino13 = grafoEnf.getNodo(13);
    NodoGrafo* destino14 = grafoEnf.getNodo(14);
    NodoGrafo* destino15 = grafoEnf.getNodo(15);


    grafoEnf.addArc(origen, destino8, 5);
    grafoEnf.addArc(origen, destino12, 5);
    grafoEnf.addArc(origen, destino9, 5);
    grafoEnf.addArc(origen1, destino10, 5);
    grafoEnf.addArc(origen1, destino15, 5);
    grafoEnf.addArc(origen1, destino11, 5);
    grafoEnf.addArc(origen2, destino8, 5);
    grafoEnf.addArc(origen2, destino14, 5);
    grafoEnf.addArc(origen2, destino13, 5);
    grafoEnf.addArc(origen3, destino14, 5);
    grafoEnf.addArc(origen3, destino13, 5);
    grafoEnf.addArc(origen3, destino12, 5);
    grafoEnf.addArc(origen4, destino8, 5);
    grafoEnf.addArc(origen4, destino9, 5);
    grafoEnf.addArc(origen4, destino10, 5);
    grafoEnf.addArc(origen5, destino14, 5);
    grafoEnf.addArc(origen5, destino11, 5);
    grafoEnf.addArc(origen5, destino13, 5);
    grafoEnf.addArc(origen6, destino13, 5);
    grafoEnf.addArc(origen6, destino15, 5);
    grafoEnf.addArc(origen6, destino10, 5);
    grafoEnf.addArc(origen7, destino9, 5);
    grafoEnf.addArc(origen7, destino15, 5);
    grafoEnf.addArc(origen7, destino11, 5);
    
    vector<INodo*> result = grafoEnf.broadPath(&asma);

    for(int i=0; i<result.size(); i++) {
        WebApp dato = *((WebApp*)(void*)result[i]);
        cout << dato.getId() << " " << dato.getNombre() << endl;
    }
/*
    for(int i=0; i<result.size(); i++) {
        Sintoma dato = *((Sintoma*)(void*)result[i]);
        cout << dato.getId() << " " << dato.getNombre() << endl;
    }
*/
/*
    Grafo grafoApps(true);

    for(int i=0; i<5; i++) {
        grafoApps.addNode(&allapps[i]);
    }



    NodoGrafo* origen = grafoApps.getNodo(5);
    NodoGrafo* destino = grafoApps.getNodo(10);

    grafoApps.addArc(origen, destino, 3);
    grafoApps.addArc(10, 15, 9);
    grafoApps.addArc(&of, &ig, 1); 
    grafoApps.addArc(7, 10, 4);
    grafoApps.addArc(10, 7, 3);
    grafoApps.addArc(7, 4, 6);
    grafoApps.addArc(&face, &flu, 8);

    vector<INodo*> result = grafoApps.broadPath(&ig);

    for(int i=0; i<result.size(); i++) {
        WebApp dato = *((WebApp*)(void*)result[i]);
        cout << dato.getId() << " " << dato.getNombre() << endl;
    }


    /// segundo grafo

    cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
    Grafo grafoNoConexo(true);

    for(int i=0; i<5; i++) {
        grafoNoConexo.addNode(&allapps[i]);
    }

    grafoNoConexo.addArc(&flu, &ig, 3);
    grafoNoConexo.addArc(&ig, &flu , 4);
    grafoNoConexo.addArc(&ig, &of , 3);
    grafoNoConexo.addArc(&twi, &of , 4);
    grafoNoConexo.addArc(&twi, &face , 6);
    grafoNoConexo.addArc(&face, &twi , 2);
    grafoNoConexo.addArc(&face, &of , 1);

    result.clear();
    result = grafoNoConexo.broadPath(&face);

    for(int i=0; i<result.size(); i++) {
        WebApp dato = *((WebApp*)(void*)result[i]);
        cout << dato.getId() << " " << dato.getNombre() << endl;
    }
*/
    cout << "termino bien" << endl;

}