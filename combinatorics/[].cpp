#include <iostream>
#include <string>

int generate_brackets(int a, std::string s = "", int open_count = 0, int close_count = 0){
    if(s.size() == 2 * a){
        std::cout << s << std::endl;
    }
    if(open_count < a){
        generate_brackets(a, s + '(', open_count + 1, close_count);
    }
    if(close_count < open_count){
        generate_brackets(a, s + ')', open_count, close_count + 1);
    }
    return 0;
}

int main(){
    int a;
    std::cin >> a;
    generate_brackets(a);
}