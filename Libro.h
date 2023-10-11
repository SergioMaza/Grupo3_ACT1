//
// Created by sergi on 08/10/2023.
//

#ifndef GRUPO3_ACT1_LIBRO_H
#define GRUPO3_ACT1_LIBRO_H
using namespace std;

class Libro{
private:
    string titulo;
    string categoria;
    bool disponible;
public:
    /**
     * Metodo get de titulo
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
     * Metodo get de categoria
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
     * @return te dice si esta disponible
     */
    bool isDisponible() const {
        return disponible;
    }
    /**
     * Metodo que cambia el estado de disponible
     * @param disponible
     */
    void setDisponible(bool disponible) {
        Libro::disponible = disponible;
    }
};
#endif //GRUPO3_ACT1_LIBRO_H
