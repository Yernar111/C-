#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int b=a[0];
    int m;
    for (int i=1;i<n;i++){
        if (a[i]>b){
            m=b;
            b=a[i];
        }
        else if(a[i]<b && a[i]>m){
            m=a[i];
        }
    }
    cout<<m;


    return 0;
}
