#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,k=0,g=0;
    cin>>n;
    int m=n;
    while(m!=0){
        k++;
        m/=10;
    }

    while(n!=0){
        g=g+n%10*pow(10,k-1);
        n=n/10;
        k--;
    }
    cout<<g;

    return 0;
}
