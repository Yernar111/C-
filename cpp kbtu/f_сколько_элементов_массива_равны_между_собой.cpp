#include <iostream>
using namespace std;

int equality (int n){
    int a[n], b[100]={0};
    int k=0,m=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]>=k)
            k=a[i];
        b[a[i]]++;
    }
    for (int i=0;i<=k;i++){
        if (b[i]>1)
            m+=b[i];
    }
    return m;
}

int main(){
    int n;
    cin>>n;
    cout<<equality(n);

    return 0;
}

