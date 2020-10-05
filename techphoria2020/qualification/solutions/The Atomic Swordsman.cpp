#include <bits/stdc++.h>

using namespace std;

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
