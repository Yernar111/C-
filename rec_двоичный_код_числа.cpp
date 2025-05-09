#include <iostream>
#include <string>

using namespace std;

string binar(int n, string s){
    if (n==0){
        string t="";
        for (int i=s.size()-1;i>=0;i--){
            t+=s[i];
        }
        return t;
    }
    else if (n%2==0)
        s+="0";
    else if (n%2==1)
        s+="1";

    return binar(n/2, s);
}

int main(){
    int n;
    cin>>n;
    string s="";
    cout<<binar(n,s);
	return 0;
}

