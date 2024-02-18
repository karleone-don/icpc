#include <iostream>
#include <utility>

int naraiany(int n[], int a){
    int  b = -1, c;
    int k[a];
    for(int i = 0; i < a - 1; i++){
        if(n[i] < n[i+1]){
            b = i;
        }
    }
    if(b == -1){
        for(int i = 0; i < a; i++){
            n[i] = i + 1;
        }
    }
    else{
        for(int i = b + 1; i < a; i++){
            if(n[b] < n[i]){
                c = i;
            }
        }
        std::swap(n[b], n[c]);
        for(int i = 0; i < b + 1; i++){
            k[i] = n[i];
        }
        for(int i = b + 1; i < a; i++){
            k[i] = n[a+b-i];
        }
        for(int i = 0; i < a; i++){
            n[i] = k[i];
        }
    }
    return n[a];
}

int main(){
    freopen("success.in", "r", stdin);
    freopen("success.out", "w", stdout);
    int a;
    std::cin >> a;
    int n[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    naraiany(n, a);
    for(int i = 0; i < a; i++){
        std::cout << n[i] << " ";
    }
}