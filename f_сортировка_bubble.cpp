#include <iostream>
using namespace std;

int check(int a[], int n){
    int t;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    check(a,n);


	return 0;
}
