#include <iostream>
/* Список чисел в массиве равных натуральным числам от одного до k */
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    int a[n], b[k+1]={0};
    for (int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    for (int i=1;i<=k;i++){
        cout<<b[i]<<" ";
    }

    return 0;

}
