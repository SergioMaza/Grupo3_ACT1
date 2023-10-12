#include <iostream>
#include "Libro.h"
#include "Usuario.h"
using namespace std;

/**
 * Metodo para dar un Libro a un Usuario
 * @param usuario Usuario que recibira el libro
 * @param libro Libro que se le dara al usuario
 */
void darLibro(Usuario usuario, Libro libro){
    usuario.setLibroActual(libro);
    cout << "Le has dado [" + libro.getTitulo() + "] a " + usuario.getNombre()<< endl;
}
/**
 * Metodo para recoger un Libro de un Usuario
 * @param usuario
 * @param libro
 */
void recogerLibro(Usuario usuario, Libro libro){
    usuario = Usuario(usuario.getNombre(), usuario.getApellido(), usuario.getDni());
    libro.setDisponible(true);
    cout << usuario.getNombre() << " ha devuelto " << libro.getTitulo() << endl;
}
int main() {
    return 0;
}
