#include <iostream>
/* Наименьшее положительное целое число не являющееся частью массива */
using namespace std;

int main(){
    int n;
    cin>>n;
    int b[n];
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    int t;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1-i;j++){
            if (b[j]>b[j+1]){
                t=b[j+1];
                b[j+1]=b[j];
                b[j]=t;
            }
        }
    }
    if (b[0]!=1){
        cout<<1;
        return 0;
    }
    for (int i=1;i<n;i++){
        if (b[i]>b[i-1] && b[i]-b[i-1]>1){
            cout<<b[i-1]+1;
            return 0;
        }
    }
    cout<<n+1;

    return 0;
}
