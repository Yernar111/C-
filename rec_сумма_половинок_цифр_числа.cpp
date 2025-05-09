#include <iostream>
using namespace std;

int f(int n){
    if (n/10==0){
        return n/2;
    }
    return f(n%10)+f(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}

