#include <iostream>
#include <cmath>

int main(){
    int a, b;
    bool t;
    std::cin >> a;
    b = std::pow(2, a); // a <= 20 ==> b = 2^a < 10^8 = 1 sec
    int n[a] = {0};
    for(int i = 0; i < b; i++){ // 2^20 * 20 = 20.971.520 < 10^8 = 100.000.000
        t = true;
        for(int j = a-1; j > 0; j--){
            if(n[j] == 2){
                n[j] = 0;
                n[j-1]++;
            }
        }
        for(int j = a-1; j > 0; j--){
            if(n[j] == 1 and n[j-1] == 1){
                t = false;
            }
        }
        if(t){
            for(int j = 0; j < a; j++){
                std::cout << n[j] << " ";
            }
            std::cout << std::endl;
        }
        n[a-1]++;
    }
}