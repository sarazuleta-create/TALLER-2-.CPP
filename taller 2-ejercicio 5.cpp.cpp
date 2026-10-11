#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"===== EJERCICIO 5: tipo de triangulo====\n";
    
    float lado1,lado2,lado3,perimetro;
    
    cout<<"Ingrese el primer lado:";
    cin>>lado1;
    cout<<"Ingrese el segundo lado:";
    cin>>lado2;
      cout<<"Ingrese el tercer lado:";
    cin>>lado3;
    
    //verificar los lados 
    if(lado1<=0||lado2 <=0||lado3<=0){
        cout<<"ERROR: los lados deben ser positivos\n";
    }else if(lado1+lado2<=lado3||
             lado1+lado3<=lado2||
             lado2+lado3<=lado1 ){
                 cout<<"los lados no forman un triangulo\n";
             }else{
                 perimetro=lado1+lado2+lado3;
                 cout<<"el perimetro es:"<<perimetro<<"\n";
                 // Clasificar el triangulo
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triangulo es equilatero\n";
        } else if (lado1 == lado2 || lado1 == lado3 ||
                   lado2 == lado3) {
            cout << "El triangulo es isosceles\n";
        } else {
            cout << "El triangulo es escaleno\n";
        }
            return 0;
             }
}
         
     