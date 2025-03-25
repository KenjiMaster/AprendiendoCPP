#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    int num;
    cin >> n;

    set<int> sup;
    for (int i = 0; i<n; i++){
        cin >> num;
        sup.insert(num);
    }
    int count = 0;
    for (int i : sup) count++;
    cout << count << endl;
    return 0;
}