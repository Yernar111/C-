#include <iostream>
/* Любое натуральное число больше единицы можно представить в виде произведения степеней простых чисел единственным способом */
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
    for (int i=2;i<n;i++){
        if (n%i==0 && isPrime(i)){
            int a=0;
            while(n%i==0){
                a++;
                n/=i;
            }
            cout<<i<<"^"<<a<<" ";
        }
    }
    if (n>1)
        cout<<n<<"^"<<1;

	return 0;
}

