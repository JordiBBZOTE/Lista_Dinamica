#ifndef LISTAD_H
#define LISTAD_H
#include<iostream>
#include"Libro.h"
using namespace std;

class Nodo
{
private:
    Libro lib;
    Nodo* siguiente;
    friend class ListaD;
public:
    Nodo(Libro Lib);
};



class ListaD
{
    private:
        Nodo* primero;
        Nodo* ultimo;
        int cont;
        friend class Nodo;
    public:
        ListaD();
        void insertaInicio(Libro Lib);
        void insertaFinal(Libro Lib);
        void vacia();
        void eliminar(int ISBN);
        void muestraPrimero();
        void muestraUltimo();
        void muestraAnterior(int ISBN);
        void muestraSiguiente(int ISBN);
        void modifica(int ISBN);
        void muestraFicha(int ISBN);
        void catalogo();
        bool validar(int ISBN);
        void terminator();

};


#endif // LISTAD_H
