#include <iostream>
using namespace std;
/*На какой позиции самая правая единица в двоичном коде*/

int main(){
    int n,i=0;
    cin>>n;
    int a[n];
    while(n!=0){
        a[i]=n%2;
        i++;
        n=n/2;
    }
    for (int j=0;j<=i-1;j++){
        if (a[j]==1){
            cout<<j;
            break;
        }
    }


    return 0;
}
