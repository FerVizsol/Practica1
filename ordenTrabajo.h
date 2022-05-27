//archivo : ordenTrabajo
#pragma once
#include <iostream>
#include <string>
using namespace std;

class OrdenInterface{
    public:
    virtual void CalcularHoras()=0;
    virtual void CalcularPago(int)=0;
    virtual void ConformidadObra(int)=0;
};