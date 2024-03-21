#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll = long long;

int main(){
    ll a, b, c, d, g;
    double e, f = 0;
    cin >> a >> b;
    g = a - 1;
    vector<pair<double, pair<ll, ll>>> n;
    for(int i = 0; i < a; i++){
        cin >> c >> d;
        e = (double)c / d;
        n.push_back({e, {c, d}});
    }
    sort(n.begin(), n.end());
    while(b > 0 and g >= 0){
        if(n[g].second.second > b){
            f += n[g].first * b;
            b = 0;
        }
        else{
            f += n[g].second.first;
            b -= n[g].second.second;
        }
        g--;
    }
    cout << fixed << setprecision(3) << f;
}