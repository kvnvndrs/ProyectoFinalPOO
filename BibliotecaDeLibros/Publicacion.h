// Publicacion.h
#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
using namespace std;

class Publicacion
{
protected:
    string titulo;
    int anioPublicacion;

public:
    Publicacion(string titulo, int anioPublicacion);
    virtual ~Publicacion() {}
    virtual void mostrarInformacion() = 0;
    string getTitulo() const;
};

#endif