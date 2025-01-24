#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m=1;
    cin>>n;
    for (int i=0;i<n;i++){
        int h=n-1-i;
        for (int j=0;j<h;j++){
            cout<<" ";
        }
        for (int k=0;k<m;k++){
            cout<<"*";
        }
        for (int j=0;j<h;j++){
            cout<<" ";
        }
        m+=2;
        cout<<endl;
    }


    return 0;
}
