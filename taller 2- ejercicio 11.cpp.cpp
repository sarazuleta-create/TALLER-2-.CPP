
#include <iostream>
using namespace std;

int main() {

    cout << "===== Ejercicio 11: Cotizacion de envio =====\n";

    float peso, distancia, total;
    int zona;
    char fragil;

    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese la distancia en kilometros: ";
    cin >> distancia;

    cout << "Ingrese la zona (1 Nacional, 2 Internacional): ";
    cin >> zona;

    cout << "El paquete es fragil? (S/N): ";
    cin >> fragil;

    // Verificar los datos
    if (peso <= 0 || distancia <= 0 || peso > 30) {

        cout << "Error: revise el peso y la distancia\n";

    } else if (zona != 1 && zona != 2) {

        cout << "Error: la zona no es valida\n";

    } else if (fragil != 'S' && fragil != 's' &&
               fragil != 'N' && fragil != 'n') {

        cout << "Error: debe ingresar S o N\n";

    } else {

        // Calcular la tarifa inicial
        total = 8000 + peso * 1200 + distancia * 50;

        // Aplicar el costo internacional
        if (zona == 2) {
            total = total * 1.5;
        }

        // Aplicar el costo por paquete fragil
        if (fragil == 'S' || fragil == 's') {
            total = total * 1.20;
        }

        cout << "\n===== RESULTADO =====\n";
        cout << "Valor final del envio: " << total << "\n";

    }

    return 0;
}
