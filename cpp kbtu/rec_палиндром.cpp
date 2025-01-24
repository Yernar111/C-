#include <iostream>
#include <cmath>

using namespace std;

string palindrom(string s, int i, int j){
    if (i>=j)
        return "YES";

    if (s[i]!=s[j])
        return "NO";

    return palindrom(s, i+1,j-1);
}

int main(){
    string s;
    cin>>s;
    cout<<palindrom(s,0,s.size()-1);

	return 0;
}

