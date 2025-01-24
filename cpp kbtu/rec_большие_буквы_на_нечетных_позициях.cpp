#include <iostream>
/* ѕомен€ть буквы на большие на нечетных позици€х */
using namespace std;

string toUpper(string s, int i, string t){
    if (i==s.size())
        return t;
    if (i%2==0 && s[i]>='a' && s[i]<='z')
        t+=char(s[i]-32);
    else
        t+=s[i];
    return toUpper(s,i+1,t);
}

int main(){
    string s;
    cin>>s;
    cout<<toUpper(s,0,"");

    return 0;
}
