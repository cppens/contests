#include <iostream>

using namespace std;

int main()
{
    string arah;
    int x,y,panjang;
    cin >> x >> y;
    cin >> arah;
    panjang = arah.length();
    while(panjang--){
        switch(arah[panjang]){
            case 'u' : y--;break;
            case 't' : x--;break;
            case 's' : y++;break;
            case 'b' : x++;break;
        }
    }
    cout << x << " " << y << "\n";
    return 0;
}
