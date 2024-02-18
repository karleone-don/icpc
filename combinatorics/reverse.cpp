#include <iostream>

int main() {
    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);
    int a;
    std::cin >> a;
    int n[a], m[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    for(int i = 0; i < a; i++){
        m[n[i] - 1] = i + 1;
    }
    for(int i = 0; i < a; i++){
        std::cout << m[i] << " ";
    }
}