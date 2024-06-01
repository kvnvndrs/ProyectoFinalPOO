#include "Publicacion.h"

Publicacion::Publicacion(string titulo, int anioPublicacion)
{
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
}

string Publicacion::getTitulo() const
{
    return titulo;
}