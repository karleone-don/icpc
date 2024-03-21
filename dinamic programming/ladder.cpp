#include <iostream>
#include <algorithm>

int lad(int n[], int a){
    int d[a];
    d[0] = n[0];
    d[1] = n[1];
    if(d[0] > 0){
        d[1] += d[0];
    }
    for(int i = 2; i < a; i++){
        d[i] = std::max(d[i-1], d[i-2]) + n[i];
    }
    return d[a-1];
}

int main(){
    freopen("ladder.in", "r", stdin);
    freopen("ladder.out", "w", stdout);
    int a, b;
    std::cin >> a;
    int n[a], m[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    b = lad(n, a);
    std::cout << b;
}