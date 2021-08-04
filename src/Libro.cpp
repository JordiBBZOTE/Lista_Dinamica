#include "Libro.h"

Libro::Libro()
{
    rankin = 0;
}

void Libro::setISBN(int ISBN){
this->ISBN = ISBN;
}
void Libro::setPrecio(int precio){
this->precio = precio;
}
void Libro::setEjemplares(int ejemplares){
this->ejemplares = ejemplares;
}
void Libro::setTitulo(string titulo){
this-> titulo = titulo;
}
void Libro::setAutor(string autor){
Autor = autor;
}
void Libro::setEditorial(string editorial){
this->editorial = editorial;
}
void Libro::setCategoria(string categoria){
this->categoria = categoria;
}
void Libro::setSubcategoria(string subCategoria){
this->subCategoria = subCategoria;
}

int Libro::getISBN(){
return ISBN;
}
int Libro::getPrecio(){
return precio;
}
int Libro::getEjemplares(){
return ejemplares;
}
int Libro::getRank(){
return rankin;
}
string Libro::getTitulo(){
return titulo;
}
string Libro::getAutor(){
return Autor;
}
string Libro::getEditorial(){
return editorial;
}
string Libro::getCategoria(){
return categoria;
}
string Libro::getSubcategoria(){
return subCategoria;
}
