#include <iostream>
using namespace std;

int main() {
    string s;
    int k=0,m=0;
    cin>>s;
    m=s[0]-48;
    for (int i=1;i<s.size();i++){
        k+=s[i]-48;
    }
    if (m==k%10)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
