#include <iostream>
using namespace std;

int main() {
    //===== CALCULAR PROMEDIO PONDERADO =====

    float nota1, nota2, nota3, promedio;

    cout << "Digite la primera nota: ";
    cin >> nota1;

    cout << "Digite la segunda nota: ";
    cin >> nota2;

    cout << "Digite la tercera nota: ";
    cin >> nota3;

    //===== VALIDAR LAS NOTAS =====

    if (nota1 >= 0) {
        if (nota1 <= 5) {
            if (nota2 >= 0) {
                if (nota2 <= 5) {
                    if (nota3 >= 0) {
                        if (nota3 <= 5) {

                            //===== CALCULAR PROMEDIO =====

                            promedio = nota1 * 0.30 + nota2 * 0.30 + nota3 * 0.40;

                            cout << "El promedio es: " << promedio << "\n";

                            //===== MOSTRAR CONCEPTO =====

                            if (promedio >= 4.5) {
                                cout << "Excelente";
                            } else if (promedio >= 4.0) {
                                cout << "Bueno";
                            } else if (promedio >= 3.0) {
                                cout << "Aceptable";
                            } else {
                                cout << "Reprobado";
                            }

                        } else {
                            cout << "Error: la tercera nota debe estar entre 0 y 5";
                        }
                    } else {
                        cout << "Error: la tercera nota debe estar entre 0 y 5";
                    }
                } else {
                    cout << "Error: la segunda nota debe estar entre 0 y 5";
                }
            } else {
                cout << "Error: la segunda nota debe estar entre 0 y 5";
            }
        } else {
            cout << "Error: la primera nota debe estar entre 0 y 5";
        }
    } else {
        cout << "Error: la primera nota debe estar entre 0 y 5";
    }

    return 0;
}


   
   
   