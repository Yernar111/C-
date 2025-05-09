#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    char a[9][9];
    for (int i=1;i<=8;i++){
        for (int j=1;j<=8;j++){
            a[i][j]='.';
        }
    }
    cin>>x>>y;
    a[x][y]='#';
    for (int i=1;i<=8;i++){
        for (int j=1;j<=8;j++){
            if ((abs(i-y)==1 && abs(x-j)+1==3) || (abs(i-y)+1==3 && abs(x-j)==1)){
                a[i][j]='*';
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
