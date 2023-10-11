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
    Libro(){}
    Libro(string titulo, string categoria, bool disponible) {
        Libro::titulo = titulo;
        Libro::categoria = categoria;
        Libro::disponible = disponible;
    }
    const string &getTitulo() const {
        return titulo;
    }

    void setTitulo(const string &titulo) {
        Libro::titulo = titulo;
    }

    const string &getCategoria() const {
        return categoria;
    }

    void setCategoria(const string &categoria) {
        Libro::categoria = categoria;
    }

    bool isDisponible() const {
        return disponible;
    }

    void setDisponible(bool disponible) {
        Libro::disponible = disponible;
    }
};

#endif //GRUPO3_ACT1_LIBRO_H
