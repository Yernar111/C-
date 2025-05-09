#include <bits/stdc++.h>
using namespace std;
/* Сначала вывести a[i] or a[i]+1, a[i] and a[i]+2, a[i] xor a[i]+3 */
void check1(int a[],int i,int n){
    if (i==n)
        return;
    int k=a[i] | a[i]+1;
    cout<<k<<" ";
    return check1(a,i+1,n);
}

void check2(int a[],int i,int n){
    if (i==n)
        return;
    int k=a[i] & a[i]+2;
    cout<<k<<" ";
    return check2(a,i+1,n);
}

void check3(int a[],int i,int n){
    if (i==n)
        return;
    int k=a[i] ^ a[i]+3;
    cout<<k<<" ";
    return check3(a,i+1,n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    check1(a,0,n);
    cout<<endl;
    check2(a,0,n);
    cout<<endl;
    check3(a,0,n);
    return 0;

}
