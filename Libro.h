//
// Created by sergi on 08/10/2023.
//

#ifndef GRUPO3_ACT1_LIBRO_H
#define GRUPO3_ACT1_LIBRO_H
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
    const string &getTitulo() const {
        return titulo;
    }
    /**
     * Metodo que cambia el titulo
     * @param titulo
     */
    void setTitulo(const string &titulo) {
        Libro::titulo = titulo;
    }
    /**
     * Metodo que te devuelve de categoria
     * @return te devuelve la categoria
     */
    const string &getCategoria() const {
        return categoria;
    }
    /**
     * Metodo que cambia la categoria
     * @param categoria
     */
    void setCategoria(const string &categoria) {
        Libro::categoria = categoria;
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
};

#endif //GRUPO3_ACT1_LIBRO_H
