//archivo: obrero.h
#pragma once
#include <iostream>
#include "Personal.h"
#include <string>
using namespace std;
class Obrero : public Personal{
    public:
    static int cantidadObreros;
    Obrero(int,int,string);
    string obra;
    void Ingresar();
    void ObrerosAumento(); 
    virtual void VerNumeroObreros()=0;
    int get_CantidadObreros();
};