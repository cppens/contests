#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

const unsigned mod = 1000000007;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int a,b,ans;
    cin >> a >> b;
    ans = (((a%mod+b%mod)*(b%mod-a%mod+1))/2)%mod;
    cout << ans << "\n";
    return 0;
}
