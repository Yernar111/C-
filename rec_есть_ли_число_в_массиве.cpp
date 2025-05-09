#include <iostream>
using namespace std;

string IsNum(int a[], int n, int k,int i){
    if (i==n)
        return "NO";
    if (a[i]==k)
        return "YES";

    return IsNum(a,n,k,i+1);
}

int main(){
    int n,target;
    cin>>n>>target;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<IsNum(a,n,target,0);

    return 0;
}

