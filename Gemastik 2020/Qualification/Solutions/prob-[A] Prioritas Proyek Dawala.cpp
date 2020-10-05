#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

const unsigned mod = 100000037;

//driver function untuk sortir descending (detailnya bisa cari di internet wkwk)
//sortir elemen secara descending dimana yang dibandingkan adalah elemen pertama/jarak
bool sortinrev(const pair<long int,string> &a,
               const pair<long int,string> &b)
{
       return (a.first > b.first);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int i,x1,y1,x2,y2,r1,r2,p;
    string desa1, desa2;
    cin >> p;

    //menyimpan nilai jarak dan nama desa untuk ditampilkan pada keluaran
    vector <pair <long int,string> > ans;

    //tiap pasangan data desa
    for(i=0;i<p;i++){
        cin >> desa1 >> x1 >> y1 >> r1 >>  desa2 >> x2 >> y2 >> r2;

        //gabung kedua nama desa
        string desa = desa1 + " " + desa2;

        //cari jarak axis-x dan axis-y di koordinat kedua desa (lihat rumus jarak antara dua koordinat)
        double jarakX = pow(abs(x2-x1),2);
        double jarakY = pow(abs(y2-y1),2);

        //cari jarak kedua desa (lihat rumus jarak antara dua koordinat)
        long int jarak = floor(sqrt(jarakX + jarakY));

        //simpan jarak dan nama gabungan desa ke vector ans
        ans.push_back(make_pair(jarak,desa));
    }

    //sortir vector ans secara descending berdasarkan jarak tertinggi (lihat fungsi sortinrev())
    sort(ans.begin(), ans.end(), sortinrev);

    //tampilkan hasil tiap pasangan data desa
    for(i=0;i<p;i++){
        cout << ans[i].second << " " << ans[i].first << "\n";
    }

    return 0;
}
