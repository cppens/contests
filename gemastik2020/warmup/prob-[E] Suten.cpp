int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ekoWin=0, draw=0;
    string eko, ganesh;
    getline(cin, eko);
    getline(cin, ganesh);
    for(int i=0;i<eko.length();i++){
        if(eko[i]=='e'){
            if(ganesh[i]=='e'){ draw++; }
            else if(ganesh[i]=='h'){ ekoWin++; }
            else{ ekoWin--; }
        }
        if(eko[i]=='h'){
            if(ganesh[i]=='e'){ ekoWin--; }
            else if(ganesh[i]=='h'){ draw++; }
            else{ ekoWin++; }
        }
        if(eko[i]=='a'){
            if(ganesh[i]=='e'){ ekoWin++; }
            else if(ganesh[i]=='h'){ ekoWin--; }
            else{ draw++; }
        }
    }
    if(ekoWin==0){ cout << "Draw\n"; }
    else if(ekoWin>0){ cout << "Eko wins\n"; }
    else{ cout << "Ganesh wins\n"; }
    
    return 0;
}
