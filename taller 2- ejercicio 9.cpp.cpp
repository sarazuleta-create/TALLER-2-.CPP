
#include <iostream>
using namespace std;

int main() {

    cout << "===== Ejercicio 9: Cajero =====\n";

    float saldo, monto;
    int opcion;

    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;

    // Verificar el saldo
    if (saldo < 0) {
        cout << "Error: el saldo no puede ser negativo\n";
    } else {

        cout << "\n1. Consultar saldo\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Consignar dinero\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Realizar una sola operacion
        switch (opcion) {

            case 1:
                cout << "Su saldo es: " << saldo << "\n";
                break;

            case 2:
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;

                if (monto <= 0) {
                    cout << "Error: el monto debe ser positivo\n";
                } else if (monto > saldo) {
                    cout << "Error: saldo insuficiente\n";
                } else {
                    saldo = saldo - monto;
                    cout << "Nuevo saldo: " << saldo << "\n";
                }
                break;

            case 3:
                cout << "Ingrese el monto a consignar: ";
                cin >> monto;

                if (monto <= 0) {
                    cout << "Error: el monto debe ser positivo\n";
                } else {
                    saldo = saldo + monto;
                    cout << "Nuevo saldo: " << saldo << "\n";
                }
                break;

            default:
                cout << "Opcion no valida\n";
        }
    }

    return 0;
}

