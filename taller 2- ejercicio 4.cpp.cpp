/*
*EJERCICIO 4: año bisiesto
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"=====EJERCICIO 4: año bisiesto=====\n\n";
    
    int año;
    cout<<"ingrese un año:";
    cin>>año;
    
    //verificar el año
    if(año<=0){
        cout<<"ERROR: el año debe ser positivo\n";
    }else if(año %400==0){
        cout<<"el año es bisiesto\n";
    }else if(año %100==0){
        cout<<"el año no es bisiesto\n";
    }else if(año %4==0){
        cout<<"el año es bisiesto\n";
    }else{
        cout<<"el año no es bisiesto\n";
    }
    return 0;
}