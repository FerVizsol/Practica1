//archivo: obreroNombrado.h
#pragma once
#include <iostream>
#include "obrero.h"
#include <string>
using namespace std;

class ObreroNombrado : public Obrero{
    public:
    ObreroNombrado(int,int,string);
    bool Bono15 = true;
    bool Comision10 = true;
    bool PagoRefrigerio = true;
    bool PagoMovilidad = true;
    void Ingresar();
    void VerNumeroObreros();
};