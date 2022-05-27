//archivo: personal.cpp
#include "Personal.h"
#include <iostream>
#include <string>
using namespace std;

Personal::Personal(int PagaxHora,int HorasxDia){
    this->pagaxhora = PagaxHora;
    this->horasxdia = HorasxDia;
    sueldo = (pagaxhora * horasxdia)*26;
    diaslaborables = 24;
}