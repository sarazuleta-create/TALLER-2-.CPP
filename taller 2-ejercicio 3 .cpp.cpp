
/*
 * Ejercicio 3: Indice de masa corporal
 */

#include <iostream>
using namespace std;

int main() {

    cout << "===== EJERCICIO 3: INDICE DE MASA CORPORAL =====\n\n";

    // Pedir el peso y la estatura
    float peso, estatura, imc;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    // Verificar si los datos son validos
    if (peso <= 0 || estatura <= 0) {

        cout << "Error: el peso y la estatura deben ser mayores que cero.\n";

    } else {

        // Calcular el IMC
        imc = peso / (estatura * estatura);

        cout << "\n===== RESULTADO =====\n";
        cout << "Su IMC es: " << imc << "\n";

        // Clasificar el IMC
        if (imc < 18.5) {
            cout << "Clasificacion: Bajo peso\n";
        } else if (imc < 25) {
            cout << "Clasificacion: Normal\n";
        } else if (imc < 30) {
            cout << "Clasificacion: Sobrepeso\n";
        } else {
            cout << "Clasificacion: Obesidad\n";
        }

    } // Cierre del if-else

    return 0;
}
