#include <iostream>

using namespace std;

int check(int n, int k){
    if (n==0)
        return k;
    return check(n/10,k+n%10);
}

int main(){
    int n,k=0;
    cin>>n;
    cout<<check(n,k);

	return 0;
}

