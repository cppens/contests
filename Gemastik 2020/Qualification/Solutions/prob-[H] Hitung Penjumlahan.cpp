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

    int n,m,q,i,j,x1,x2,y1,y2,a;
    cin >> n >> m >> q;

    //dp untuk menjumlah jarak kolom pertama ke kolom terakhir dalam tiap baris matrix
    //dibuat kolom m+1 karena kolom pertama dibutuhkan untuk inisialisasi 0 (awal penjumlahan)
    int dp[n][m+1];

    //menginisialisasi nilai 0 ke dalam kolom pertama tiap baris matrix
    for(i = 0; i<n; i++) {
        dp[i][0] = 0;
    }

    //input matrix dan penjumlahan kolom tiap baris
    for(i = 0; i<n ; i++) {
        for(j=0 ; j<m; j++) {
            cin >> a;

            //menjumlah dp pada baris i kolom j (awalnya nilai 0 dari inisialisasi kolom pertama) dengan matrix a pada baris i kolom j
            //hasil penyimpanan ditaruh ke kolom j+1 dari dp karena untuk penjumlahan selanjutnya hasil penjumlahan dp kolom j+1 ditambah matrix a kolom j+1
            dp[i][j+1] = dp[i][j] + a;
        }
    }

    //tiap query q
    while(q--) {

        // inisialisasi hasil penjumlahan tiap submatrix = 0
        long long ans=0;

        cin >> x1 >> y1 >> x2 >> y2;

        //tiap koordinat didecrement karena kita menggunakan index-0
        x1--;y1--;x2--;y2--;

        //iterasi tiap baris submatrix
        for(i = x1; i <= x2; i++) {

            //bayangkan kolom adalah axis-x pada bidang kartesius
            //untuk mencari jarak maka dilakukan pengurangan titix paling kanan dikurangi titik paling kiri
            //karena dp tadi merupakan penjumlahan kolom pertama sd terakhir maka kolom pertama sd terakhir dapat dianggap sebagai "jarak"
            ans+= dp[i][y2+1] - dp[i][y1];
        }

        //tampilkan hasil
        cout << ans << "\n";
    }
    return 0;
}
