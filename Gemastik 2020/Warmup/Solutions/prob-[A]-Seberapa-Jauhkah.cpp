#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main()
{
    long long x1,y1,x2,y2,hasil;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    hasil = abs(x1-x2) + abs(y1-y2);
    cout << hasil << endl;

    return 0;
}
