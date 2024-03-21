#include<iostream>

uint64_t bincoef(uint64_t a, uint64_t b){
    uint64_t n = 1;
    for(uint64_t i = b; i < a; i++){
        n *= i + 1;
        n /= i - b + 1;
    }
    return n;
}

int main(){
    int c;
    uint64_t a, b;
    std::cin >> c;
    for(int i = 0; i < c; i++){
        std::cin >> a >> b;
        std::cout << bincoef(a, b) << std::endl;
    }
}
