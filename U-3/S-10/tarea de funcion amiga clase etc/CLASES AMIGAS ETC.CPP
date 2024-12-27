#include <iostream>
#include <string>

using namespace std;

class Usuario {
protected:
    string nombre;
    string email;
    static int totalUsuarios;

public:
    Usuario(string nombre, string email) : nombre(nombre), email(email) {
        totalUsuarios++;
    }

    virtual void mostrarInfo() = 0;

    static int obtenerTotalUsuarios() {
        return totalUsuarios;
    }

    friend void mostrarUsuarioInfo(Usuario& u);
};

int Usuario::totalUsuarios = 0;

class Admin : public Usuario {
public:
    Admin(string nombre, string email) : Usuario(nombre, email) {}

    void mostrarInfo() override {
        cout << "Admin: " << nombre << ", Email: " << email << endl;
    }

    friend void mostrarUsuarioInfo(Usuario& u);
};

class Cliente : public Usuario {
public:
    Cliente(string nombre, string email) : Usuario(nombre, email) {}

    void mostrarInfo() override {
        cout << "Cliente: " << nombre << ", Email: " << email << endl;
    }

    friend void mostrarUsuarioInfo(Usuario& u);
};

void mostrarUsuarioInfo(Usuario& u) {
    u.mostrarInfo();
}

int main() {
    Admin admin("DIEGO", "DIEGO@unas.edu.pe");
    Cliente cliente("CHECYA", "CHECYA@fiis.com.pe");

    mostrarUsuarioInfo(admin);
    mostrarUsuarioInfo(cliente);

    cout << "Total de usuarios: " << Usuario::obtenerTotalUsuarios() << endl;

    return 0;
}
