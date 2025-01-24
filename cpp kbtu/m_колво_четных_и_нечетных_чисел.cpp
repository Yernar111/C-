#include <iostream>
using namespace std;
int main(){
    int n,b=0,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            b++;
        }
        else{
            m++;
        }
    }
    cout<<b<<" "<<m;

    return 0;
}
