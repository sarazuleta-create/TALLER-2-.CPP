
#include <iostream>
using namespace std;

int main() {

	cout << "===== Ejercicio 12: Riesgo y capacidad de pago =====\n";

	float ingreso, deuda;
	float relacion, capacidad;
	int edad, historial;

	cout << "Ingrese el ingreso mensual: ";
	cin >> ingreso;

	cout << "Ingrese la deuda mensual: ";
	cin >> deuda;

	cout << "Ingrese la edad: ";
	cin >> edad;

	cout << "Tiene historial crediticio? (1 Si, 0 No): ";
	cin >> historial;

	// Verificar los datos
	if (ingreso <= 0 || deuda < 0 ||
	        edad < 18 || edad > 100 ||
	        (historial != 0 && historial != 1)) {

		cout << "Error: los datos ingresados no son validos\n";

	} else {

		// Calcular la relacion y la capacidad de pago
		relacion = deuda / ingreso;
		capacidad = ingreso - deuda;

		cout << "\n===== RESULTADO =====\n";
		cout << "Relacion deuda/ingreso: " << relacion << "\n";
		cout << "Capacidad de pago: " << capacidad << "\n";

		// Clasificar el riesgo
		if (relacion > 0.5 || capacidad < 0) {

			cout << "Nivel de riesgo: ALTO\n";

		} else if (relacion <= 0.3 &&
		           edad >= 25 && historial == 1) {

			cout << "Nivel de riesgo: BAJO\n";

		} else {

			cout << "Nivel de riesgo: MEDIO\n";

		}
	}

	return 0;
}

