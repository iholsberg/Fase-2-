#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombres;
    string apellidos;
    string direccion;
    string telefono;
    string fecha_nacimiento;

public:
    // Constructor
    Persona() {}

    // M�todo para crear una nueva persona
    void crear() {
        cout << "Ingrese nombres: ";
        getline(cin, nombres);
        cout << "Ingrese apellidos: ";
        getline(cin, apellidos);
        cout << "Ingrese direccion: ";
        getline(cin, direccion);
        cout << "Ingrese telefono: ";
        getline(cin, telefono);
        cout << "Ingrese fecha de nacimiento: ";
        getline(cin, fecha_nacimiento);
    }

    // M�todo para leer los datos de la persona
    void leer() {
        cout << "Nombres: " << nombres << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Fecha de Nacimiento: " << fecha_nacimiento << endl;
    }

    // M�todo para actualizar los datos de la persona
    void actualizar() {
        cout << "Ingrese nuevos nombres: ";
        getline(cin, nombres);
        cout << "Ingrese nuevos apellidos: ";
        getline(cin, apellidos);
        cout << "Ingrese nueva direccion: ";
        getline(cin, direccion);
        cout << "Ingrese nuevo telefono: ";
        getline(cin, telefono);
        cout << "Ingrese nueva fecha de nacimiento: ";
        getline(cin, fecha_nacimiento);
    }

    // M�todo para borrar los datos de la persona
    void borrar() {
        nombres = "";
        apellidos = "";
        direccion = "";
        telefono = "";
        fecha_nacimiento = "";
        cout << "Los datos de la persona han sido borrados." << endl;
    }
};

int main() {
    Persona persona;

    // Crear una nueva persona
    cout << "Creaci�n de una nueva persona:" << endl;
    persona.crear();

    // Leer los datos de la persona
    cout << "\nDatos de la persona:" << endl;
    persona.leer();

    // Actualizar los datos de la persona
    cout << "\nActualizaci�n de los datos de la persona:" << endl;
    persona.actualizar();

    // Leer los datos de la persona actualizados
    cout << "\nDatos de la persona actualizados:" << endl;
    persona.leer();

    // Borrar los datos de la persona
    cout << "\nBorrado de los datos de la persona:" << endl;
    persona.borrar();

    // Intentar leer los datos de la persona despu�s del borrado
    cout << "\nIntento de lectura de los datos de la persona despu�s del borrado:" << endl;
    persona.leer();

    return 0;
}
