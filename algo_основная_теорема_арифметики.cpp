#include <iostream>
/* Любое натуральное число больше единицы можно представить в виде произведения простых чисел единственным способом */
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
    for (int i=2;i*i<=n;i++){
        if (n%i==0 && isPrime(i)){
            int a=0;
            while(n%i==0){
                a++;
                n/=i;
            }
            for (int j=0;j<a;j++){
                cout<<i<<" ";
            }
        }
    }
    if (n>1)
        cout<<n;

	return 0;
}



