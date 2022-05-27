//archivo: ObreroNombradoComision.h
#pragma once
#include <iostream>
#include "obreroNombrado.h"
#include "ordenTrabajo.h"
#include <string>
using namespace std;

class obreroNombradoComision : public ObreroNombrado, public OrdenInterface{
    public:
    obreroNombradoComision(int,int,string);
    void Ingresar();
    void VerNumeroObreros();
    void CalcularHoras();
    void CalcularPago(int);
    void ConformidadObra(int);
};