#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    int a, b, c, d;
    std::string s;
    std::cin >> a;
    for(int i = 0; i < a; i++){
        std::cin >> s >> b;
        c = s.size();
        std::vector<char> m(c);
        for(int j = 0; j < c; j++){
            m[j] = s[j];
        }
        std::sort(m.begin(), m.end());
        int n[c];
        n[0] = 1;
        for(int j = 1; j < c; j++){
            n[j] = n[j-1] * (j + 1);
        }
        for(int j = 0; j < c-1; j++){
            d = b / n[c-j-2];
            std::cout << m[d];
            m.erase(m.begin() + d);
            b -= d * n[c-j-2];
        }
        std::cout << m[0] << std::endl;
    }
}

/*
    int a = 5, b;
    std::cin >> b;
    int n[a];
    n[0] = 1;
    for(int i = 1; i < a; i++){
        n[i] = n[i-1] * (i + 1);
    }
    std::cout << b / n[a-2];
*/