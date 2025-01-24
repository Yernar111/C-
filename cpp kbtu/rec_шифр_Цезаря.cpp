#include <iostream>
#include <string>
#include <stack>

using namespace std;

void check(string s, string t, int n, int i){
    if (i==s.size()){
        for (int i=0;i<t.size();i++){
            cout<<t[i];
        }
        return;
    }
    if (s[i]+n>'Z'){
        t+=char(s[i]-(26-n));
    }
    else{
        t+=char(s[i]+n);
    }
    return check(s,t,n,i+1);
}

int main(){
    string s;
    int n;
    string a="";
    cin>>n>>s;
    check(s,a,n,0);

	return 0;
}
