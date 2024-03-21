#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;
    int n[a][b], m[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            std::cin >> n[i][j];
        }
    }
    m[0][0] = n[0][0];
    for(int i = 1; i < a; i++){
        m[i][0] = m[i-1][0] + n[i][0];
    }
    for(int j = 0; j < b; j++){
        m[0][j] = m[0][j-1] + n[0][j];
    }
    for(int i = 1; i < a; i++){
        for(int j = 1; j < b; j++){
            m[i][j] = m[i-1][j] + m[i][j-1] - m[i-1][j-1] + n[i][j];
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}