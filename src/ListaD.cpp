#include "ListaD.h"
#include<iostream>
#include<cstdlib>
#include"Libro.h"

using namespace std;

///////////////////////////////////////////////
//CONSTRUCTORES===================================================
Nodo::Nodo(Libro Lib)
{
    this->lib = Lib;
    siguiente = nullptr;

ListaD::ListaD()
{
    cont = 0;
    primero = nullptr;
    ultimo = nullptr;
}
///////////////////////////////////////////////
//INSERTA INICIO==================================================
void ListaD::insertaInicio(Libro Lib)
{
    Nodo* nuevo = new Nodo(Lib);
    if(primero){
    nuevo->siguiente = primero;
    primero = nuevo;
}else{
primero=nuevo;
ultimo = nuevo;
}
cont++;
}
//INSERTA AL FINAL================================================
void ListaD::insertaFinal(Libro Lib)
{

    Nodo* nuevo = new Nodo(Lib);
    Nodo* aux = primero;
    nuevo->lib = Lib;
    if(primero){
        /*while(aux->siguiente!=nullptr)
            aux = aux->siguiente;
        */
    ultimo->siguiente = nuevo;
    ultimo = nuevo;
    cont++;
    }
    else  insertaInicio(Lib);
}
//VERIFICA VACIA O NO===========================================
void ListaD::vacia()
{
    system("cls");
if(primero)
    cout<<"\n\n     La Lista No esta Vacia, Existen "<<cont<<" ejemplares\n"<<endl<<endl;
else
    cout<<"\n\n     La Lista Esta Vacia\n"<<endl<<endl;
    system("pause");
}
void ListaD::eliminar(int ISBN)
{

    if(!primero)
        return;

    Nodo* aux = primero;

    while(aux){
        if(aux->lib.getISBN()==ISBN)
            break;
        aux=aux->siguiente;
}
if(!aux){
cout<<"ISBN NO ENCONTRADO";
system("pause");
return;}
if(aux==primero)
{
        primero=primero->siguiente;
}
else{

    Nodo* aux2 = primero;
    while(aux2->siguiente!=aux){
        aux2=aux2->siguiente;
    }
    aux2->siguiente = aux->siguiente;
    if(aux==ultimo){
        ultimo = aux2;
    }
}
    delete aux;
    cont--;
}
void ListaD::muestraPrimero()
{
    system("cls");
    if(!primero)
        cout<<"\n\nLa Lista Esta Vacia, No Hay Primero "<<endl<<endl;
    else{
        cout<<"     EL PRIMER LIBRO DE LA LISTA"<<endl<<endl;
        cout<<"     Titulo: "<<primero->lib.getTitulo()<<endl;
        cout<<"     Autor: "<<primero->lib.getAutor()<<endl;
        cout<<"     Editorial: "<<primero->lib.getEditorial()<<endl;
        cout<<"     Categoria: "<<primero->lib.getCategoria()<<endl;
        cout<<"     Sub Categoria: "<<primero->lib.getSubcategoria()<<endl;
        cout<<"     ISBN: "<<primero->lib.getISBN()<<endl;
        cout<<"     Ejemplares: "<<primero->lib.getEjemplares()<<endl;
        cout<<"     Precio: "<<primero->lib.getPrecio()<<endl<<endl;;
    }
    system("pause");
}
void ListaD::muestraUltimo()
{
    system("cls");

    if (!primero){
    cout<<"\n\nLa Lista Esta Vacia, No Hay Ultimo "<<endl<<endl; system("pause");    return;
    }
    else{
    cout<<"     EL ULTIMO LIBRO DE LA LISTA"<<endl<<endl;
    cout<<"     Titulo: "<<ultimo->lib.getTitulo()<<endl;
    cout<<"     Autor: "<<ultimo->lib.getAutor()<<endl;
    cout<<"     Editorial: "<<ultimo->lib.getEditorial()<<endl;
    cout<<"     Categoria: "<<ultimo->lib.getCategoria()<<endl;
    cout<<"     Sub Categoria: "<<ultimo->lib.getSubcategoria()<<endl;
    cout<<"     ISBN: "<<ultimo->lib.getISBN()<<endl;
    cout<<"     Ejemplares: "<<ultimo->lib.getEjemplares()<<endl;
    cout<<"     Precio: "<<ultimo->lib.getPrecio()<<endl;
    system("pause");
    }
}
void ListaD::muestraAnterior(int ISBN)
{
    Nodo* aux = primero;

    if(primero){
    if(aux->lib.getISBN() == ISBN){
        cout<<"         NO HAY UN ELEMENTO ANTERIOR\n\n"<<endl; system("pause");
    }
    else{
        while(aux->siguiente){
            if(aux->siguiente->lib.getISBN()!=ISBN)
            aux = aux->siguiente;
            else{
    cout<<"=         Titulo: "<<aux->lib.getTitulo()<<endl;
    cout<<"=         Autor: "<<aux->lib.getAutor()<<endl;
    cout<<"=         Editorial: "<<aux->lib.getEditorial()<<endl;
    cout<<"=         Categoria: "<<aux->lib.getCategoria()<<endl;
    cout<<"=         Sub Categoria: "<<aux->lib.getSubcategoria()<<endl;
    cout<<"=         ISBN: "<<aux->lib.getISBN()<<endl;
    cout<<"=         Ejemplares: "<<aux->lib.getEjemplares()<<endl;
    cout<<"=         Precio: "<<aux->lib.getPrecio()<<endl<<endl;
    system("pause");
    return;
                }
            }
        }
    }  else{
    cout<<"NO HAY ELEMENTOS EN LA LISTA"<<endl; system("pause");
}
}
void ListaD::muestraSiguiente(int ISBN)
{
    if(!primero)
    {
        cout<<"NO HAY ELEMENTOS EN LA LISTA"<<endl; system("pause"); return;
    }
    Nodo* aux=primero;

if(ultimo->lib.getISBN()==ISBN){
        cout<<"NO EXISTE UN SIGUIENTE"<<endl; system("pause"); return;}
    else{
    while(aux){
    if(aux->lib.getISBN()!=ISBN)
        aux=aux->siguiente;

     else{

    cout<<"=         Titulo: "<<aux->siguiente->lib.getTitulo()<<endl;
    cout<<"=         Autor: "<<aux->siguiente->lib.getAutor()<<endl;
    cout<<"=         Editorial: "<<aux->siguiente->lib.getEditorial()<<endl;
    cout<<"=         Categoria: "<<aux->siguiente->lib.getCategoria()<<endl;
    cout<<"=         Sub Categoria: "<<aux->siguiente->lib.getSubcategoria()<<endl;
    cout<<"=         ISBN: "<<aux->siguiente->lib.getISBN()<<endl;
    cout<<"=         Ejemplares: "<<aux->siguiente->lib.getEjemplares()<<endl;
    cout<<"=         Precio: "<<aux->siguiente->lib.getPrecio()<<endl<<endl;

    system("pause");
    return;
        }
    }cout<<"NO SE ENCONTRO EL ELEMENTO BUSCADO"<<endl; system("pause"); return;
}
}
void ListaD::modifica(int ISBN)
{
 Nodo* aux=primero;

    while(aux){
    if(aux->lib.getISBN()!=ISBN)
        aux=aux->siguiente;
     else{
            int opc;
            int num;
            string cad;
            do{system("cls");
cout<<"LIBRERIA DE LIBROS - MODIFICA"<<endl<<endl;

cout<<"1) Titulo: "<<aux->lib.getTitulo()<<endl;
cout<<"2) Autor: "<<aux->lib.getAutor()<<endl;
cout<<"3) Editorial: "<<aux->lib.getEditorial()<<endl;
cout<<"4) Categoria: "<<aux->lib.getCategoria()<<endl;
cout<<"5) Sub Categoria: "<<aux->lib.getSubcategoria()<<endl;
cout<<"6) ISBN: "<<aux->lib.getISBN()<<endl;
cout<<"7) Ejemplares: "<<aux->lib.getEjemplares()<<endl;
cout<<"8) Precio: "<<aux->lib.getPrecio()<<endl;
cout<<"9) Regresar: "; cin>>opc;

switch(opc){
    case 1: {
        cout<<"Ingrese el nuevo titulo: "; getline(cin,cad); getline(cin,cad);    aux->lib.setTitulo(cad);
    break;
    }
    case 2: {
        cout<<"Ingrese el nuevo Autor: "; getline(cin,cad); getline(cin,cad);    aux->lib.setAutor(cad);
    break;
    }
    case 3: {
        cout<<"Ingrese la nueva editorial: "; getline(cin,cad); getline(cin,cad);    aux->lib.setEditorial(cad);
    break;
    }
    case 4: {
        cout<<"Ingrese la nueva categoria: "; getline(cin,cad); getline(cin,cad);    aux->lib.setCategoria(cad);
    break;
    }
    case 5: {
        cout<<"Ingrese la nueva Sub Categoria: ";   getline(cin,cad); getline(cin,cad);   aux->lib.setSubcategoria(cad);
    break;
    }
    case 6: {
        cout<<"Ingrese el nuevo ISBN: "; cin>>num;    if(validar(num))
                                                    aux->lib.setISBN(num);
                                                    else
                                                        cout<<"EL ISBN YA EXISTE"<<endl; system("pause");
    break;
    }
    case 7: {
        cout<<"Ingrese los nuevos ejemplares: "; cin>>num;      aux->lib.setEjemplares(num);
    break;
    }
    case 8: {
        cout<<"Ingrese el nuevo Precio: "; cin>>num;      aux->lib.setPrecio(num);
    break;
    }
    case 9: {
    break;
    }
    default:    cout<<"Opcion Invalida"<<endl; system("pause"); break;
}
            }while(opc!=9);
 return;}}
}
void ListaD::muestraFicha(int ISBN)
{
    Nodo* aux=primero;

    while(aux){
    if(aux->lib.getISBN()!=ISBN)
        aux=aux->siguiente;
     else{

    cout<<"\n         Titulo: "<<aux->lib.getTitulo();   cout<<"              ISBN: "<<aux->lib.getISBN()<<endl;
    cout<<"         Autor: "<<aux->lib.getAutor();       cout<<"               Ejemplares: "<<aux->lib.getEjemplares()<<endl;
    cout<<"         Editorial: "<<aux->lib.getEditorial()<<endl;
    cout<<"\n         Categoria: "<<aux->lib.getCategoria()<<endl;
    cout<<"         Sub Categoria: "<<aux->lib.getSubcategoria()<<endl;


    cout<<"\n         Precio: "<<aux->lib.getPrecio()<<endl<<endl<<endl;
    system("pause");
    return;
        }
    }
}
void ListaD::catalogo()
{

     if(!primero)
        cout<<"La Lista Esta vacia "<<endl; system("cls");

    Nodo* aux = primero;
    cout<<"         \n\n    Numero de Libros En El Catalogo: "<<cont<<endl<<endl<<endl;
    while(aux){

    cout<<"=         Titulo: "<<aux->lib.getTitulo()<<endl;
    cout<<"=         Autor: "<<aux->lib.getAutor()<<endl;
    cout<<"=         Editorial: "<<aux->lib.getEditorial()<<endl;
    cout<<"=         Categoria: "<<aux->lib.getCategoria()<<endl;
    cout<<"=         Sub Categoria: "<<aux->lib.getSubcategoria()<<endl;
    cout<<"=         ISBN: "<<aux->lib.getISBN()<<endl;
    cout<<"=         Ejemplares: "<<aux->lib.getEjemplares()<<endl;
    cout<<"=         Precio: "<<aux->lib.getPrecio()<<endl<<endl;
    cout<<"==================================================="<<endl;
    cout<<"=                      |                            "<<endl;
    cout<<"=                      V                            "<<endl<<endl;

    aux = aux->siguiente;

    }

system("pause");

}
void ListaD::terminator()
{
    if(!primero)
        return;


    Nodo* aux = primero;
    Nodo* aux2 = aux;
    if(aux == primero){

        primero=nullptr;
        delete aux;
        cont--;

    }else{
while(aux->siguiente){
    while(aux!=ultimo){
        aux = aux->siguiente;
    }

    aux->siguiente=nullptr;
    delete aux2;

}
}cont = 0; cout<<"SE VACIARON TODOS LOS ELEMENTOS DE LA LISTA"<<endl; system("pause");
}
bool ListaD::validar(int ISBN)
{
    if(!primero)
        return true;
    Nodo* aux = primero;
    while(aux){
        if(aux->lib.getISBN()==ISBN)
            return false;
        aux = aux->siguiente;
    }return true;
}






