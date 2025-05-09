#include <iostream>
#include <algorithm>
using namespace std;

char upper(char c, int n){
    if (n%2==0 && c>='a' && c<='z'){
        return char(c-32);
    }
    return c;
}

int main(){
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++){
        cout<<upper(s[i],i);
    }

	return 0;
}

