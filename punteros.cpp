#include<iostream>
#include<string>

using namespace std;

string recorer(int *arreglo){
    string salida = "";
    for (int i=0; i < 7;i++){
        salida.append(to_string(arreglo[i]) + ' ');
    }
    return salida;
}

int main(){
    int array[7] = {1,4,25,5,46,234,2};
    double num = 2.34;
    double *pNum = &num;
    cout << *pNum << '\n';
    cout << recorer(array) << endl;
    return 0;
}