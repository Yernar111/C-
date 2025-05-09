#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for (int j=0;j<m;j++){
        cin>>b[j];
    }
    int c[n+m],k=0,i=0,j=0;
    while(i<n && j<m){
        if (a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;

        }
    }

    while(i<n){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<m){
        c[k]=b[j];
        k++;
        j++;
    }
    for (int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }

    return 0;
}
