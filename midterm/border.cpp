#include <iostream>
#include <string>

int f(std::string n[], int b, int a, int c, int k){
    for(int i = 0; i < a; i++){
        if(n[k][i] == 'B'){
            if(i > 0){
                if(n[k][i-1] == 'A'){
                    c++;
                }
            }
            if(i < a-1){
                if(n[k][i+1] == 'A'){
                    c++;
                }
            }
            if(k < b-1){
                if(n[k+1][i] == 'A'){
                    c++;
                }
            }
            if(k > 0){
                if(n[k-1][i] == 'A'){
                    c++;
                }
            }
        }
    }
    return c;
}

int main(){
    int a, b, c;
    std::cin >> a >> b;
    c = 0;
    std::string n[b];
    for(int i = 0; i < b; i++){
        std::cin >> n[i];
    }
    for(int i = 0; i < b; i++){
        c = f(n, b, a, c, i);
    }
    std::cout << c;
}