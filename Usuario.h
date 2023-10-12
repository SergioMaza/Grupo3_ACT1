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
    void setLibroActual(Libro& libroActual) { // Con el & pides la referencia, para evitar una copia del objeto
        Usuario::libroActual.setDisponible(true); // Establece el anterior libroActual a disponible
        libroActual.setDisponible(false); // Establece el nuevo libro a no disponible
        Usuario::libroActual = libroActual; // Guarda en Usuario el nuevo libroActual
        Usuario::libroActual.setDisponible(false); // Establece el nuevo libroActual a no disponible
        Usuario::historialLibro.push_back(Usuario::libroActual); // Agrega el libro al historial

    }
    /**
     * Metodo que imprime el historial de libros
     */
    void historialLibros() {
        cout << "--------------------" << endl;
        for (Libro libro: historialLibro) {
            cout << "- " << libro.toStringSinDisponible() << endl;
        }
        cout << "--------------------" << endl;
    }
    /**
     * Metodo toString
     * @return toString de Usuario
     */
    string toString() {
        return "[NOMBRE: " + Usuario::nombre + "][APPELLIDO: " + Usuario::apellido + "][LIBRO ACTUAL: " + libroActual.getTitulo() + "]";
    }
};

#endif //GRUPO3_ACT1_USUARIO_H
