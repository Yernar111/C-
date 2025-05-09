#include <bits/stdc++.h>
using namespace std;
/* За раз мы можем унести не более двух бочек и не более К литров, за какое минимальное число раз можно унести все N бочек */
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int t=0,i=0,j=n-1;
    while(i<=j){
        if (a[i]+a[j]<=k)
            i++;
        j--;
        t++;
    }
    cout<<t;


    return 0;
}
