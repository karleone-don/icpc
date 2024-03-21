#include <iostream>

int path(int a, int b){
    int n[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            n[i][j] = 0;
        }
    }
    n[0][0] = 1;
    n[2][1] = 1;
    n[1][2] = 1;
    for(int i = 2; i < a; i++){
        for(int j = 2; j < b; j++){
            n[i][j] = n[i-1][j-2] + n[i-2][j-1];
        }
    }
    return n[a-1][b-1];
}

int main(){
    freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);
    int a, b;
    std::cin >> a >> b;
    std::cout << path(a, b);
}