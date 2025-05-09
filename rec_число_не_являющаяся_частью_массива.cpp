#include <iostream>
#include <vector>
#include <algorithm>
/* Найти число не являющаяся частью массива из последовательных чисел от 0 до n */
using namespace std;

int find_num(int a[], int i, int n){
    if (i==n){
        return n;
    }
    if (a[i]-a[i-1]!=1){
        return a[i]-1;
    }
    return find_num(a,i+1,n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if (a[0]!=0){
        cout<<0;
        return 0;
    }
    cout<<find_num(a,1,n);


    return 0;
}
