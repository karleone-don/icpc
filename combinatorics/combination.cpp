#include <iostream>

int main(){
    freopen("choose.in", "r", stdin);
    freopen("choose.out", "w", stdout);
    int a, b, c = 1, d;
    std::cin >> a >> b;
    int n[b];
    for(int i = 0; i < b; i++){
        n[i] = i + 1;
        std::cout << n[i] << " ";
    }
    std::cout << std::endl;
    for(int i = b; i < a; i++){
        c *= i+1;
        c /= i-b+1;
    }
    for(int i = 0; i < c - 1; i++){
        d = -1;
        for(int j = b - 1; j > 0; j--){
            if(n[j] == a + j + 1 - b){
                d = j;
            }
        }
        if(d != -1){
            n[d-1]++;
            for(int k = 1; k < b-d+1; k++){
                n[d+k-1] = n[d+k-2] + 1;
            }
        }
        else{
            n[b-1]++;
        }
        for(int j = 0; j < b; j++){
            std::cout << n[j] << " ";
        }
        std::cout << std::endl;
    }
}