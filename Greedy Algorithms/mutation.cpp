#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int a, b = 1;
    cin >> a;
    int n[a];
    vector<pair<int, int>> m;
    vector<int> k;
    for(int i = 0; i < a; i++){
        cin >> n[i];
        auto it = find(k.begin(), k.end(), n[i]);
        if(it == k.end()){
            k.push_back(n[i]);
            m.push_back({i, i});
        }
        else{
            int c = distance(k.begin(), it);
            m[c].first = i;
        }
    }
    sort(m.begin(), m.end());
    int c = 0;
    for(int i = 1; i < m.size(); i++){
        if(m[c].first < m[i].second){
            b++;
            c = i;
        }
    }
    cout << m.size() - b;
}