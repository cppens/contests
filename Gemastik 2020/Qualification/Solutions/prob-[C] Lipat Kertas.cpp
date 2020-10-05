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

    //batasan input 1<=p,q,m,n<=10000 (lihat format masukan)
    int p,q,m,n;
    cin >> n;

    //tiap testcase n
    while(n--) {
        cin >> p >> q >> m;

        //melipat kertas sebanyak m kali
        while(m--) {

            //melipat kertas menjadi setengah dari panjang sisinya
            //dilipat yang paling panjang sisinya
            if(p > q) {
                p /= 2;
            }
            else {
                q /= 2;
            }
        }

        //tampilkan yang paling panjang sisinya dahulu (lihat format keluaran)
        if(p > q) {
            cout << p << " " << q << "\n";
        }
        else {
            cout << q << " " << p << "\n";
        }
    }
    return 0;
}
