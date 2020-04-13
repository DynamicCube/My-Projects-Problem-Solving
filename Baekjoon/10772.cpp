#include <bits/stdc++.h>
#define MEM 305
#define sanic ios_base::sync_with_stdio(0)
using namespace std;
int n,k;
int dp[MEM][MEM][MEM];
int DP(int x, int y, int z) {
    int& ret=dp[x][y][z];
    if(ret) return ret;
    if(x==1 || x==y)
        return ret=1;
    for(int i=z; i*x<=y; i++)
        ret += DP(x-1,y-i,i);
    return ret;
}
main()
{
    sanic;
    cin >> n >> k;
    cout << DP(k,n,1);
}
