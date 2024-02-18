#include <iostream>

int main(){
    int a, b = 1;
    std::cin >> a;
    int n[a], m[a] = {0}, k[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    for(int i = 0; i < a; i++){
        for(int j = i + 1; j < a; j++){
            if(n[i] > n[j]){
                m[i]++;
            }
        }
    }
    k[0] = 1;
    for(int i = 1; i < a; i++){
        k[i] = k[i-1]*(i+1);
    }
    for(int i = 0; i < a - 1; i++){
        b += m[i] * k[a-i-2];
    }
    std::cout << b;
}