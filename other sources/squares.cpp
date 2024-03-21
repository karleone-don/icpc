#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int d[n];
    for(int k = 1; k <= n; k++) {
        int best = d[k - 1] + 1; // принимаем этот вариант за наилучший
        int q = 1;
        while(k - q*q >= 0) {  // k = q*q + s
            if(k - q*q == 0) { // k - полный квадрат
                best = 1;
                break;
            } else if(d[k - q*q] < best) best = d[k - q*q] + 1; 
            
            q++;
        }
        d[k] = best;
        std::cout << d[k] << std::endl;
    }
}