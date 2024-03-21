#include <iostream>

int main(){
    //freopen("balls.in", "r", stdin);
    //freopen("balls.out", "w", stdout);
    int c = 1, b, a, best;
    int m[121]; //m[120] = 302.621 > 300.000
    m[0] = 1;
    for(int i = 1; i < 121; i++){
        c += i + 1;
        m[i] = m[i-1] + c;
    }
    int d[300001];
    d[0] = 0;
    for(int i = 1; i < 300001; i++){
        best = d[i-1] + 1;
        c = 0;
        while(i - m[c] >= 0){
            if(i - m[c] == 0){
                best = 1;
                break;                
            }
            else if(d[i-m[c]] < best){
                best = d[i - m[c]] + 1;
            }
            c++;
        }
        d[i] = best;
    }
    std::cin >> a;
    for(int i = 0; i < a; i++){
        std::cin >> b;
        std::cout << d[b] << std::endl;
    }
}