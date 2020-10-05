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

    int p;
    string logger;
    cin >> p;
    while(p--) {
        string ans = "";
        int curPos = 0;
        cin >> logger;
        int logsz = logger.length();
        for(int i=0;i<logsz;i++) {
            if(logger[i]=='<') {
                if(curPos > 0)
                    curPos--;
            }
            else if(logger[i]=='>') {
                int ansSz = ans.length();
                if(curPos < ansSz)
                    curPos++;
            }
            else if(logger[i]=='-') {
                if(curPos > 0){
                    ans.erase(ans.begin()+(curPos-1));
                    curPos--;
                }
            }
            else {
                ans.insert(curPos, 1, logger[i]);
                curPos++;
            }
            //cout << curPos << "TES\n";
        }
        cout << ans << "\n";
    }
    return 0;
}
