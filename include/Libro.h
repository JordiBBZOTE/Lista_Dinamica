#ifndef LIBRO_H
#define LIBRO_H
#include<iostream>
using namespace std;

class Libro
{

    private:
        int ISBN;
        int precio;
        int ejemplares;
        int rankin;
        string titulo;
        string Autor;
        string editorial;
        string categoria;
        string subCategoria;

    public:
        Libro();
        void setISBN(int ISBN);
        void setPrecio(int precio);
        void setEjemplares(int ejemplares);
        void setTitulo(string titulo);
        void setAutor(string autor);
        void setEditorial(string editorial);
        void setCategoria(string categoria);
        void setSubcategoria(string subCategoria);

        int getISBN();
        int getPrecio();
        int getEjemplares();
        int getRank();
        string getTitulo();
        string getAutor();
        string getEditorial();
        string getCategoria();
        string getSubcategoria();

};

#endif // LIBRO_H
