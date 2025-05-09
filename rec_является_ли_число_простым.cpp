#include <iostream>
using namespace std;

bool IsPrime(int a, int i){
    if (i*i>a)
        return true;
    if (a%i==0)
        return false;
    return IsPrime(a, i+1);
}

int main(){
    int n;
    cin>>n;
    if (IsPrime(n,2))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
