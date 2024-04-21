#include <iostream>

using namespace std;
// Funciones para cada opción del menú
void opcion1() {
    cout << "Has seleccionado la opción 1" << endl;
}

void opcion2() {
    cout << "Has seleccionado la opción 2" << endl;
}

void opcion3() {
    cout << "Has seleccionado la opción 3" << endl;
}

void mostrarMenu() {
    cout << "Menú:" << endl;
    cout << "1. Opción 1" << endl;
    cout << "2. Opción 2" << endl;
    cout << "3. Opción 3" << endl;
    cout << "4. Salir" << endl;
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                opcion1();
                break;
            case 2:
                opcion2();
                break;
            case 3:
                opcion3();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}
