#include <iostream>
#include <algorithm>

int main(){
    int a, b = 0, c = 0;
    std::cin >> a;
    int n[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    std::sort(n, n+a);
    if(a > 1){
        b += n[1] - n[0];
    }
    if(a > 2){
        b += n[a-1] - n[a-2];
    }
    for(int i = 2; i < a-2; i++){
        b += std::min(n[i] - n[i-1], n[i+1] - n[i]);
        if(n[i] - n[i-1] > n[i+1]  - n[i]){
            i++;
        }
    }
    std::cout << b;
}