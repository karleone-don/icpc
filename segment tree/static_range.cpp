#include <iostream>

int main(){
    long long a, b, c, d;
    std::cin >> a >> b;
    long long n[a], m[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    m[0] = n[0];
    for(int i = 1; i < a; i++){
        m[i] = m[i-1] + n[i];
    }
    for(int i = 0; i < b; i++){
        std::cin >> c >> d;
        if(c == 1){
            std::cout << m[d-1] << std::endl;
        }
        else{
            std::cout << m[d-1] - m[c-2] << std::endl;
        }
    }
}