#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b==0)
        return a;
    return gcd(b, a%b);
}

int max_(int m, int k){
    if (m>=k)
        return m;
    return k;
}

int loop(int n){
    int a[n],k;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            k=gcd(a[i],a[j]);
            m=max_(m,k);
        }
    }
    return m;
}

int main(){
    int n;
    cin>>n;
    cout<<loop(n);

	return 0;
}
