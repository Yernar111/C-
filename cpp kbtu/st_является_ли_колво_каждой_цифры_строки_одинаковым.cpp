#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a[s.size()]={};
    for (int i=0;i<s.size();i++){
        a[int(s[i]-48)]++;
    }
    sort (a,a+s.size());
    for (int i=s.size()-1;a[i-1]!=0;i--){
        if (a[i]!=a[i-1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}
