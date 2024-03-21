#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    freopen("justforfood.in", "r", stdin);
    freopen("justforfood.out", "w", stdout);
    int a, b, c = 0, d, e;
    cin >> a >> b;
    vector<int> n(a);
    for(int i = 0; i < a; i++){
        cin >> n[i];
    }
    sort(n.begin(), n.end());
    reverse(n.begin(), n.end());
    while(n.size() > b - 1){
        d = 10000000;
        for(int i = 0; i < b; i++){
            if(d > n[i]){
                d = n[i];
            }
        }
        c += d;
        e = b;
        for(int i = 0; i < e; i++){
            n[i] -= d;
            if(n[i] == 0){
                n.erase(n.begin() + i);
                e--;
                i--;
            }
        }
    }
    cout << c;
}