#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

const unsigned mod = 100000037;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, b, d;
    cin >> t;
    while(t--) {
        int ans;
        cin >> b >> d;
        if(b<d) { cout << b << "\n";}
        else {
            ans = b%d + b/d;
            cout << ans << "\n";
        }
    }
    return 0;
}
