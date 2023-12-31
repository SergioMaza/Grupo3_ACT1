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
void darLibro(Usuario &usuario, Libro &libro, Libro t[]) {
    if (libro.isDisponible()) {
        usuario.setLibroActual(libro);
        cout << "Le has dado [" + libro.getTitulo() + "] a " + usuario.getNombre() << endl;
        for (int i = 0; i <= 20; i++) {
            if (t[i].equals(libro)) {
                t[i] = libro;
            }
        }
    } else {
        cout << "El libro [" << libro.getTitulo() << "] no esta disponible" << endl;
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
        for (int i = 0; i <= 20; i++) {
            if (todoslosLibros[i].equals(l)) {
                todoslosLibros[i] = l;
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
    for (int i = 0; i <= 20; i++) {
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
bool tieneLibro(Usuario u, Libro l) {
    return l.equals(u.getLibroActual());
}

/**
 * Metodo que busca un libro a partir de su titulo
 * @return Libro que esta buscando el usuario
 */
Libro buscarLibroPorTitulo(Libro todosLosLibros[]) {
    string titulo;
    cout << "Escribe el titulo del libro:";
    cin >> titulo;
    for (int i = 0; i <= 20; i++) {
        if (todosLosLibros[i].getTitulo() == titulo) {
            return todosLosLibros[i];
        }
    }
    return Libro();
}

int main() {
    Libro pokedex("Pokedex", "Educativo", true);
    Libro orgulloyPrejuicio("OrgulloYPrejuicio", "Romance", true);
    Libro elGranLibroDelDibujo("ElGranLibroDelDibujo", "Educativo", true);
    Libro enciclopediaDeInformatica("EnciclopediaDeInformatica1980", "Educativo", true);
    Libro harryPotter("H.PYLaPiedraFilosofal", "Fantasia", true);
    Libro marinaDeCarlosRuizZafon("Marina", "Novela Negra, Misterio", true);
    Libro mundoDisco("Eric", "Fantasia", true);
    Libro laIslaDelTesoro("LaIslaDelTesoro", "Fantasia", true);
    Libro cronicasDeLaTorre("CronicasDeLaTorre", "Fantasia", true);
    Libro nada("Nada", "NovelaExistencialista", true);
    Libro momentosDeLaCiencia("MomentosDeLaCiencia", "Educativo", true);
    Libro anaFrank("ElDiarioDeAnaFrank", "Autobiografia", true);
    Libro frankenstein("Frankenstein", "Ciencia Ficcion", true);
    Libro elJuegoDeEnder("ElJuegoDeEnder", "Ciencia Ficcion, Fantasia", true);
    Libro cazadoresDeSombras("CazadoresDeSombras", "Romance, Fantasia", true);
    Libro losSuperHijos("LosSuperhijosColeccion", "comic", true);
    Libro diccionarioDeGallego("DiccionarioDeLaLenguaGallega", "Educativo", true);
    Libro sinNoticiasDeGurb("SinNoticiasDeGurb", "Novela Satirica, Ciencia Ficcion", true);
    Libro robotsEImperio("RobotsEImperio", "Ciencia Ficcion, Misterio, Fantasia", true);
    Libro sherlockHolmes("SherlockHolmes", "Misterio", true);
    Libro sherlockLupinyYo("SherlockLupinYYo", "Misterio, Aventura, Drama", true);
    Libro todosLosLibros[] = {
            pokedex, orgulloyPrejuicio, elGranLibroDelDibujo, enciclopediaDeInformatica,
            harryPotter, marinaDeCarlosRuizZafon, mundoDisco, laIslaDelTesoro, cronicasDeLaTorre,
            nada, momentosDeLaCiencia, anaFrank, frankenstein, elJuegoDeEnder, cazadoresDeSombras,
            losSuperHijos, diccionarioDeGallego, sinNoticiasDeGurb, robotsEImperio, sherlockHolmes,
            sherlockLupinyYo
    };

    // MENU POR CONSOLA
    bool seguirMenu1 = true, seguirMenu2 = true; // Variables para controlar los bucles
    char opcion, usuario;
    Usuario usuarioSeleccionado; // Usuario que se esta gestionando
    Libro libroSeleccionado; // Libro que se esta usando (darlo, eliminarlo, etc)
    Usuario vidhi = Usuario("Vidhi", "Sharma", "1");
    Usuario lucia = Usuario("Lucia", "Doval", "2");
    Usuario victor = Usuario("Victor", "Bellod", "3");
    Usuario sergio = Usuario("Sergio", "Maza", "4");


    cout << "\n****************************************************" << endl;
    cout << "*****     BIENVENIDO AL SISTEMA DE GESTION     *****" << endl;
    cout << "****************************************************\n" << endl;
    while (seguirMenu1) {
        cout << "1. Gestionar a Vidhi\n2. Gestionar a Lucia\n3. Gestionar a Victor"
                "\n4. Gestionar a Sergio\n5. Ver los libros disponibles\n6. Salir\n";
        cout << "Elige una opcion (Un solo numero):";
        cin >> usuario;
        cout << "--------------------" << endl;
        switch (usuario) {
            case '1':
                usuarioSeleccionado = vidhi;
                seguirMenu2 = true;
                break;
            case '2':
                usuarioSeleccionado = lucia;
                seguirMenu2 = true;
                break;
            case '3':
                usuarioSeleccionado = victor;
                seguirMenu2 = true;
                break;
            case '4':
                usuarioSeleccionado = sergio;
                seguirMenu2 = true;
                break;
            case '5':
                librosDisp(todosLosLibros);
                seguirMenu2 = false;
                break;
            case '6':
                seguirMenu1 = false;
                seguirMenu2 = false;
                break;
            default:
                cout << "Has introducido un numero incorrecto" << endl;
        }




            while (seguirMenu2) {
                cout << "Estas gestionando a " << usuarioSeleccionado.toString() << endl;
                cout << "--------------------" << endl;
                cout << "1. Ver el historial de " << usuarioSeleccionado.getNombre() <<
                     "\n2. Dar un libro a " << usuarioSeleccionado.getNombre() <<
                     "\n3. Retirar el libro a " << usuarioSeleccionado.getNombre() <<
                     "\n4. Ver si " << usuarioSeleccionado.getNombre() << " tiene un libro\n5. Atras" << endl;
                cout << "Escribe el numero de la accion que quieras realizar (Un solo numero):";
                cin >> opcion;
                cout << "--------------------" << endl;
                switch (opcion) {
                    case '1':
                        // Opción 1: Ver el historial de un Usuario
                        cout << usuarioSeleccionado.historialLibros() << endl;
                        break;

                    case '2':
                        // Opción 2: Dar un libro a un Usuario
                        libroSeleccionado = buscarLibroPorTitulo(todosLosLibros);
                        darLibro(usuarioSeleccionado, libroSeleccionado, todosLosLibros);
                        break;

                    case '3':
                        // Opción 3: Retirar el libro a un Usuario
                        libroSeleccionado = buscarLibroPorTitulo(todosLosLibros);
                        retirarLibro(usuarioSeleccionado, libroSeleccionado, todosLosLibros);
                        break;

                    case '4':
                        // Opción 4: Ver si un usuario tiene un libro
                        libroSeleccionado = buscarLibroPorTitulo(todosLosLibros);
                        if (tieneLibro(usuarioSeleccionado, libroSeleccionado)) {
                            cout << usuarioSeleccionado.getNombre() << " si tiene "
                                 << libroSeleccionado.getTitulo() + "\n";
                        } else {
                            cout << usuarioSeleccionado.getNombre() << " no tiene "
                                 << libroSeleccionado.getTitulo() + "\n";
                        }
                        break;

                    case '5':
                        // Opción 5: Ir al menu1
                        seguirMenu2 = false;
                        usuario = 0;
                        break;

                    default:
                        cout << "Opcion no valida" << endl;
                }
            }


    }
    return 0;
}
