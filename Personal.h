// archivo: Personal.h
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Personal{
    public:
    Personal(int,int);
    int pagaxhora;
    int horasxdia;
    float sueldo;
    int diaslaborables;
    virtual void Ingresar()=0;
};