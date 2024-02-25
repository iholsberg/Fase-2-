#include <iostream>
#include <string>

using namespace std;

class Cliente {
private:
    string nombres;
    string apellidos;
    string direccion;
    string telefono;
    string fecha_nacimiento;
    string nit;

public:
    // Constructor
    Cliente() {}

    // Método para crear un nuevo cliente
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
        cout << "Ingrese NIT: ";
        getline(cin, nit);
    }

    // Método para leer los datos del cliente
    void leer() {
        cout << "Nombres: " << nombres << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Fecha de Nacimiento: " << fecha_nacimiento << endl;
        cout << "NIT: " << nit << endl;
    }

    // Método para actualizar los datos del cliente
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
        cout << "Ingrese nuevo NIT: ";
        getline(cin, nit);
    }

    // Método para borrar los datos del cliente
    void borrar() {
        nombres = "";
        apellidos = "";
        direccion = "";
        telefono = "";
        fecha_nacimiento = "";
        nit = "";
        cout << "Los datos del cliente han sido borrados." << endl;
    }
};

class Empleado {
private:
    string nombres;
    string apellidos;
    string direccion;
    string telefono;
    string fecha_nacimiento;
    string codigo_empleado;
    string puesto;

public:
    // Constructor
    Empleado() {}

    // Método para crear un nuevo empleado
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
        cout << "Ingrese código de empleado: ";
        getline(cin, codigo_empleado);
        cout << "Ingrese puesto: ";
        getline(cin, puesto);
    }

    // Método para leer los datos del empleado
    void leer() {
        cout << "Nombres: " << nombres << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Fecha de Nacimiento: " << fecha_nacimiento << endl;
        cout << "Código de Empleado: " << codigo_empleado << endl;
        cout << "Puesto: " << puesto << endl;
    }

    // Método para actualizar los datos del empleado
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
        cout << "Ingrese nuevo código de empleado: ";
        getline(cin, codigo_empleado);
        cout << "Ingrese nuevo puesto: ";
        getline(cin, puesto);
    }

    // Método para borrar los datos del empleado
    void borrar() {
        nombres = "";
        apellidos = "";
        direccion = "";
        telefono = "";
        fecha_nacimiento = "";
        codigo_empleado = "";
        puesto = "";
        cout << "Los datos del empleado han sido borrados." << endl;
    }
};

int main() {
    Cliente cliente;
    Empleado empleado;

    // Crear un nuevo cliente
    cout << "Creación de un nuevo cliente:" << endl;
    cliente.crear();

    // Leer los datos del cliente
    cout << "\nDatos del cliente:" << endl;
    cliente.leer();

    // Actualizar los datos del cliente
    cout << "\nActualización de los datos del cliente:" << endl;
    cliente.actualizar();

    // Leer los datos del cliente actualizados
    cout << "\nDatos del cliente actualizados:" << endl;
    cliente.leer();

    // Borrar los datos del cliente
    cout << "\nBorrado de los datos del cliente:" << endl;
    cliente.borrar();

    // Intentar leer los datos del cliente después del borrado
    cout << "\nIntento de lectura de los datos del cliente después del borrado:" << endl;
    cliente.leer();

    // Crear un nuevo empleado
    cout << "\nCreación de un nuevo empleado:" << endl;
    empleado.crear();

    // Leer los datos del empleado
    cout << "\nDatos del empleado:" << endl;
    empleado.leer();

    // Actualizar los datos del empleado
    cout << "\nActualización de los datos del empleado:" << endl;
    empleado.actualizar();

    // Leer los datos del empleado actualizados
    cout << "\nDatos del empleado actualizados:" << endl;
    empleado.leer();

    // Borrar los datos del empleado
    cout << "\nBorrado de los datos del empleado:" << endl;
    empleado.borrar();

    // Intentar leer los datos del empleado después del borrado
    cout << "\nIntento de lectura de los datos del empleado después del borrado:" << endl;
    empleado.leer();

    return 0;
}

