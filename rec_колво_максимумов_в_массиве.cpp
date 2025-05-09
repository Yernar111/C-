#include <bits/stdc++.h>
using namespace std;

int check(int a[],int k, int m, int i, int n){
    if (i==n)
        return k;
    if (a[i]==m)
        return check(a,k+1,m,i+1,n);
    if (a[i]>m)
        return check(a,1,a[i],i+1,n);
    return check(a,k,m,i+1,n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int v=sizeof(a)/sizeof(a[0]);
    cout<<check(a,1,a[0],0,v);
    /*
    g++ ./ernar1.cpp
    ./a.exe

    g++ -std=c++11 ernar1.cpp -o a.exe
    */

    return 0;

}
