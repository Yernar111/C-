#include <iostream>
#include <algorithm>
using namespace std;
/* Найти число M в отсортированном массиве, если ее нет, то наиболее подходящее место для этого элемента */
int main(){
    long long n,m,k=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if (m<=a[0]){
        cout<<0;
        return 0;
    }
    else if(m>=a[n-1]){
        cout<<n-1;
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]==m){
            cout<<i;
            k++;
            break;
        }
        else if(m>a[i-1] && m<a[i+1]){
            k++;
            cout<<i;
            break;
        }
    }

    return 0;
}
