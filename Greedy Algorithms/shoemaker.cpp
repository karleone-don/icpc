#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int lt(pair<double, int> a, pair<double, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    int a, b, c;
    double d;
    while(scanf("%d", &a) == 1){
        vector<pair<double, int>> n;
        for(int i = 0; i < a; i++){
            scanf("%d %d", &b, &c);
            d = (double) b / c;
            n.push_back({d, i+1});
        }
        sort(n.begin(), n.end(), lt);
        for(int i = 0; i < a; i++){
            printf("%d ", n[i].second);
        }
        printf("\n");
    }
}