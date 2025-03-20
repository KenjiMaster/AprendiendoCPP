#include<iostream>

using namespace std;

int suma(int a,int b){
    //Funcion para sumar dos numeros
    return a + b;
}

int main(){
    int num1;
    int num2;
    cout << "Ingresa el primer numero: "; cin >> num1;
    cout << "Ingresa el segundo numero: "; cin >> num2;
    cout << "La suma de los numeros da: " << suma(num1,num2) << endl;
    return 0;
}