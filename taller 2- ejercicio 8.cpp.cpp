
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "===== Ejercicio 8: Ecuacion de segundo grado =====\n";

    float a, b, c, discriminante;
    float x1, x2;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    // Verificar el tipo de ecuacion
    if (a == 0 && b == 0) {
        cout << "No es una ecuacion lineal ni cuadratica\n";
    } else if (a == 0) {

        x1 = -c / b;

        cout << "Es una ecuacion lineal\n";
        cout << "El valor de x es: " << x1 << "\n";

    } else {

        // Calcular el discriminante
        discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {

            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);

            cout << "Tiene dos raices reales\n";
            cout << "Primera raiz: " << x1 << "\n";
            cout << "Segunda raiz: " << x2 << "\n";

        } else if (discriminante == 0) {

            x1 = -b / (2 * a);

            cout << "Tiene una raiz real\n";
            cout << "Raiz: " << x1 << "\n";

        } else {
            cout << "Las raices son complejas\n";
        }
    }

    return 0;
}
