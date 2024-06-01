#include "Libro.h"
#include <iostream>

Libro::Libro(string titulo, string autor, int anioPublicacion)
    : Publicacion(titulo, anioPublicacion)
{
    this->autor = autor;
}

void Libro::mostrarInformacion()
{
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Anio de publicacion: " << anioPublicacion << endl;
}