#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int a, b, c;
    uint64_t d, e;
    std::cin >> a;
    for(int i = 0; i < a; i++){
        std::cin >> b >> c;
        d = 1;
        for(int j = c; j < b; j++){
            d *= j + 1;
            d /= j - c + 1;
        }
        e = 2;
        std::vector<std::pair <uint32_t, int>> m;
        m.push_back(std::make_pair(0, 0));
        while(d > 0 and e <= sqrt(d)){
            if(d % e == 0){
                if(m[m.size()-1].first == e){
                    m[m.size()-1].second++;
                }
                else{
                    m.push_back(std::make_pair(e, 1));
                }
                d /= e;
            }
            else{
                e++;
            }
        }
        if(e > sqrt(d)){
            m.push_back(std::make_pair(d, 1));
        }
        std::cout << m[1].first;
        if(m[1].second > 1){
            std::cout << '^' << m[1].second;
        }
        for(int j = 2; j < m.size(); j++){
            std::cout << " * " << m[j].first;
            if(m[j].second > 1){
                std::cout << '^' << m[j].second;
            }
        }
        std::cout << std::endl;
    }
}