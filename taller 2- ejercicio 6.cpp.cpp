/* 
*EJERCICIO 6:Mayor, menor y relación entre tres números
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"=====EJERCICIO 6:tres numeros=====\n";
    int numero1,numero2,numero3;
    
    cout<<"Ingrese el primer numero:";
    cin>>numero1;
    cout<<"Ingrese el segundo numero:";
    cin>>numero2;
    cout<<"Ingrese el tercer numero:";
    cin>>numero3;
    
    //Encontrar el Mayor
    if(numero1>=numero2 && numero1>=numero3){
        cout<<"El mayor es:"<< numero1<< "\n";
    }else if(numero2>=numero1 && numero2>=numero3){
        cout<<"El mayor es:"<<numero2<<"\n";
    }else{
        cout<<"el mayor es:"<<numero3<<"\n";
    }
    // Encontrar el menor
    if (numero1 <= numero2 && numero1 <= numero3) {
        cout << "El menor es: " << numero1 << "\n";
    } else if (numero2 <= numero1 && numero2 <= numero3) {
        cout << "El menor es: " << numero2 << "\n";
    } else {
        cout << "El menor es: " << numero3 << "\n";
    }

    // Verificar si son iguales
    if (numero1 == numero2 && numero2 == numero3) {
        cout << "Los tres numeros son iguales\n";
    } else if (numero1 == numero2 || numero1 == numero3 ||
               numero2 == numero3) {
        cout << "Hay dos iguales y uno distinto\n";
    } else {
        cout << "Los tres numeros son distintos\n";
    }

    return 0;
}
    
