#include <iostream>
#include <algorithm>

int king(int (&n)[8][8]){
    int d[8][8];
    d[7][0] = 0;
    for(int i = 6; i >= 0; i--){
        d[i][0] = d[i+1][0] + n[i][0];
    }
    for(int j = 1; j < 8; j++){
        d[7][j] = d[7][j-1] + n[7][j];
    }
    for(int i = 6; i >= 0; i--){
        for(int j = 1; j < 8; j++){
            d[i][j] = std::min(d[i+1][j-1], std::min(d[i+1][j], d[i][j-1])) + n[i][j];
        }
    }
    return d[0][7];
}

int main(){
    freopen("king2.in", "r", stdin);
    freopen("king2.out", " w", stdout);
    int n[8][8];
    for(int i = 0; i < 8; i++){
        for(int j =0; j < 8; j++){
            std::cin >> n[i][j];
        }
    }
    std::cout << king(n);
}