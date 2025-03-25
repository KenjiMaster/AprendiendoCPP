#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k,item;
    cin >> n;
    cin >> k;

    priority_queue<int> pq;

    for(int i = 0; i<n ; i++){
        cin >> item;
        pq.push(item);
    }
    for(int i = 0; i<k ; i++){
        cout << pq.top() << ' ';
        pq.pop();
    }
    cout << endl;
    return 0;
}