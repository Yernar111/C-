#include <iostream>
/* ≈сть массив длиной n и число к, к какому элементу массива нужно прибавить число к чтобы сумма котора€ идет по следующей формуле была максимальной: a[0]*a[1]+a[0]*a[2]+...+a[0]*a[n-1]+a[1]*a[2]+...+a[1]*a[n-1]+...a[n-2]*a[n-1] */
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n,k,m=0;
    cin>>n>>k;
    int a[n];
    cin>>a[0];
    int q=a[0],v=1;
    for (int i=1;i<n;i++){
        cin>>a[i];
        if (a[i]>=q){
            q=a[i];
            v=i+1;
        }
    }

    if (n/v>=2){
        for (int i=0;i<v;i++){
            if (a[i]==q){
                a[i]=a[i]+k;
                break;
            }
        }
    }
    else{
        a[0]=a[0]+k;
    }

    for (int i=0;i<n;i++){
        int u=0;
        for (int j=i+1;j<n;j++){
            u=u+a[j];
        }
        m=a[i]*u+m;
    }
    cout<<m;

    return 0;

}
