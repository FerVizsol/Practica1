//archivo: obrero.cpp
#include "obrero.h"
#include "Personal.h"
#include <iostream>
#include <string>
using namespace std;

int Obrero::cantidadObreros;

    Obrero::Obrero(int PagaxHora = 100 ,int HorasxDia = 8,string Obra = "Puente"): Personal(PagaxHora,HorasxDia){
        this->obra=Obra;
    }
    void Obrero::Ingresar(){
        cout << "Ingrese PagaxHora: ";
        cin >> pagaxhora;
        cout << endl << "Ingrese Horas x Dia: ";
        cin >> horasxdia;
        cout << endl << "Nombre de la Obra: ";
        string obraname;
        getline(cin,obraname);
        this->obra= obraname;
        system("clear");

    }
    void Obrero::ObrerosAumento(){
        Obrero::cantidadObreros++;
    }
    int Obrero::get_CantidadObreros(){
        return Obrero::cantidadObreros;
    }
    