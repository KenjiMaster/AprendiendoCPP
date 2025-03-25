#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    string pal;
    cin >> n;

    map<string, int> cap;
    for (int i = 0; i < n; i++){
        cin >> pal;
        cap[pal] += 1;
    }
    for (auto p : cap){
        cout << p.first << ": " << p.second << '\n';
    }
    return 0;
}