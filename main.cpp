#include <iostream>
#include<cstdlib>
#include "ListaD.h"
#include "Libro.h"

using namespace std;

//VARIABLES=========================
ListaD L;
int error = 0;
//PROTOTIPOS========================
void agregar();
void inicio();
void fin();

void elimina();
void inserta10();
void buscaSiguiente();
void buscaAnterior();
void modifica();
void ficha();
////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int rpt;
    do{
            system("cls");
        cout<<"\n\nLIBRERIA DE LIBROS CON LISTA DINAMICA SIMPLEMENTE LIGADA"<<endl<<endl;
        cout<<"1) Insertar un nuevo libro: "<<endl;
        cout<<"2) Verifica si la lista esta vacia: "<<endl;
        cout<<"3) Eliminar Libro: "<<endl;
        cout<<"4) Mostrar Primer Libro de la Lista: "<<endl;
        cout<<"5) Mostrar Ultimo Libro de la Lista: "<<endl;
        cout<<"6) Mostrar Anterior Libro a... : "<<endl;
        cout<<"7) Mostrar Siguiente Libro de... :"<<endl;
        cout<<"8) Modificar Libro: "<<endl;
        cout<<"9) Mostrar Ficha de Libro: "<<endl;
        cout<<"10) Imprimir Todo el Catalogo: "<<endl;
        cout<<"11) Eliminar Toda La Lista: "<<endl;
        cout<<"12) Insertar 10 Libros (Solo una vez): "<<endl;
        cout<<"0) Salir: "<<endl<<endl;
        cout<<"Seleccione una Opcion... "; cin>>rpt;

        switch(rpt){
        case 0:
           break;
        case 1: {
                agregar();

        break;
        }
        case 2: {
                L.vacia();
        break;
        }
        case 3: {
                elimina();
        break;
        }
        case 4: {
                L.muestraPrimero();
        break;
        }
        case 5: {
                L.muestraUltimo();
        break;
        }
        case 6: {
                buscaAnterior();
        break;
        }
        case 7: {
                buscaSiguiente();
        break;
        }
        case 8: {
                modifica();
        break;
        }
        case 9: {
                ficha();
        break;
        }
        case 10: {
                 L.catalogo();
        break;
        }
        case 11: {
                L.terminator();
        break;
        }
        case 12:
            {
                inserta10();
                break;
            }
        default: cout<<"Seleccione Una Opcion Valida"<<endl;
        system("pause");
            break;
        }
    }while(rpt != 0);
     system("cls");
            cout<<"\n\n\n\n       GRACIAS POR SU VISITA, VUELVA PRONTO\n\n\n\n"<<endl;

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//==========================================================================================================
//INSERTA
void agregar(){
    int opc;
    system("cls");
    do{
            system("cls");
        cout<<"LIBRERIA DE LIBROS - INSERTA:"<<endl<<endl;
        cout<<"1) Insertar al Inicio: "<<endl;
        cout<<"2) Inserta AL Final: "<<endl;
        cout<<"3) Regresar: "; cin>>opc;
        switch(opc){
    case 1: inicio();   break;
    case 2: fin();  break;
    case 3: break;
    default: cout<<"Opcion Invalida"<<endl;     system("pause"); break;
        }
    }while(opc != 3);
}
void inicio()
{
    system("cls");
Libro Lib;
int num;
string cad;

cout<<"Ingrese el ISBN del Libro: "<<endl;                  cin>>num;         if(L.validar(num)==true){      Lib.setISBN(num);
cout<<"Ingrese el Titulo del Libro: "<<endl;                getline(cin,cad);
                                                            getline(cin,cad);       Lib.setAutor(cad);
cout<<"Ingrese el Autor del Libro: "<<endl;                 getline(cin, cad);      Lib.setTitulo(cad);
cout<<"Ingrese la Editorial del Libro: "<<endl;             getline(cin,cad);       Lib.setEditorial(cad);
cout<<"Ingrese la Categoria del Libro: "<<endl;             getline(cin,cad);       Lib.setCategoria(cad);
cout<<"Ingrese la Sub Categoria del Libro: "<<endl;         getline(cin,cad);       Lib.setSubcategoria(cad);
cout<<"Ingrese los Ejemplares del Libro: "<<endl;           cin>>num;               Lib.setEjemplares(num);
cout<<"Ingrese el Precio del Libro: "<<endl;                cin>>num;               Lib.setPrecio(num);

L.insertaInicio(Lib);
}
else{
    cout<<"EL ISBN YA EXISTE"<<endl; system("pause");
}
}
void fin()
{
    system("cls");
Libro Lib;
int num;
string cad;

cout<<"Ingrese el ISBN del Libro: "<<endl;                  cin>>num;         if(L.validar(num)==true){       Lib.setISBN(num);
cout<<"Ingrese el Titulo del Libro: "<<endl;                getline(cin,cad);       Lib.setAutor(cad);
                                                            getline(cin,cad);
cout<<"Ingrese el Autor del Libro: "<<endl;                 getline(cin, cad);      Lib.setTitulo(cad);
cout<<"Ingrese la Editorial del Libro: "<<endl;             getline(cin,cad);       Lib.setEditorial(cad);
cout<<"Ingrese la Categoria del Libro: "<<endl;             getline(cin,cad);       Lib.setCategoria(cad);
cout<<"Ingrese la Sub Categoria del Libro: "<<endl;         getline(cin,cad);       Lib.setSubcategoria(cad);
cout<<"Ingrese los Ejemplares del Libro: "<<endl;           cin>>num;               Lib.setEjemplares(num);
cout<<"Ingrese el Precio del Libro: "<<endl;                cin>>num;               Lib.setPrecio(num);

L.insertaFinal(Lib);
}
else{
    cout<<"EL ISBN YA EXISTE"<<endl; system("pause");
}
}
//===========================================================================================================
//ELIMINA
void elimina(){

        system("cls");
        int isbn;
cout<<"LIBRERIA DE LIBROS - ELIMINA"<<endl<<endl;

cout<<"Ingrese el ISBN del libro que quiere eliminar: "; cin>>isbn;

L.eliminar(isbn);

}
//=============================================================================================================
//AGREGA DIEZ
void inserta10()
{
    Libro Lib;
    if(error == 0){
        {
            Lib.setTitulo("50 Sombras de Gray");
            Lib.setAutor("Dorian Gray");
            Lib.setEditorial("Lumbritas");
            Lib.setCategoria("Romance");
            Lib.setSubcategoria("Ricolino");
            Lib.setISBN(9875);
            Lib.setEjemplares(12);
            Lib.setPrecio(110);

             L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("Maze Runner");
            Lib.setAutor("James Dashner");
            Lib.setEditorial("V&R");
            Lib.setCategoria("Ficcion");
            Lib.setSubcategoria("Accion");
            Lib.setISBN(8899);
            Lib.setEjemplares(3);
            Lib.setPrecio(230);

           L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("El Retrato de Dorian Gray");
            Lib.setAutor("Oscar Wild");
            Lib.setEditorial("Umbrella");
            Lib.setCategoria("Drama");
            Lib.setSubcategoria("Arte Clasico");
            Lib.setISBN(2876);
            Lib.setEjemplares(4);
            Lib.setPrecio(349);

             L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("El mostro y la carmelita");
            Lib.setAutor("El Babo");
            Lib.setEditorial("Los Jefes");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Mafia");
            Lib.setISBN(4563);
            Lib.setEjemplares(6);
            Lib.setPrecio(289);

             L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("Spiderman");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(616);
            Lib.setEjemplares(6);
            Lib.setPrecio(100);

             L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("Iron Man");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(667);
            Lib.setEjemplares(6);
            Lib.setPrecio(120);

            L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("X-MEN");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(44556);
            Lib.setEjemplares(5);
            Lib.setPrecio(129);

            L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("Batman");
            Lib.setAutor("Steve Didco");
            Lib.setEditorial("DC Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(5567);
            Lib.setEjemplares(1);
            Lib.setPrecio(222);

             L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("The Incredible Hulk");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(69797);
            Lib.setEjemplares(3);
            Lib.setPrecio(120);

            L.insertaInicio(Lib);
        }

        {
            Lib.setTitulo("Capitan America");
            Lib.setAutor("Stan Lee");
            Lib.setEditorial("Marvel Comics");
            Lib.setCategoria("Accion");
            Lib.setSubcategoria("Super Heroes");
            Lib.setISBN(6007);
            Lib.setEjemplares(2);
            Lib.setPrecio(170);

            L.insertaInicio(Lib);
        }
    error = 1;

}else
cout<<"ESTA OPCION YA FUE UTILIZADA "<<endl; system("pause");
}
//=============================================================================================================
//SIGUIENTE, ANTERIOR, BUSCAR Y MODIFICAR
void buscaSiguiente()
{

int isbn;
system("cls");
cout<<"LIBRERIA DE LIBROS - BUSCA SIGUIENTE A"<<endl<<endl;
cout<<"Ingrese el ISBN: "; cin>> isbn;
L.muestraSiguiente(isbn);
}
void buscaAnterior()
{
int isbn;
system("cls");
cout<<"LIBRERIA DE LIBROS - BUSCA ANTERIOR A"<<endl<<endl;
cout<<"Ingrese el ISBN: "; cin>> isbn;
L.muestraAnterior(isbn);
}
void ficha()
{
    int isbn;
system("cls");
cout<<"LIBRERIA DE LIBROS - BUSCA FICHA"<<endl<<endl;
cout<<"Ingrese el ISBN: "; cin>> isbn;
L.muestraFicha(isbn);
}
void modifica()
{
    int isbn;
system("cls");
cout<<"LIBRERIA DE LIBROS - BUSCA PARA MODIFICAR"<<endl<<endl;
cout<<"Ingrese el ISBN: "; cin>> isbn;
L.modifica(isbn);

}


