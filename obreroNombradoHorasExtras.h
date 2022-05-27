// archivo : obreroNombradoHorasExtras.h
#pragma once
#include <iostream>
#include "obreroNombrado.h"
#include "ordenTrabajo.h"
#include <string>
using namespace std;

class obreroNombradoHorasExtras : public ObreroNombrado,public OrdenInterface{
    public:
    obreroNombradoHorasExtras(int,int,string,int);
    int HorasExtras;
    void Ingresar();
    void CalcularHoras();
    void CalcularPago(int);
    void ConformidadObra(int);
    void VerNumeroObreros();
};