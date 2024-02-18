#include <iostream>

int main(){
    int a, b, d, c = 1;
    std::cin >> a >> b;
    d = a;
    int n[a];
    for(int i = 0; i < a; i++){
        if(b >= a - i - 1){
            n[i] = d;
            b -= a - i - 1;
            d--;
        }
        else{
            n[i] = c;
            c++;
        }
    }
    for(int i = 0; i < a; i++){
        std::cout << n[i] << " ";
    }
}