#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string nombre;
    string autor;
    int ano;

public:
  
    Libro(string n, string a, int o) {
        nombre = n;
        autor = a;
        ano = o;
    }

    void mostrarinfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de publicación: " << ano << endl;
    }
};

class Novela : public Libro {
private:
    string tipo; 

public:
    
    Novela(string n, string a, int o, string t) : Libro(n, a, o), tipo(t) {}

    void mostrarinfo() {
        Libro::mostrarinfo(); 
        cout << "Tipo de libro: " << tipo << endl;
    }
};

int main() {
    Novela novela1("Cien años de soledad", "Gabriel García Márquez", 1967, "Ficción");
    novela1.mostrarinfo();

    return 0;
}
