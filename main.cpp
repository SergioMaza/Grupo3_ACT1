#include <iostream>
#include "Libro.h"
#include "Usuario.h"

using namespace std;


/**
 * Metodo para dar un Libro a un Usuario y actualizar el array
 * @param usuario Usuario que recibira el libro
 * @param libro Libro que se le dara al usuario
 * @param t array de todos los libros
 */
void darLibro(Usuario &usuario, Libro& libro, Libro t[]) {
    if (libro.isDisponible()){
        usuario.setLibroActual(libro);
        cout << "Le has dado [" + libro.getTitulo() + "] a " + usuario.getNombre() << endl;
        for (int i= 0; i<=20; i++){
            if (t[i].equals(libro)){
                t[i]= libro;
            }
        }
    } else {
        cout << "El libro ["<<libro.getTitulo()<<"] no esta disponible"<<endl;
    }
}
/**
 * Metodo para retirar un libro de un usuario y actualizar el array de todos los libros
 * @param u usuario
 * @param l libro para retirar
 * @param todoslosLibros array con todos los libros
 */
void retirarLibro(Usuario &u, Libro &l, Libro todoslosLibros[]) {
    if (l.equals(u.getLibroActual())) {
        cout << "Le has quitado [" << l.getTitulo() << "] a " << u.getNombre() << endl;
        l.setDisponible(true);
        u = Usuario(u.getNombre(), u.getApellido(), u.getDni());
        for (int i= 0; i<=20; i++){
            if (todoslosLibros[i].equals(l)){
                todoslosLibros[i]= l;
            }
        }
    } else {
        cout << u.getNombre() << " no tiene [" << l.getTitulo() << "]" << endl;
    }

}
/**
 * Metodo que recorre el array de todos los libros e imprime solamente los que estan disponibles
 * @param todosLosLibros array de todos los libros
 */
void librosDisp(Libro todosLosLibros[]) {
    cout << "----------------\nLOS LIBROS DISPONIBLES SON:" << endl;
    for (int i = 0; i<=20;i++) {
        if (todosLosLibros[i].isDisponible()) {
            cout << "- " << todosLosLibros[i].toString() << endl;
        }
    }
    cout << "----------------" << endl;
}
/**
 * Metodo que comprueba si un usuario tiene el libro que se indica
 * @param u usuario al que se le comprueba si tiene el libro
 * @param l libro a comprobar
 * @return un boolean, si el usuario tiene el libro sera true, en caso
 * contrario sera false
 */
bool tieneLibro (Usuario u , Libro l){
    return l.equals(u.getLibroActual());
}

int main() {
    Libro pokedex("Pokedex", "Educativo", true);
    Libro orgulloyPrejuicio("Orgullo y prejuicio", "Romance", true);
    Libro elGranLibroDelDibujo("El gran libro del dibujo", "Educativo", true);
    Libro enciclopediaDeInformatica("Enciclopedia de informatica 1980", "Educativo", true);
    Libro harryPotter("H.P y la piedra filosofal", "Fantasia", true);
    Libro marinaDeCarlosRuizZafon("Marina", "Novela Negra, Misterio", true);
    Libro mundoDisco("Eric", "Fantasia", true);
    Libro laIslaDelTesoro("La isla del tesoro", "Fantasia", true);
    Libro cronicasDeLaTorre("Cronicas de la torre", "Fantasia", true);
    Libro nada("Nada", "Novela existencialista", true);
    Libro momentosDeLaCiencia("Momentos De La Ciencia", "Educativo", true);
    Libro anaFrank("El diario de Ana Frank", "Autobiografia", true);
    Libro frankenstein("Frankenstein", "Ciencia Ficcion", true);
    Libro elJuegoDeEnder("El juego de Ender", "Ciencia Ficcion, Fantasia", true);
    Libro cazadoresDeSombras("Cazadores de sombras", "Romance, Fantasia", true);
    Libro losSuperHijos("Los Superhijos (coleccion)", "comic", true);
    Libro diccionarioDeGallego("Diccionario de la lengua gallega", "Educativo", true);
    Libro sinNoticiasDeGurb("Sin noticias de Gurb", "Novela Satirica, Ciencia Ficcion", true);
    Libro robotsEImperio("Robots e Imperio", "Ciencia Ficcion, Misterio, Fantasia", true);
    Libro sherlockHolmes("Sherlock Holmes", "Misterio", true);
    Libro sherlockLupinyYo("Sherlock, Lupin y Yo", "Misterio, Aventura, Drama", true);
    Libro todosLosLibros[] = {
            pokedex, orgulloyPrejuicio, elGranLibroDelDibujo, enciclopediaDeInformatica,
            harryPotter, marinaDeCarlosRuizZafon, mundoDisco, laIslaDelTesoro, cronicasDeLaTorre,
            nada, momentosDeLaCiencia, anaFrank, frankenstein, elJuegoDeEnder, cazadoresDeSombras,
            losSuperHijos, diccionarioDeGallego, sinNoticiasDeGurb, robotsEImperio, sherlockHolmes,
            sherlockLupinyYo
    };


    Usuario vidhi ("Vidhi", "Sharma", "6");
    Usuario parejaDeVidhi("Victor","Bellod","69");
    Usuario mazitabombon ("Sergio", "Maza", "568");
    Usuario lu ("Lucia", "Doval", "686");

    darLibro(vidhi,cazadoresDeSombras,todosLosLibros);

    darLibro(lu,elJuegoDeEnder,todosLosLibros);

    darLibro(parejaDeVidhi,pokedex,todosLosLibros);

    darLibro(mazitabombon,harryPotter,todosLosLibros);


    return 0;
}
