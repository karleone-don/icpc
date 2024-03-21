#include <iostream>
#include <cmath>

//a b c
//aa ab* ac ba bb bc ca cb cc
//sa sb sc
//2*8 + 5 = 8 - 3
//2*21 + 13 = 21 - 8

int main(){
    int a;
    std::cin >> a;
    int n[a+1];
    n[0] = 1;
    if(a > 0){
        n[1] = 3;
    }
    for(int i = 2; i <= a; i++){
        n[i] = 3*n[i-1] - n[i-2];
    }
    std::cout << n[a];
}