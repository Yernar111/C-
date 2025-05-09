#include <iostream>
using namespace std;

int main(){
    int n,k,m=0;
    cin>>n;
    while(n!=0){
        k=n%2;
        if (k==1){
            m++;
        }
        n=n/2;
    }
    cout<<m;


    return 0;
}
