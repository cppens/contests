#include <bits/stdc++.h>

using namespace std;
// Test Case :
/*
    1 1     menang          2 1     menang          3 1     menang          4 1     menang
    1 2     kalah           2 2     menang          3 2     menang          4 2     menang
    1 3     kalah           2 3     kalah           3 3     menang          4 3     menang
                            2 4     kalah           3 4     menang          4 4     menang
                                                    3 5     kalah           4 5     menang
                                                    3 6     kalah           4 6     menang
                                                                            4 7     menang
                                                                            4 8     menang
                                                                            4 9     kalah
                                                                            4 10    kalah
                                                                            
   Batas menang sesuai tebasan : 1 , 2 , 4 , 8 , ...
*/
int main()
{
    double N,M;
    cin >> N >> M;
    double x = ceil(log2(M)) + 1;
    if(N>=x)
        cout << "menang" << endl;
    else
        cout << "kalah" << endl;
    return 0;
}
