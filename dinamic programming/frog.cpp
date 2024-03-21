#include <iostream>
#include <cmath>
#include <algorithm>

int jump(int n[], int a){
    int d[a];
    d[0] = 0;
    d[1] = std::abs(n[1]-n[0]);
    for(int i = 2; i < a; i++){
        d[i] = std::min(std::abs(n[i] - n[i-1]) + d[i-1], std::abs(n[i] - n[i-2]) + d[i-2]);
    }
    return d[a-1];
}

int main(){
    int a;
    std::cin >> a;
    int n[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    std::cout << jump(n, a);
}