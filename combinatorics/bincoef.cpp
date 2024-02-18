#include <iostream>

int binCoef(int n, int k) {
   if (k == 0 || k == n)
   return 1;
   return binCoef(n - 1, k - 1) + binCoef(n - 1, k);
}

int main(){
    int d;
    uint64_t a, b, c;
    std::cin >> d;
    for(int i = 0; i < d; i++){
        std::cin >> a >> b;
        c = binCoef(a , b);
        std::cout << c << std::endl;
    }
}