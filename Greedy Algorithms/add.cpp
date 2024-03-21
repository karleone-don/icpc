#include <iostream>
#include <queue>
#include <vector>

int main(){
    std::priority_queue<long long, std::vector<long long>, std::greater<long long>> m;
    int a, b = 0, c, d;
    std::cin >> a;
    for(long long i = 0; i < a; i++){
        std::cin >> c;
        m.push(c);
    }
    while(m.size() > 1){
        c = m.top();
        m.pop();
        d = m.top();
        m.pop();
        m.push(c+d);
        b += c + d;
    }
    std::cout << b;
}