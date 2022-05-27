//archivo : obreroNombradoHorasExtras.cpp
#include "obreroNombradoHorasExtras.h"
#include <iostream>
#include <string>
using namespace std;

    obreroNombradoHorasExtras::obreroNombradoHorasExtras(int PagaxHora = 100 ,int HorasxDia = 8,string Obra = "Puente",int Horasextras=2): ObreroNombrado(PagaxHora,HorasxDia,Obra){
        this->HorasExtras= Horasextras;
    }

    void obreroNombradoHorasExtras::Ingresar(){
        cout << "Ingrese PagaxHora: ";
        cin >> pagaxhora;
        cout << endl << "Ingrese Horas x Dia: ";
        cin >> horasxdia;
        cout << endl << "Nombre de la Obra: ";
        string obraname;
        getline(cin,obraname);
        this->obra= obraname;
        cout << endl << "Ingrese numero de horas extras: ";
        cin >> HorasExtras;
        system("clear");
        
    }
    void obreroNombradoHorasExtras::CalcularHoras(){
        int horas;
        cout << "Ingrese la cantidad de horas al dia: ";
        cin >> horas;
        horasxdia = horas;
        CalcularPago(horas);
    }
    void obreroNombradoHorasExtras::CalcularPago(int horas){
    }
    void obreroNombradoHorasExtras::ConformidadObra(int horas){
        if (horas < 24){
            sueldo = ((horas + HorasExtras) * 84) * 24;
            cout << "Si se acepto el sueldo!";
        }else{
            cout << "No se Acepto el Sueldo!";
        }
    }
        void obreroNombradoHorasExtras::VerNumeroObreros(){
        cout << "Cantidad de obreros nombrados con Horas Extras: " << get_CantidadObreros() << endl;
    }