#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

const unsigned mod = 1000000007;

int ans = 0,m;
vector<int>graph[11];
int visited[11]={0};

void dfs(int source, int dest, int jarak){
    visited[source]=1;
    if(source==dest){
        if(jarak==m){ ans++; }
    }
    for(int i=0;i<graph[source].size();i++){
        if(!visited[graph[source][i]]){
            visited[graph[source][i]]=1;
            dfs(graph[source][i],dest,jarak+1);
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,i,j,x;
    cin >> i >> j >> m;
    for(int k=0;k<10;k++){
        for(int l=0;l<10;l++){
            cin >> x;
            if(x==1){
                graph[k].push_back(l);
            }
        }
    }
    dfs(i,j,0);
    cout << ans << "\n";
    return 0;
}
