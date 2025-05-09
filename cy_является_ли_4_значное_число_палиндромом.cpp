#include <iostream>
using namespace std;

int main(){
    int n,m,k,t=1000,i=0;
    cin>>n;
    while (i<2){
        m=n%10;
        k=n/t;
        t=t/100;
        if (k==m){
            n=n/10%100;
            i++;
            continue;
        }
        cout<<"NO";
        return 0;
    }
    cout<<"YES";


    return 0;
}
