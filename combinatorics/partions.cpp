#include <iostream>
#include <vector>

int main(){
    int a, b = 1, c, d;
    std::cin >> a;
    std::vector<int> n(a, 1);
    while(n[0] < a and n.size() > 0){
        for(int i = 0; i < n.size(); i++){
            printf("%d ", n[i]);
        }
        std::cout << std::endl;
        d = n[n.size()-1] - 1;
        n.pop_back();
        n[n.size() - 1]++;
        for(int i = 0; i < d; i++){
            n.push_back(1);
        }
        for(int i = n.size() - 1; i > 0; i--){
            if(n[i] > n[i-1]){
                c = n[i];
                n[i-1]++;
                n[i] = 1;
                for(int j = 0; j < c-2; j++){
                    n.push_back(1);
                }
            }
        }
    }
    std::cout << a;
}