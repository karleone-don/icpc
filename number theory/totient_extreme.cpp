#include <stdio.h>
#define MAX 10001

long long fi[MAX], ps[MAX], res;
int tests, n;

void FillEuler(void){
    int i, j;
    fi[0] = fi[1] = 0;
    for(i = 2; i < MAX; i++)
        if(!fi[i])
            for(j = i; j < MAX; j += i){
                if(!fi[j]) fi[j] = j;
                fi[j] -= fi[j]/i;
            }

    ps[0] = 0; ps[1] = 1;
    for(i = 2; i < MAX; i++)
        ps[i] = ps[i-1] + fi[i];
}

int main(void){

    FillEuler();

    scanf("%d",&tests);

    while(tests--){
        scanf("%d",&n);
        res = ps[n] * ps[n];
        printf("%lld\n",res);
    }
    return 0;
}