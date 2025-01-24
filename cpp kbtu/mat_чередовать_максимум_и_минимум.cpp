#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n*m];
    for (int i=0;i<n*m;i++){
        cin>>a[i];
    }
    sort(a,a+n*m);
    int k=1,q=0;
    int maximum=a[n*m-k];
    int minimum=a[q];
    for (int i=0;i<n*m;i++){
        if (i%2==0){
            cout<<maximum<<" ";
            k++;
            maximum=a[n*m-k];
        }
        else{
            cout<<minimum<<" ";
            q++;
            minimum=a[q];
        }
        if ((i+1)%m==0 && i!=n*m-1)
            cout<<endl;
    }

    return 0;
}
