#include <bits/stdc++.h>
/* Вывести все i^i числа до n */
using namespace std;

long long till(){
    static long long n=-1;
    n++;
    return powl(n,n);
}

int main(){
    long long n;
    cin>>n;
    vector <long long> a(n+1);
    generate(a.begin(),a.end(),till);
    for (int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
