#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <math.h>
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

const unsigned mod = 1000000007;

long long solution() {
    int n;
    long long ans = 0;
    cin >> n;
    long long wood[n];
    for(int i = 0; i < n; i++) {
        cin >> wood[i];
    }
    if(n < 3) return ans;

    sort(wood, wood + n);
    for(int i = n-1; i >= 1; i--) {
        int l = 0, r = i - 1;
        while(l < r) {
            if(wood[l] + wood[r] > wood[i]) {
                ans += r - l;
                r--;
            } else l++;
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << solution() << '\n';
}
