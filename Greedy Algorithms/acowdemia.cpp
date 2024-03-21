#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int index(vector<int> &v, int m){
    while(m > 0 and v[m-1] < m){
        m--;
    }
    return m;
}

int main(){
    int a, b, h;
    cin >> a >> b;
    vector<int> n(a);
    for(int i = 0; i < a; i++){
        cin >> n[i];
    }
    sort(n.begin(), n.end(), greater<int>());
    h = index(n, a);
    if(h < a){
        for(int i = h; i >= max(h-b+1, 0); i--){
            n[i]++;
        }
    }
    sort(n.begin(), n.end(), greater<int>());
    h = index(n, a);
    cout << h;
}