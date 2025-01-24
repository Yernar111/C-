#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int m=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='6' || s[i]=='9' || s[i]=='0')
            m++;
        else if (s[i]=='8')
            m=m+2;
    }
    cout<<m;

    return 0;

}
