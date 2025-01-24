#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
    cin>>s;

    for (int i=1;i<s.size();i++){
        if (s[i]==s[i-1]+1 || s[i]==s[i-1]){
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

	return 0;
}
