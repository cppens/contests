#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <math.h>
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

const unsigned mod = 100000037;

int main()
{
    int n, ans = 0;
    string ukuran;
    map<string, int> tahunLalu, tahunSekarang;
    vector<string> thLalu, thSek;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ukuran;
        thLalu.push_back(ukuran);
        tahunLalu[ukuran]++;
    }
    for(int i = 0; i < n; i++) {
        cin >> ukuran;
        thSek.push_back(ukuran);
        tahunSekarang[ukuran]++;
    }
    map<string, int>::iterator itr1, itr2;
    for(int i = 0; i < n; i++) {
        if(tahunLalu[thSek[i]]  <= 0) {
            ans++;
        }
        else if(tahunLalu[thSek[i]] > 0) {
            tahunLalu[thSek[i]]--;
            if(tahunLalu[thSek[i]] < 0) {
                ans += abs(tahunLalu[thSek[i]]);
            }
        }
    }
    /*for(itr1 = tahunSekarang.begin(), itr2= tahunLalu.begin(); itr1 != tahunSekarang.end(); itr1++, itr2++) {
        if(tahunLalu[itr1->first] <= 0) {
            ans++;
        }
        else if(tahunLalu[itr1->first] > 0) {
            tahunLalu[itr1->first] -= tahunSekarang[itr1->first];
            if(tahunLalu[itr1->first] < 0) {
                ans += abs(tahunLalu[itr1->first]);
            }
        }
    }*/
    cout << ans << "\n";
}
