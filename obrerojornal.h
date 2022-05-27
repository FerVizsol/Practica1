//archivo: obrerojornal.h
#pragma once
#include "obrero.h"
#include "ordenTrabajo.h"

class ObreroJornal : public Obrero,public OrdenInterface {
    public:
    ObreroJornal(int,int,string);
    float Jornal;
    bool PagoRefrigerio = true;
    bool PagoMovilidad = true;
    void Ingresar();
    void CalcularHoras();
    void CalcularPago(int);
    void ConformidadObra(int);
    void VerNumeroObreros();
};