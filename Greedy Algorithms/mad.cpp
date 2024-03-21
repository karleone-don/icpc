#include <iostream>
#include <string>

int main(){
    int a, b = 0;
    bool t = true;
    std::string s, l;
    std::cin >> a >> s >> l;
    for(int i = 0; i < a; i++){
        if(t and s[i] != l[i]){
            t = false;
            b++;
        }
        else if(!t and s[i] == l[i]){
            t = true;
        }
    }
    std::cout << b;
}