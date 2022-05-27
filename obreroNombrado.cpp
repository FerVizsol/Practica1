//archivo : obreroNombrado.cpp
#include "obreroNombrado.h"
#include <iostream>
#include <string>
using namespace std;

ObreroNombrado::ObreroNombrado(int PagaxHora = 100 ,int HorasxDia = 8,string Obra = "Puente"): Obrero(PagaxHora,HorasxDia,Obra){}
void ObreroNombrado::Ingresar(){
        cout << "Ingrese PagaxHora: ";
        cin >> pagaxhora;
        cout << endl << "Ingrese Horas x Dia: ";
        cin >> horasxdia;
        system("clear");
    }
    void ObreroNombrado::VerNumeroObreros(){
        cout << "Cantidad de obreros nombrados sin extras: " << get_CantidadObreros() << endl;
    }