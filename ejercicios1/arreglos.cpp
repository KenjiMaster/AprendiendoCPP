#include<iostream>
#include<sstream> // usar sstream
#include<vector> // usar vectores
#include<utility> //usar pair

using namespace std;
vector<string> split(const string& entrada, char delimitador){
    vector<string> listado;
    string item;
    stringstream ss(entrada);

    while(getline(ss, item, delimitador)){
        listado.push_back(item);
    }
    return listado;
}

pair<vector<int>,int> depresiones(const vector<int>& datos){
    vector<int> indices;
    for (size_t i = 1; i + 1 < datos.size(); i++ ){
        if (datos[i-1] > datos[i] && datos [i+1] > datos[i]){
            indices.push_back(i);
        }
    }
    return {indices,(int)indices.size()};
}

int main(){
    string datos;
    cout << "Ingresa los datos: ";
    getline(cin,datos);
    vector<string> lista = split(datos,',');
    vector<int> enteros;
    for (string item : lista){
        enteros.push_back(stoi(item));
    }
    pair<vector<int>,int> resultado = depresiones(enteros);
    if (resultado.second > 0){
        cout << resultado.second << '\n';
        for (size_t i = 0; i < resultado.first.size(); i++){
            if (i > 0) cout << ',';
            cout << resultado.first[i];
        }
        cout << '\n';
    }else{
        cout << "No hay depresiones" << endl;
    }
    return 0;
}