
#include <iostream>
using namespace std;

int main() {

    cout << "===== Ejercicio 10: Fecha valida =====\n";

    int dia, mes, anio;
    int diasMes;

    cout << "Ingrese el dia: ";
    cin >> dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el anio: ";
    cin >> anio;

    // Verificar los datos
    if (anio <= 0 || mes < 1 || mes > 12) {

        cout << "Error: fecha no valida\n";

    } else {

        // Determinar los dias del mes
        if (mes == 1 || mes == 3 || mes == 5 ||
            mes == 7 || mes == 8 || mes == 10 ||
            mes == 12) {

            diasMes = 31;

        } else if (mes == 4 || mes == 6 ||
                   mes == 9 || mes == 11) {

            diasMes = 30;

        } else {

            diasMes = 28;

            // Verificar si febrero tiene 29 dias
            if (anio % 400 == 0 ||
                (anio % 4 == 0 && anio % 100 != 0)) {

                diasMes = 29;
            }
        }

        // Verificar el dia
        if (dia < 1 || dia > diasMes) {

            cout << "Error: fecha no valida\n";

        } else {

            cout << "La fecha es valida\n";
            cout << "El mes tiene " << diasMes << " dias\n";

        }
    }

    return 0;
}
