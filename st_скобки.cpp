#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int k=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='(')
            k++;
        else if(s[i]==')')
            k--;
        if (k<0)
            return false;
    }
    if (k==0)
        return true;
    return false;
}

int main(){
    string s;
    cin>>s;
    if(check(s)){
        cout<<"Yes";
    }
    else
        cout<<"No";

    return 0;

}
