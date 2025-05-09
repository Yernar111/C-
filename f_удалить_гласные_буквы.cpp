#include <iostream>
#include <algorithm>
using namespace std;

bool vowel(char c){
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return false;
    return true;
}

int main(){
    string s,t="";
    getline(cin, s);
    for (int i=0;i<s.size();i++){
        if (vowel(s[i])){
            t+=s[i];
        }
    }
    cout<<t;

	return 0;
}

