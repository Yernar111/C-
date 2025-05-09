#include <iostream>

using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    if (s.size()==t.size()){
        for (int i=0;i<s.size();i++){
            if (s[i]!=t[i]){
                cout<<"NO";
                return 0;
            }
        }
    }
    else{
        cout<<"NO";
        return 0;
    }
    cout<<"YES";

	return 0;
}

