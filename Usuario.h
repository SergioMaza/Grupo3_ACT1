//
// Created by Vidhi on 09/10/2023.
//

#ifndef GRUPO3_ACT1_USUARIO_H
#define GRUPO3_ACT1_USUARIO_H

#include <list>
#include "Libro.h"

using namespace std;

class Usuario {
private:
    string nombre;
    string apellido;
    string dni;
    Libro libroActual;
    list <Libro> historialLibro;

public:
    /**
     * Constructor de usuario sin libroActual
     * @param nombre
     * @param apellido
     * @param dni
     */
    Usuario(string nombre, string apellido, string dni) {
        Usuario::nombre = nombre;
        Usuario::apellido = apellido;
        Usuario::dni = dni;
    }

    /**
     * Contructor de usuario con LibroActual
     * @param nombre
     * @param apellido
     * @param dni
     * @param libroActual
     */

    Usuario(string nombre, string apellido, string dni, Libro libroActual) {
        Usuario::nombre = nombre;
        Usuario::apellido = apellido;
        Usuario::dni = dni;
        Usuario ::libroActual = libroActual;
    }

    /**
     *
     * @return Te devuelve el nombre
     */

    const string &getNombre() const {
        return nombre;
    }

    const string &getApellido() const {
        return apellido;
    }

    const string &getDni() const {
        return dni;
    }

    const Libro &getLibroActual() const {
        return libroActual;
    }

    void setLibroActual(const Libro &libroActual) {
        Usuario::libroActual = libroActual;
    }

    void historialLibros() {
        for (Libro libro: historialLibro) {
            cout << "- " << libro.getTitulo() << endl;
        }
    }
};

#endif //GRUPO3_ACT1_USUARIO_H
