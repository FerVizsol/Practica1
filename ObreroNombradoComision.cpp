//archivo: ObreroNombradoComision.cpp
#include "ObreroNombradoComision.h"
#include "obreroNombrado.h"
#include <iostream>
#include <string>
using namespace std;

    obreroNombradoComision::obreroNombradoComision(int PagaxHora = 100 ,int HorasxDia = 8,string Obra = "Puente"): ObreroNombrado(PagaxHora,HorasxDia,Obra){

    }

    void obreroNombradoComision::Ingresar(){
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
    void obreroNombradoComision::CalcularHoras(){
        int horas;
        cout << "Ingrese la cantidad de horas al dia: ";
        cin >> horas;
        horasxdia = horas;
        CalcularPago(horas);
    }
    void obreroNombradoComision::CalcularPago(int horas){
        cout << "Al mes: " << (horas * 92) *24 << endl;
        ConformidadObra(horas);
    }
    void obreroNombradoComision::ConformidadObra(int horas){
        if(horas < 24){
            sueldo = (horas * 92 ) *24;
            cout << "Se acepto!";
        }else{
            cout << "No se Acepto!";
        }
    }
    void obreroNombradoComision::VerNumeroObreros(){
        cout << "Cantidad de obreros nombrados con comision: " << get_CantidadObreros() << endl;
    }