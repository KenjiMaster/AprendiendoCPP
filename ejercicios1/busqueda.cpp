#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,num;
    cin >> n;
    cin >> num;
    vector<int> vec(n);

    for (int i=0; i<n ; i++) cin >> vec[i];
    vec.push_back(num);
    sort(vec.begin(),vec.end());
    for (int i = 0; i<n+1; i++){
        if (vec[i] == num){
            cout << i << endl;
        }
    }
    return 0;
}