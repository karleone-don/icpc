#include <iostream>

int main(){
    int a, b = 0;
    std::cin >> a;
    int n[a], m[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    m[0] = 1;
    for(int i = 1; i < a; i++){
        m[i] = 1;
        for(int j = 0; j < i; j++){
            if(n[i] > n[j] and m[i] <= m[j]){
                m[i] = m[j] + 1;
            }
        }
    }
    for(int i = 0; i < a; i++){
        if(b < m[i]){
            b = m[i];
        }
    }
    std::cout << b;
}