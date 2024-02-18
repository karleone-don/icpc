#include <iostream>

int main() {
    freopen("generation.in", "r", stdin);
    freopen("generation.out", "w", stdout);
    int a, b, c = 1, d;
    std::cin >> a >> b;
    for(int i = b; i < a; i++){
        c *= i + 1;
        c /= i - b + 1;
    }
    int n[b];
    for(int i = 0; i < b; i++){
        n[i] = a - i;
        std::cout << n[i] << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < c - 1; i++){
        d = -1;
        for(int j = b-1; j > 0; j--){
            if(n[j] == b - j){
                d = j-1;
            }
        }
        if(d == -1){
            n[b-1]--;
        }
        else{
            n[d]--;
            for(int j = d+1; j < b; j++){
                n[j] = n[j-1] - 1;
            }
        }
        for(int j = 0; j < b; j++){
            std::cout << n[j] << " ";
        }
        std::cout << std::endl;
    }
}