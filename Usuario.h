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
     * @param nombre Nombre del usuario
     * @param apellido Apellido del usuario
     * @param dni Dni del usuario
     */
    Usuario(string nombre, string apellido, string dni) {
        Usuario::nombre = nombre;
        Usuario::apellido = apellido;
        Usuario::dni = dni;
        Usuario::libroActual = Libro();
    }
    /**
     * Contructor de usuario con libroActual
     * @param nombre Nombre del usuario
     * @param apellido Apellido del usuario
     * @param dni Dni del usuario
     * @param libroActual libroActual del usuario
     */
    Usuario(string nombre, string apellido, string dni, Libro libroActual) {
        Usuario::nombre = nombre;
        Usuario::apellido = apellido;
        Usuario::dni = dni;
        Usuario ::libroActual = libroActual;
    }
    /**
     * Metodo que devuelve el nombre
     * @return nombre del usuario
     */
    const string &getNombre() const {
        return nombre;
    }
    /**
     * Metodo que devuelve el apellido
     * @return apellido del usuario
     */
    const string &getApellido() const {
        return apellido;
    }
    /**
     * Metodo que devuelve el dni
     * @return dni del usuario
     */
    const string &getDni() const {
        return dni;
    }
    /**
     * Metodo que devuelve el libroActual
     * @return libroActual del usuario
     */
    const Libro &getLibroActual() const {
        return libroActual;
    }
    /**
     * Metodo que establece el libroActual
     * @param libroActual
     */
    void setLibroActual(const Libro &libroActual) {
        Usuario::libroActual = libroActual;
    }
    /**
     * Metodo que imprime el historial de libros
     */
    void historialLibros() {
        for (Libro libro: historialLibro) {
            cout << "- " << libro.getTitulo() << endl;
        }
    }
};

#endif //GRUPO3_ACT1_USUARIO_H
