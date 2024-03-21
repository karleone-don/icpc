#include <iostream>
#include <vector>
#include <algorithm>

int pic(const std::vector<std::vector<int>>& n, int a){
    int b;
    int d[a][a];
    d[0][0] = n[0][0];
    for(int i = 1; i < a; i++){
        d[i][0] = d[i-1][0] + n[i][0];
        d[i][i] = d[i-1][i-1] + n[i][i];
    }
    for(int i = 2; i < a; i++){
        for(int j = 1; j < i; j++){
            d[i][j] = std::max(d[i-1][j], d[i-1][j-1]) + n[i][j];
        }
    }
    b = d[a-1][0];
    for(int j = 1; j < a; j++){
        if(d[a-1][j] > b){
            b = d[a-1][j];
        }
    }
    return b;
}

int main(){
    //freopen("slalom.in", "r", stdin);
    //freopen("slalom.out", "r", stdout);
    int a, b;
    std::cin >> a;
    std::vector<std::vector<int>> n;
    for(int i = 0; i < a; i++){
        std::vector<int> m;
        for(int j = 0; j < i + 1; j++){
            std::cin >> b;
            m.push_back(b);
        }
        n.push_back(m);
    }
    std::cout << pic(n, a);
}