#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    string t=s+s[0];
    for (int i=0;i<=t.size()/2;i++){
        if (t[i]!=t[t.size()-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}
