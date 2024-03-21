#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c = 0;
    cin >> a >> b;
    int n[2*a-1];
    for(int i = 0; i < 2*a-1; i++){
        cin >> n[i];
    }
    sort(n, n + 2*a-1);
    int m[a];
    m[0] = (b + n[0]) / 2;
    for(int i = 1; i < a; i++){
        m[i] = (n[2*i - 1] + n[2*i]) / 2;
        if(m[0] > m[i]){
            c = i;
            break;
        }
    }
    if(c == 0){
        c = a;
    }
    cout << c << ' ';
    for(int i = 0; i < 2*a-1; i++){
        if(b > n[i]){
            c = i + 1;
            break;
        }
    }
    if(c > a){
        c = a;
    }
    for(int i = c; i < a; i++){
        if(b + n[2*i-2] > n[] + n[])
    }
}