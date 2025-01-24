#include <iostream>
#include <algorithm>
/* Наибольший общий делитель среди элементов массива */
using namespace std;

int main(){
    int n,k=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    int m=0;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            int k=__gcd(a[i],a[j]);
            m=max(m,k);
        }
    }
    cout<<m;



	return 0;
}
