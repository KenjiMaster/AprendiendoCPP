#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int datos;
    string dato;
    vector<int> ve;
    cout << "Ingresa la cantidad de datos: ";
    cin >> datos;

    for (int i = 0; i < datos; i++){
        cout << "Ingresa el dato #" << i+1 << ": ";
        cin >> dato;
        ve.push_back(stoi(dato));
    }
    reverse(ve.begin(),ve.end());
    for (int i : ve){
        cout << i << ' ';
    }
    return 0;
}