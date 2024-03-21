//1 7 11 17 71 77 111 117 171 177 711 717 771 777
// a =  2d - 2
// 2 6 14 30 62 126
// 2*2+2 = 6
#include <iostream>
#include <string>

int main(){
    int a;
    long long d = 2, c = 2;
    std::string s;
    std::cin >> a;
    while(a > 2*d-2){
        d *= 2;
        c += d;
    }
    d /= 2;
    //std::cout << d;
    while(d > 1){
        if(a > c - d){
            s += '7';
        }
        else{
            s += '1';
        }
        c -= 2 * d;
        a -= d;
        std::cout << a << " ";
        d /= 2; 
    }
    if(a % 2 == 0){
        s += '7';
    }
    else{
        s += '1';
    }
    std::cout << s;
}