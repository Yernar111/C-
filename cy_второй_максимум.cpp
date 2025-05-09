#include <iostream>
using namespace std;
int main(){
    int n=1,b=0,i;
    while(n!=0){
        cin>>n;
        if (n>b){
            i=b;
            b=n;
        }
        else if (n<b && n!=0 && n>i){
            i=n;
        }
    }
    cout<<i;


    return 0;
}

