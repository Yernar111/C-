#include <iostream>
using namespace std;

bool IsPrime(int a, int i){
    if (i*i>a)
        return true;
    if (a%i==0)
        return false;
    return IsPrime(a, i+1);
}

string reverse_(string g, int i, string t){
    if (i==-1)
        return g;
    g+=t[i];
    return reverse_(g,i-1,t);
}

string digits(string t, int n){
    if (n==0){
        string g="";
        int i=t.size()-1;
        g=reverse_(g,i,t);
        return g;
    }
    t+=char(n%10+48);
    return digits(t,n/10);
}

string check(int n, int k, string s){
    if (n>k)
        return s;
    if (IsPrime(n,2)){
        string t="";
        s+=digits(t,n)+" ";
    }
    return check(n+1,k,s);
}

int main(){
    int n,k;
    string s="";
    cin>>n>>k;
    cout<<check(n,k,s);
    return 0;
}
