#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int n, h1, m1, h2, m2, b = 1, c = 0;
    scanf("%d", &n);
    vector<pair<int , int>> v;
    for(int i = 0; i < n; i++){
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
        v.push_back(make_pair(h2 * 60 + m2, h1 * 60 + m1));
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++){
        if(v[c].first <= v[i].second){
            b++;
            c = i;
        }
    }
    printf("%d", b);
}





















/*#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <sstream>

using namespace std;

using ll = long long;

pair<int, int> new_pairs(string k){
    int k_h = std::stoi(k.substr(0, k.find(":")));
    int k_m = std::stoi(k.substr(k.find(":") + 1));
    pair<int, int> t_pair(k_h, k_m);
    return t_pair;
}

bool sortBySecond(const pair<pair<int, int>, pair<int, int>>& a, const pair<pair<int, int>, pair<int, int>>& b){
    if(a.second.first != b.second.first){
        return a.second.first < b.second.first;
    }
    return a.second.second < b.second.second;
}

int main(){
    ll a, b = 1, c = 0;
    std::cin >> a;
    vector<pair<pair<int, int>, pair<int, int>>> n(a);
    string s, l;
    for(int i = 0; i < a; i++){
        cin >> s >> l;
        n[i].first = new_pairs(s);
        n[i].second = new_pairs(l);
    }
    sort(n.begin(), n.end(), sortBySecond);
    for(ll i = 1; i < a; i++){
        if(n[c].second.first < n[i].first.first){
            b++;
            c = i;
        }
        else if(n[c].second.first == n[i].first.first){
            if(n[c].second.second <= n[i].first.second){
                b++;
                c = i;
            }
        }
    }
    cout << b;
}*/

/*#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool sortBySecond(const std::pair<string, string>& a, const std::pair<string, string>& b) {
    int a_hours = std::stoi(a.second.substr(0, a.second.find(":")));
    int a_minutes = std::stoi(a.second.substr(a.second.find(":") + 1));
    int b_hours = std::stoi(b.second.substr(0, b.second.find(":")));
    int b_minutes = std::stoi(b.second.substr(b.second.find(":") + 1));

    if (a_hours != b_hours) {
        return a_hours < b_hours;
    }
    
    return a_minutes < b_minutes;
}

int main(){
    int a, b = 1, c = 0;
    cin >> a;
    vector<pair<string, string>> n(a);
    for(int i = 0; i < a; i++){
        cin >> n[i].first >> n[i].second;
    }
    sort(n.begin(), n.end(), sortBySecond);
    for(int i = 1; i < a; i++){
        int s_hours = std::stoi(n[c].second.substr(0, n[c].second.find(":")));
        int s_minutes = std::stoi(n[c].second.substr(n[c].second.find(":") + 1));
        int l_hours = std::stoi(n[i].first.substr(0, n[i].first.find(":")));
        int l_minutes = std::stoi(n[i].first.substr(n[i].first.find(":") + 1));

        if (s_hours < l_hours) {
            b++;
            c = i;
        }
        else if (s_hours == l_hours) {
            if (s_minutes <= l_minutes) {
                b++;
                c = i;
            }
        }
    }
    cout << b;
}*/