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

    WebApp ig = WebApp(5, "IG");
    WebApp twi = WebApp(10, "Twitter");
    WebApp flu = WebApp(4, "Flutter");
    WebApp of = WebApp(7, "Onlyfans");
    WebApp face = WebApp(15, "Facebook");
    WebApp allapps[] = {ig, twi, flu, of, face};

    Sintoma headache = Sintoma("Dolor de cabeza");
    Sintoma fiebre = Sintoma("Fiebre");
    Sintoma tos = Sintoma("Tos");
    Sintoma fatiga = Sintoma("Fatiga");
    Sintoma chestPain = Sintoma("Dolor en el pecho");
    Sintoma breathingProblems = Sintoma("Dificultad para Respirar");
    Sintoma vomitos = Sintoma("Vómitos");
    Sintoma diarrea = Sintoma("Diarrea");

    Sintoma sintomas[] = {headache, fiebre, tos, fatiga, chestPain, breathingProblems, vomitos, diarrea};

    Enfermedad migrana = Enfermedad("Migraña");
    Enfermedad gripe = Enfermedad("Gripe ");
    Enfermedad covid = Enfermedad("COVID-19");
    Enfermedad ansiedad = Enfermedad("Ansiedad");
    Enfermedad neumonia = Enfermedad("Neumonía");
    Enfermedad bronquitis = Enfermedad("Bronquitis");
    Enfermedad dengue = Enfermedad("Dengue");
    Enfermedad asma = Enfermedad("Asma");

    Enfermedad enfermedades[] = {migrana, gripe, covid, ansiedad, neumonia, bronquitis, dengue, asma};

    Grafo grafoEnf(true);

    for(int i=0; i<8; i++) {
        grafoEnf.addNode(&enfermedades[i]);
    }

    for(int i=0; i<8; i++) {
        grafoEnf.addNode(&sintomas[i]);
    }


    grafoEnf.addArc(&migrana, &headache, 5);
    grafoEnf.addArc(&migrana, &chestPain, 5);
    grafoEnf.addArc(&migrana, &fiebre, 5);
    grafoEnf.addArc(&gripe, &tos, 5);
    grafoEnf.addArc(&gripe, &diarrea, 5);
    grafoEnf.addArc(&gripe, &fatiga, 5);
    grafoEnf.addArc(&covid, &headache, 5);
    grafoEnf.addArc(&covid, &vomitos, 5);
    grafoEnf.addArc(&covid, &breathingProblems, 5);
    grafoEnf.addArc(&ansiedad, &vomitos, 5);
    grafoEnf.addArc(&ansiedad, &breathingProblems, 5);
    grafoEnf.addArc(&ansiedad, &chestPain, 5);
    grafoEnf.addArc(&neumonia, &headache, 5);
    grafoEnf.addArc(&neumonia, &fiebre, 5);
    grafoEnf.addArc(&neumonia, &tos, 5);
    grafoEnf.addArc(&bronquitis, &vomitos, 5);
    grafoEnf.addArc(&bronquitis, &fatiga, 5);
    grafoEnf.addArc(&bronquitis, &breathingProblems, 5);
    grafoEnf.addArc(&dengue, &chestPain, 5);
    grafoEnf.addArc(&dengue, &diarrea, 5);
    grafoEnf.addArc(&dengue, &tos, 5);
    grafoEnf.addArc(&asma, &fiebre, 5);
    grafoEnf.addArc(&asma, &diarrea, 5);
    grafoEnf.addArc(&asma, &fatiga, 5);

    vector<INodo*> result = grafoEnf.broadPath(&fatiga);

    for(int i=0; i<result.size(); i++) {
        Sintoma dato = *((Sintoma*)(void*)result[i]);
        cout << dato.getId() << " " << dato.getNombre() << endl;
    }
    
    cout << "termino bien" << endl;

}