#include <iostream>
#include <utility>

int naraiany(int n[], int a){
    int b, c;
    int k[a];
    for(int i = 0; i < a-1; i++){
        if(n[i] < n[i+1]){
            b = i;
        }
    }
    for(int i = b + 1; i < a; i++){
        if(n[b] < n[i]){
            c = i;
        }
    }
    std::swap(n[b], n[c]);
    for(int i = 0; i < b+1; i++){
        k[i] = n[i];
    }
    for(int i = b+1; i < a; i++){
        k[i] = n[a+b-i];
    }
    for(int i = 0; i < a; i++){
        n[i] = k[i];
    }
    return n[a];
}

int main(){
    
    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);

    int a;
    std::cin >> a;
    int n[a], m[8];
    for(int i = 0; i < a; i++){
        n[i] = i + 1;
    }
    m[0] = 1;
    for(int i = 1; i < 8; i++){
        m[i] = m[i-1] * (i + 1);   
    }
    for(int i = 0; i < a; i++){
        std::cout << n[i] << " ";
    }
    
    for(int j = 0; j < m[a-1] - 1; j++){
        std::cout << std::endl;
        naraiany(n, a);
        for(int i = 0; i < a; i++){
            std::cout << n[i] << " ";
        }
    }
}