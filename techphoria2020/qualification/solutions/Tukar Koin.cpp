#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

const unsigned mod = 100000037;

long long mem[30000][5];
long long dp(int p, int index, int arr[]) {
    if(p==0) {
        return 1;
    }
    if(p < 0) {
        return 0;
    }
    if(index < 0 && p >= 1) {
        return 0;
    }
    if(mem[p][index]!=-1) {
        return mem[p][index];
    }
    return mem[p][index] = dp(p,index-1,arr) + dp(p-arr[index],index,arr);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int p, arr[]={50,25,10,5,1};
    memset(mem,-1,sizeof(mem));
    while(cin >> p) {
        long long ans = dp(p, 4, arr);
        cout << ans << "\n";
    }
    return 0;
}
