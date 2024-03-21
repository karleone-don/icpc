#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int swamp(int a, std::string s){
    std::vector<int> d(a, -1);
    d[0] = 0;
    for(int i = 1; i < a; i++){
        if(s[i] == 'w'){
            continue;
        }
        if(i < 3){
            d[i] = d[i-1];
        }
        else if(i < 5){
            d[i] = std::max(d[i-1], d[i-3]);
        }
        else{
            d[i] = std::max(std::max(d[i-1], d[i-3]), d[i-5]);
        }
        if(s[i] == '"'){
            d[i]++;
        }
    }
    return d[a-1];
}

int main(){
    //freopen("lepus.in", "r", stdin);
    //freopen("lepus.out", "w", stdout);
    int a;
    std::string s;
    std::cin >> a >> s;
    std::cout << swamp(a, s);
}