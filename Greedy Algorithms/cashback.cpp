#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c;
    cin >> a;
    for(int i = 0; i < a; i++){
        int d = 0, e;
        cin >> b >> c;
        vector<pair<int, int>> n(b);
        for(int i = 0; i < b; i++){
            cin >> n[i].second;
        }
        for(int i = 0; i < b; i++){
            cin >> n[i].first;
            n[i].first = n[i].second - n[i].first;
        }
        sort(n.begin(), n.end());
        for(int i = 0; i < b; i++){
            while(c >= n[i].second){
                e = c / n[i].second;
                c -= e * n[i].first;
                d += e;
            }
        }
        cout << d << endl;
    }
}