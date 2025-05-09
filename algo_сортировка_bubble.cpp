#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
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

	return 0;
}

