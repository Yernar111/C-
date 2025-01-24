#include <iostream>
using namespace std;

string dectohex(int n, string t){
    if (n==0){
        string s="";
        for (int i=t.size()-1;i>=0;i--){
            s+=t[i];
        }
        return s;
    }
    if (n%16>=10 && n%16<=15)
        t+=char(n%16%10+65);
    else
        t+=char(n%16+48);

    return dectohex(n/16, t);
}

int main(){
    int n,k=0;
    string t="";
    cin>>n;
    cout<<dectohex(n,t);

	return 0;
}
