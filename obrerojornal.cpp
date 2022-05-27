//archivo: obrerojornal.cpp
#include "obrerojornal.h"
#include <iostream>
#include <string>
using namespace std;

    ObreroJornal::ObreroJornal(int PagaxHora = 100 ,int HorasxDia = 8,string Obra = "Puente") : Obrero(PagaxHora,HorasxDia,Obra)
    {

    }
    void ObreroJornal::Ingresar(){
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
    void ObreroJornal::CalcularHoras(){
        cout << "Ingrese horas: ";
        cin >> horasxdia;
        CalcularPago(horasxdia);
    }
    void ObreroJornal::CalcularPago(int horas){
        cout << horas * 80 << ",Se solicitara el pago...";
        ConformidadObra(horas);
    }
    void ObreroJornal::ConformidadObra(int horas){
        if(horas<24){
            sueldo = horas*80;
            cout << "SE ACEPTO EL CAMBIO!";
        }else{
            cout << "NO SE ACEPTO EL CAMBIO!";
        };
    }
    void ObreroJornal::VerNumeroObreros(){
        cout << "Cantidad de obreros a jornal: " << get_CantidadObreros() << endl;
    }
