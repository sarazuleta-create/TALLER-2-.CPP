#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"=====EJERCICIO 1: CONVERTIR EL TIEMPO======\n\n";
    // pedir la cantidad de segundos
    int segundosTotales;
    
    cout<<"Ingrese la cantidad de segundos:";
    cin>> segundosTotales;
    
    // verificar si el numero es negativo
    if (segundosTotales<0){
        cout<<"ERROR:los segundos no pueden ser negativos\n";
    }else{
        //realizar la conversion
        int horas = segundosTotales /3600;
        int minutos=(segundosTotales % 3600)/60;
        int segundos= segundosTotales %60;
        
        // Mostrar los segundosTotales
        cout<< "\n=====RESULTADO======\n";
        cout<<"Hora:"<< horas <<"\n";
        cout<<"Minutos: "<< minutos <<"\n";
        cout<<"Segundos: "<<segundos << "\n";
        
    }// cierre del if-else
    
    return 0;
}
    