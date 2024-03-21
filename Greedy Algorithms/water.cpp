#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c = 0;
    bool possible = true;
    cin >> a >> b;
    int n[a];
    for(int i = 0; i < a; i++){
        cin >> n[i];
        if(n[i] > b){
            possible = false;
            break;
        }
    }
    if(!possible){
        cout << "Impossible";
    }
    else{
        int left = 0, right = a - 1;
        sort(n, n+a);
        while(right >= left){
            if(n[left] + n[right] <= b){
                c++;
                left++;
                right--;
            }
            else{
                c++;
                right--;
            }
        }
        cout << c;
    }
}