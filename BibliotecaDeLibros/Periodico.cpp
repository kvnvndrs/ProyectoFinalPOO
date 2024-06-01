#include "Periodico.h"
#include <iostream>

Periodico::Periodico(string titulo, string autor, int anioPublicacion, string periodicidad)
    : Libro(titulo, autor, anioPublicacion)
{
    this->periodicidad = periodicidad;
}

void Periodico::mostrarInformacion()
{
    Libro::mostrarInformacion();
    cout << "Periodicidad: " << periodicidad << endl;
}
