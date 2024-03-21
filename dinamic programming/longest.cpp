#include <iostream>
#include <vector>

int main(){
    int a, b, c = 0;
    std::cin >> a;
    std::vector<int> n(a);
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    std::cin >> b;
    std::vector<int> m(b), k(b);
    for(int i = 0; i < b; i++){
        std::cin >> m[i];
        k[i] = m[i];
    }
    std::vector<int> s;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(n[i] == m[j]){
                s.push_back(n[i]);
                n.erase(n.begin() + i);
                i--;
                m.erase(m.begin() + j);
                j--;
            }
        }
    }
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < b; j++){
            
        }
    }
    std::cout << c;
}