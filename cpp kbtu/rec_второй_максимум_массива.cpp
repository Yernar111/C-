#include <iostream>

using namespace std;

int check(int a[],int n,int i,int m,int s){
    if (i==n)
        return s;
    if (a[i]>m)
        return check(a,n,i+1,a[i],m);
    if (a[i]>s && a[i]<m)
        return check(a,n,i+1,m,a[i]);
    return check(a,n,i+1,m,s);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<check(a,n,1,a[0],0);

    return 0;
}
