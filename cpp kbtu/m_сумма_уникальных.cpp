#include <bits/stdc++.h>
using namespace std;
/* Сумма элементов массива которые встречаются лишь 1 раз */
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[1000]={0};
    int m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]>m)
            m=a[i];
        b[a[i]]++;
    }
    int k=0;
    for (int i=0;i<=m;i++){
        if (b[i]==1)
            k+=i;
    }
    cout<<k;


    return 0;
}
