#include <iostream>

int gcd(int a, int b){
    while(b != 0 and a != 0 and b != a){
        if(a > b){
            a = a % b;
        }
        else if(b > a){
            b = b % a;
        }
    }
    if(a > 1 or b > 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a = 1, b = 0;
    std::cin >> a;
    for(int i = 2; i <= a; i++){
        for(int j = 2; j <= a; j++){
            if(gcd(i, j) == false){
                b++;
            }
        }
    }
    std::cout << b;
}