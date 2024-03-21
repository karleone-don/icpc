#include <iostream>
#include <cmath>

int main(){
    int a, b, c, d;
    std::cin >> a;
    int n[a+1];
    n[1] = 1;
    n[2] = 2;
    n[3] = 3;
    for(int i = 4; i <= a; i++){
        b = n[i-1] + 1;
        c = i / 2;
        for(int j = 1; j <= c; j++){
            if(n[j] + n[i-j] < b){
                b = n[j] + n[a-j];
            }
        }
        d = std::sqrt(i);
        for(int j = 2; j <= d; j++){
            if(i % j == 0){
                if(n[j] + n[i/j] < b){
                    b = n[j] + n[i/j];
                }
            }
        }
        n[i] = b;
    }
    std::cout << n[a];
}