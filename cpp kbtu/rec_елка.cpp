#include <iostream>
using namespace std;

string check2(int i, int n, string s){
    if (i==n)
        return s;
    return check2(i+1,n,s+" ");
}

string check3(int i, int n, string s){
    if (i==n)
        return s;
    return check3(i+1,n,s+"*");
}

void check(int n, int i){
    if (i>n)
        return;
    string s=check2(0,n-i,"");
    string t=check3(0,2*i-1,"");
    cout<<s<<t<<endl;
    return check(n,i+1);
}

int main(){
    int n;
    cin>>n;
    check(n,1);

    return 0;
}
