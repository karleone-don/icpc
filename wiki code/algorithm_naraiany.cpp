#include <iostream>
#include <utility>

int naraiany(int n[], int a){
    int b, c;
    int m[a];
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
        m[i] = n[i];
        std::cout << m[i] << " ";
    }
    for(int i = b+1; i < a; i++){
        m[i] = n[a+b-i];
        std::cout << m[i] << " ";
    }
    return m[a];
}

int main(){
    int a;
    std::cin >> a;
    int n[a], m[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    naraiany(n, a);
    /*for(int i = 0; i < a; i++){
        std::cout << m[i] << " ";
    }*/
}