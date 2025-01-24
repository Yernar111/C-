#include <iostream>

using namespace std;

string g(int n, string s, int i, int j){
    if (i>n){
        return s;
    }
    if (j>i){
        return g(n, s, i+1, 1);
    }
    s+=char(i+48);
    s+=" ";
    return g(n,s,i,j+1);
}

int main(){
    int n, i=1,j=1;
    string s="";
    cin>>n;
    cout<<g(n,s,i,j);

    return 0;
}
