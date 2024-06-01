#ifndef PERIODICO_H
#define PERIODICO_H

#include "Libro.h"
#include <string>
using namespace std;

class Periodico : public Libro
{
private:
    string periodicidad;

public:
    Periodico(string titulo, string autor, int anioPublicacion, string periodicidad);
    void mostrarInformacion() override;
};

#endif