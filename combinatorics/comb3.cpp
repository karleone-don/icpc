#include <iostream>

int main(){
    //freopen("comb.in", "r", stdin);
    //freopen("comb.out", "w", stdout);
    int a, b, c, d, e = 1;
    std::cin >> a >> b >> c;
    int n[b];
    for(int i = 0; i < b; i++){
        n[i] = i + 1;
    }
    for(int i = b; i < a; i++){
        e *= i + 1;
        e /= i + 1 - b;
    }
    std::cout << e << " ";
    /*while(c > 0){
        if(a - n[b-1] > 0){
            if(c > a - n[b-1]){
                c -= a - n[b-1];
                n[b-1] = a;
            }
            else{
                n[b-1] += c;
                c = 0;
            }
        }
        else{
            d = -1;
            for(int j = b-1; j > 0; j--){
                if(n[j] == a + j + 1 - b){
                    d = j - 1;
                }
            }
            n[d]++;
            for(int j = d+1; j < b; j++){
                n[j] = n[j-1] + 1;
            }
            c--;
        }
    }*/
    for(int i = 0; i < b; i++){
        std::cout << n[i] << " ";
    } 
}