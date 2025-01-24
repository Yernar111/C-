#include <iostream>
using namespace std;
int main(){
    int n,b,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        while(a[i]!=0){
            b=a[i]%10;
            if(b==0){
                m++;
            }
            a[i]=a[i]/10;
        }
    }
    cout<<m;

    return 0;
}
