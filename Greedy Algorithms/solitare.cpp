#include <iostream>
#include <vector>

int main(){
    int a, b = 1;
    std::cin >> a;
    int n[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    std::vector<std::vector<int>> m;
    std::vector<int> k;
    k.push_back(n[0]);
    m.push_back(k);
    for(int i = 1; i < a; i++){
        bool t = true;
        for(int j = 0; j < m.size(); j++){
            if(n[i] > m[j][m[j].size()-1]){
                m[j].push_back(n[i]);
                t = false;
                break;
            }
        }
        if(t){
            k.pop_back();
            k.push_back(n[i]);
            m.push_back(k);
        }
    }
    std::cout << m.size();
}