//archivo: runobra.cpp
#include "Personal.h"
#include "Personal.cpp"
#include "obrero.h"
#include "obrero.cpp"
#include "obrerojornal.h"
#include "obrerojornal.cpp"
#include "obreroNombrado.h"
#include "obreroNombrado.cpp"
#include "ObreroNombradoComision.h"
#include "ObreroNombradoComision.cpp"
#include "obreroNombradoHorasExtras.h"
#include "obreroNombradoHorasExtras.cpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
    const int num = 3;
    Obrero** ListaObreros = new Obrero*[num];
    ListaObreros[0] = new ObreroJornal();
    ListaObreros[1] = new obreroNombradoHorasExtras();
    ListaObreros[2] = new obreroNombradoComision();
    for (int i = 0; i<3; i++){
        ListaObreros[i]->ObrerosAumento();
        ListaObreros[i]->ObrerosAumento();
    }
    for (int i = 0; i<3; i++){
        ListaObreros[i]->VerNumeroObreros();
    }
    system("PAUSE");
}