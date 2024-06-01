#include "Publicacion.h"
#include "Libro.h"
#include "Periodico.h"
#include "Revista.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

static void mostrarMenu()
{
    cout << "--- BIBLIOTECA DE LIBROS ---" << endl;
    cout << "1. Agregar publicacion" << endl;
    cout << "2. Eliminar publicacion" << endl;
    cout << "3. Buscar publicacion" << endl;
    cout << "4. Mostrar todas las publicaciones" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
}

int main()
{
    vector<Publicacion*> biblioteca;
    int opcionMenu;
    int opcionPublicacion;
    string titulo, autor;
    int anio;
    string periodicidad, categoria;
    bool encontrado = false;

    do
    {
        mostrarMenu();
        cin >> opcionMenu;

        switch (opcionMenu)
        {
        case 1:// Agregar publicación
            cout << "Ingrese el tipo de publicacion (1. Libro, 2. Periodico, 3. Revista): ";
            cin >> opcionPublicacion;
            cout << "Titulo: ";
            cin.ignore();
            getline(cin, titulo);
            cout << "Autor: ";
            getline(cin, autor);
            cout << "Anio de publicacion: ";
            cin >> anio;

            if (opcionPublicacion == 1)
            {
                biblioteca.push_back(new Libro(titulo, autor, anio));
            }
            else if (opcionPublicacion == 2)
            {
                cout << "Periodicidad: ";
                cin.ignore();
                getline(cin, periodicidad);
                biblioteca.push_back(new Periodico(titulo, autor, anio, periodicidad));
            }
            else if (opcionPublicacion == 3)
            {
                cout << "Categoria: ";
                cin.ignore();
                getline(cin, categoria);
                biblioteca.push_back(new Revista(titulo, autor, anio, categoria));
            }
            break;

        case 2:// Eliminar publicación
            cout << "Ingrese el indice de la publicacion a eliminar: ";
            cin >> opcionMenu;
            if (opcionMenu >= 0 && opcionMenu < biblioteca.size())
            {
                delete biblioteca[opcionMenu];
                biblioteca.erase(biblioteca.begin() + opcionMenu);
            }
            else
            {
                cout << "Indice invalido. Intente nuevamente." << endl;
            }
            break;

        case 3:// Buscar publicación
            cout << "Ingrese el titulo de la publicacion a buscar: ";
            cin.ignore();
            getline(cin, titulo);
            encontrado = false;
            for (Publicacion* publicacion : biblioteca)
            {
                cout << "Publicacion:" << endl;
                Libro* libro = dynamic_cast<Libro*>(publicacion);
                if (libro)
                {
                    libro->mostrarInformacion();
                }
                else
                {
                    cout << "Error: Tipo de publicacion desconocido" << endl;
                }
                cout << endl;
            }
            break;

        case 4:// Mostrar todas las publicaciones
            for (int i = 0; i < biblioteca.size(); i++)
            {
                cout << "Publicacion " << i << ":" << endl;
                biblioteca[i]->mostrarInformacion();
                cout << endl;
            }
            break;

        case 5:
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcionMenu != 5);

    // Limpiar memoria
    for (Publicacion* publicacion : biblioteca)
    {
        delete publicacion;
    }

    return 0;
}