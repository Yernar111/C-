#include <iostream>
using namespace std;

int goat(int a[], int n, int i,int k){
    if (i==n)
        return k;
    if (a[i]>k)
        return goat(a,n,i+1,a[i]);
    return goat(a,n,i+1,k);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=a[0];
    cout<<goat(a,n,1,k);


    return 0;
}

