#include <iostream>
/* Выбрать из N чисел K чисел */
using namespace std;
int check(int n, int k){
    if (k==0 || k==n)
        return 1;
    return check(n-1, k-1) + check(n-1,k);
}

int main(){
    int n,k;
    cin>>n>>k;
    if (k>n)
        return 0;
    cout<<check(n,k);


	return 0;
}

