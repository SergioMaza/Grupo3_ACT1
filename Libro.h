//
// Created by sergi on 08/10/2023.
//

#ifndef GRUPO3_ACT1_LIBRO_H
#define GRUPO3_ACT1_LIBRO_H

#include <list>

using namespace std;

class Libro {
private:
    string titulo;
    string categoria;
    bool disponible;
public:
    /**
     * Constructor vacio
     */
    Libro(){
        Libro::titulo = "Vacio";
        Libro::categoria = "Vacio";
        Libro::disponible = false;
    }
    /**
     * Constructor parametrizado
     * @param titulo Titulo del libro
     * @param categoria Categoria del libro
     * @param disponible Disponibilidad del libro
     */
    Libro(string titulo, string categoria, bool disponible) {
        Libro::titulo = titulo;
        Libro::categoria = categoria;
        Libro::disponible = disponible;
    }
    /**
     * Metodo que te devuelve el titulo
     * @return te devuelve el titulo
     */
    string getTitulo() {
        return titulo;
    }
    /**
     * Metodo que te devuelve de categoria
     * @return te devuelve la categoria
     */
    string getCategoria() {
        return categoria;
    }
    /**
     * Metodo que te dice si el libro está disponible
     * @return te devuelve un boolean que si esta disponible
     * es true, en caso contrario es false
     */
    bool isDisponible() const {
        return disponible;
    }
    /**
     * Metodo establece la disponibilidad del Libro
     * @param disponible
     */
    void setDisponible(bool disponible) {
        Libro::disponible = disponible;
    }
    /**
     * Metodo toString
     * @return toString de Libro
     */
    string toString(){
        string disponibleStr = disponible ? "true" : "false";
        return "[TITULO: " + titulo + "][CATEGORIA: " + categoria + "][DISPONIBLE: " + disponibleStr + "]";
    };

    /**
     * Metodo toString sin el atributo "disponible"
     * @return toString sin "disponible"
     */
    string toStringSinDisponible(){
        string disponibleStr = disponible ? "true" : "false";
        return "[TITULO: " + titulo + "][CATEGORIA: " + categoria + "]";
    };
    /**
     * Metodo equeals para comparar dos libros
     * @param libro Libro para comparar
     * @return true: si coinciden / false: no coinciden
     */
    bool equals(Libro libro){
        if(Libro::titulo == libro.getTitulo() && Libro::categoria == libro.getCategoria()){
            return true;
        }
        return false;
    }
};

#endif //GRUPO3_ACT1_LIBRO_H
