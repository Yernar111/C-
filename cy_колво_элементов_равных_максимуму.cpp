#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1,m=1,k=1;
    while (n!=0){
        cin>>n;
        if (n==m){
            k++;
        }
        else if (n>m){
            k=1;
            m=n;
        }
    }
    cout<<k;


    return 0;
}
