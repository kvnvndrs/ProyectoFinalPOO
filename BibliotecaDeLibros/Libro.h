#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include <string>
using namespace std;

class Libro : public Publicacion
{
protected:
    string autor;

public:
    Libro(string titulo, string autor, int anioPublicacion);
    void mostrarInformacion() override;
};

#endif