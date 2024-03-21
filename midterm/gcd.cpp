#include <iostream>

int main(){
    int a, b;
    std::cin >> a;
    int n[a];
    for(int i = 0; i < a; i++){
        std::cin >> n[i];
    }
    std::cin >> b;
    for(int i = 0; i < b; i++){
        int c, d, e;
        bool t = false;
        std::cin >> c >> d >> e;
        if(c == 2){
            n[d] = e;
        }
        if(c == 1){
            if(d == e){
                t = true;
            }
            for(int j = d-1; j < e; j++){
                for(int k = d-1; k < j; k++){
                    if(n[k] == n[j]){
                        t = true;
                        k = j;
                        j = k;
                    }
                }
            }
            if(t){
                std::cout << "draw" << std::endl;
            }
            else{
                std::cout << "wins" << std::endl;
            }
        }
    }
}