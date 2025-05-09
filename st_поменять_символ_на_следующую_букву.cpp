#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++){
        if (s[i]!='z'){
            cout<<char(s[i]+1);
        }
        else{
            cout<<"a";
        }
    }

    return 0;
}

