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

void solution(int fib[]) {
    int n;
    cin >> n;
    cout << fib[n] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int fib[100001];
    fib[1] = 1;
    fib[2] = 1;
    for(int i = 3; i <= 100000; i++) {
        fib[i] = (fib[i-1] + fib[i-2])%mod;
    }

    while(t--) {
        solution(fib);
    }
}
