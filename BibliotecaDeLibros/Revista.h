#ifndef REVISTA_H
#define REVISTA_H

#include "Libro.h"
#include <string>
using namespace std;

class Revista : public Libro
{
private:
    string categoria;

public:
    Revista(string titulo, string autor, int anioPublicacion, string categoria);
    void mostrarInformacion() override;
};

#endif