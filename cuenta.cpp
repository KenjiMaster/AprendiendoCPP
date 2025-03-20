#include<iostream>

using namespace std;

int cuenta(int numero){
    //Funcion para hacer cuenta regresiva
    while (0<numero){
        numero --;
        cout << "EL numero va en: " << numero << endl;
    }
    return 0;
}

int main(){
    int numero;
    cout << "Ingresa un numero para la cuenta regresiva: ";
    cin >> numero;
    cuenta(numero);
    return 0;
}