#include "Revista.h"
#include <iostream>

Revista::Revista(string titulo, string autor, int anioPublicacion, string categoria)
    : Libro(titulo, autor, anioPublicacion)
{
    this->categoria = categoria;
}

void Revista::mostrarInformacion()
{
    Libro::mostrarInformacion();
    cout << "Categoria: " << categoria << endl;
}