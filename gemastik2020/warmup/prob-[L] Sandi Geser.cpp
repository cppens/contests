#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

const unsigned mod = 1000000007;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    int k,i;
    getline(cin,str);
    cin >> k;
    k%=26;
    for(i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
           str[i]=toupper(str[i]);
           str[i]+=k;
           if(str[i]<'A'){ str[i]+=26;}
           else if(str[i]>'Z'){ str[i]-=26; }
           str[i]=tolower(str[i]);
        }
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=k;
            if(str[i]<'A'){ str[i]+=26; }
            else if(str[i]>'Z'){ str[i]-=26; }
        }
    }
    cout << str << "\n";
    return 0;
}
