#include <bits/stdc++.h>
using namespace std;

#ifdef _DEBUG
#define dbg(...) cerr<<"[ "<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<" ]"<<endl
#else
#define dbg(...) 0
#endif
#define endl '\n'

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9+7;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5+5;

//void Solution()

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, maxs1 = 0, maxs2 = 0, t;
    cin >> n;
    string s, a;
    for(int i = 0; i < n; i++) {
        cin >> s >> m;
        t = s.length();
        maxs1 = max(maxs1, t);
        for(int j = 0; j < m; j++) {
            cin >> a;
            t = a.length();
            maxs2 = max(maxs2, t);
        }
    }   
    cout << maxs1 << " " << maxs2 << endl;
    //Solution();
    return 0;
}
