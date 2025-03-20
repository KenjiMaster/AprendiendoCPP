#include<iostream>

using namespace std;

int factorial(int numero){
    //Funcion recurrente de factorial
    if (numero == 0){
        return 1;
    }else{
        return numero*factorial(numero-1);
    }
}

int main(){
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    cout << "\nEl factorial del numero es: " << factorial(numero) << endl;
    return 0; 
}

