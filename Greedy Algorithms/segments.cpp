#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int n, f, s, b = 1, c = 0;
    scanf("%d", &n);
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &f, &s);
        v.push_back(make_pair(s, f));
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