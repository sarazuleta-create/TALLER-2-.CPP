
#include <iostream>
using namespace std;

int main() {

    cout << "===== Ejercicio 7: Nomina con horas extra =====\n";

    float valorHora, horas;
    float normales, extras, dobles;
    float salarioBruto, descuento, salarioNeto;

    cout << "Ingrese el valor de la hora: ";
    cin >> valorHora;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;

    // Verificar los datos
    if (valorHora <= 0 || horas < 0) {
        cout << "Error: los datos no son validos\n";
    } else {

        // Calcular las horas normales, extras y dobles
        if (horas <= 40) {
            normales = horas;
            extras = 0;
            dobles = 0;
        } else if (horas <= 48) {
            normales = 40;
            extras = horas - 40;
            dobles = 0;
        } else {
            normales = 40;
            extras = 8;
            dobles = horas - 48;
        }

        // Calcular el salario bruto
        salarioBruto = normales * valorHora
                     + extras * valorHora * 1.5
                     + dobles * valorHora * 2;

        // Calcular el descuento
        if (salarioBruto > 2000000) {
            descuento = salarioBruto * 0.08;
        } else {
            descuento = salarioBruto * 0.04;
        }

        salarioNeto = salarioBruto - descuento;

        // Mostrar resultados
        cout << "\n===== RESULTADO =====\n";
        cout << "Horas normales: " << normales << "\n";
        cout << "Horas extra: " << extras << "\n";
        cout << "Horas dobles: " << dobles << "\n";
        cout << "Salario bruto: " << salarioBruto << "\n";
        cout << "Descuento: " << descuento << "\n";
        cout << "Salario neto: " << salarioNeto << "\n";
    }

    return 0;
}
