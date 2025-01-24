#include <iostream>
/* Количество делителей числа */
using namespace std;

bool isPrime(int x){
    for (int i=2;i*i<=x;i++){
        if (x%i==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int k=1;
    for (int i=2;i<n;i++){
        if (n%i==0 && isPrime(i)){
            int a=0;
            while(n%i==0){
                a++;
                n/=i;
            }
            k*=a+1;
        }
    }
    if (n>1)
        k*=2;
    cout<<k;

	return 0;
}

