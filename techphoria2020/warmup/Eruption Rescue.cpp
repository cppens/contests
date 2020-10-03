#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

const unsigned mod = 100000037;

vector<long long>path;

void dfs(int source, long long dist, vector<pair<int,long long>>graph[]) {
    int i, sz = graph[source].size();
    long long mn = LLONG_MAX;
    for(i = 0;i<sz;i++) {
        mn = min(mn,graph[source][i].second);
    }
    for(i=0;i<sz;i++) {
        if(graph[source][i].second==mn)
            dfs(graph[source][i].first,dist + graph[source][i].second, graph);
        else
            dfs(graph[source][i].first,dist + mn + (graph[source][i].second - mn) * 2LL, graph);
    }
    if(sz==0) {
        path.push_back(dist);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,n,p,c,j,q;
    long long time;
    cin >> t;
    while(t--) {
        cin >> n;
        vector <pair<int,long long>> graph[n+1];
        for(j=2;j<=n;j++) {
            cin >> p >> c;
            graph[p].push_back(make_pair(j,c));
        }
        dfs(1,0, graph);
        sort(path.begin(),path.end());
        /*for(int i=0;i<path.size();i++) {
            cout << path[i] << "TES\n";
        }*/
        cin >> q;
        while(q--) {
            cin >> time;
            if(time<path[0]) { cout << "0\n"; }
            else{
                vector<long long>::iterator it;
                it = upper_bound(path.begin(),path.end(), time);
                cout << (it - path.begin()) << "\n";
            }
        }
        path.clear();
    }
    return 0;
}
